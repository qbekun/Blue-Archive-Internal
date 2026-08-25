#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UIGrid;
class UILabel;
namespace UnityEngine { class Animation; }
namespace FlatData { class Rarity; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace UnityEngine { class WaitForSeconds; }
namespace FlatData { class GachaRewardType; }
namespace MX::Data { class PickupDuplicateBonusExcelData; }
class RewardConfirmData;
namespace MX::Data { class PickupFirstGetBonusExcelData; }

#define UIGACHAITEM_CO_PLAYREWARD_OFFSET UNITYSDK_OFFSET(0x25B47E0)
#define UIGACHAITEM_GET_ISPICKUPFIRSTGET_OFFSET UNITYSDK_OFFSET(0x25B4880)
#define UIGACHAITEM__INITIALIZEBEFOREHAND_B__42_0_OFFSET UNITYSDK_OFFSET(0x25B4890)
#define UIGACHAITEM_CO_ANIMATIONPROCESS_OFFSET UNITYSDK_OFFSET(0x25B48D0)
#define UIGACHAITEM_INITIALIZEBYREWARDCONFIRMDATA_OFFSET UNITYSDK_OFFSET(0x25B4960)
#define UIGACHAITEM_SET_ISPICKUP_OFFSET UNITYSDK_OFFSET(0x25B4D10)
#define UIGACHAITEM_GET_ISPICKUP_OFFSET UNITYSDK_OFFSET(0x25B4D20)
#define UIGACHAITEM_INITIALIZEBEFOREHAND_OFFSET UNITYSDK_OFFSET(0x25B4D30)
#define UIGACHAITEM_CO_PLAYLOOPANIM_OFFSET UNITYSDK_OFFSET(0x25B5150)
#define UIGACHAITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x25B51E0)
#define UIGACHAITEM_SET_ISPICKUPFIRSTGET_OFFSET UNITYSDK_OFFSET(0x25B52A0)
#define UIGACHAITEM_GET_ISFINISHONECYCLEDIRECTING_OFFSET UNITYSDK_OFFSET(0x25B52B0)
#define UIGACHAITEM__INITIALIZEBEFOREHAND_B__42_1_OFFSET UNITYSDK_OFFSET(0x25B52C0)
#define UIGACHAITEM_OPENCARD_OFFSET UNITYSDK_OFFSET(0x25B5300)

	inline static constexpr unsigned int UIGachaItem_TypeDefinitionIndex = 6263;

	class UIGachaItem : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* cardItem; // 0x18
		UITexture* CardImage; // 0x20
		::UnityEngine::GameObject* FrontSR; // 0x28
		::UnityEngine::GameObject* FrontSSR; // 0x30
		::UnityEngine::GameObject* BackR; // 0x38
		::UnityEngine::GameObject* BackSR; // 0x40
		::UnityEngine::GameObject* BackSSR; // 0x48
		UITexture* RewardCard; // 0x50
		::UnityEngine::GameObject* NewCardParent; // 0x58
		::UnityEngine::GameObject* NewCard; // 0x60
		::UnityEngine::GameObject* NewFX; // 0x68
		::UnityEngine::GameObject* PickupMark; // 0x70
		::UnityEngine::GameObject* PickupFirstGet; // 0x78
		UIGrid* NewCardGrid; // 0x80
		UIGrid* NewPickupGrid; // 0x88
		::Il2CppArray<::System::Object*>* StarObjects; // 0x90
		::Il2CppArray<::System::Object*>* FxUiObjects; // 0x98
		UILabel* Amount; // 0xA0
		::UnityEngine::Animation* Anim; // 0xA8
		::FlatData::Rarity* rarity; // 0xB0
		::MX::Data::Excel::CharacterExcel* characterExcel; // 0xB8
		::System::Boolean IsNewCard; // 0xC8
		::MX::GameLogic::Parcel::ParcelInfo* pickupBonus; // 0xD0
		::MX::GameLogic::Parcel::ParcelInfo* pickupFirstGetBonus; // 0xD8
		::System::Boolean _IsPickup_k__BackingField; // 0xE0
		::System::Boolean _IsPickupFirstGet_k__BackingField; // 0xE1
		::System::String* Anim01_Null; // 0x0
		::System::String* Anim01; // 0x0
		::System::String* Anim02; // 0x0
		::System::String* Anim02_New; // 0x0
		::System::String* Anim_Rotate; // 0x0
		::UnityEngine::WaitForSeconds* waitForShowCardTime; // 0xE8
		::UnityEngine::WaitForSeconds* waitForShowRewardTime; // 0xF0
		::System::Boolean isFinishOneCycleDirecting; // 0xF8

		::System::Collections::IEnumerator* co_PlayReward(::FlatData::GachaRewardType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::GachaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_CO_PLAYREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPickupFirstGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_GET_ISPICKUPFIRSTGET_OFFSET))(nullptr);
		}

		::System::Boolean _InitializeBeforehand_b__42_0(::MX::Data::PickupDuplicateBonusExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::PickupDuplicateBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM__INITIALIZEBEFOREHAND_B__42_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_AnimationProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_CO_ANIMATIONPROCESS_OFFSET))(nullptr);
		}

		::System::Void InitializeByRewardConfirmData(RewardConfirmData* arg)
		{
			((::System::Void(*)(RewardConfirmData*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_INITIALIZEBYREWARDCONFIRMDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPickup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_SET_ISPICKUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPickup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_GET_ISPICKUP_OFFSET))(nullptr);
		}

		::System::Void InitializeBeforehand(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3, ::MX::Data::PickupFirstGetBonusExcelData* arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::MX::Data::PickupFirstGetBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_INITIALIZEBEFOREHAND_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* co_PlayLoopAnim()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_CO_PLAYLOOPANIM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsPickupFirstGet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_SET_ISPICKUPFIRSTGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFinishOneCycleDirecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_GET_ISFINISHONECYCLEDIRECTING_OFFSET))(nullptr);
		}

		::System::Boolean _InitializeBeforehand_b__42_1(::MX::Data::PickupDuplicateBonusExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::PickupDuplicateBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM__INITIALIZEBEFOREHAND_B__42_1_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAITEM_OPENCARD_OFFSET))(nullptr);
		}

	};

