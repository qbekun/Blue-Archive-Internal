#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIWidget;
namespace UnityEngine { class Transform; }
class UITexture;
class UIRewardConfirmRightInfoCharacter;
class UIRewardConfirmRightInfoTSS;
class UIRewardConfirmRightInfoEquipment;
class UIRewardConfirmBottomCharacterInfo;
class UIRewardConfirmBottomOtherInfo;
class UIRewardConfirmAnimatorTSS;
class PortraitSpineCharacter;
namespace MX::Data::Excel { class EquipmentExcel; }
namespace FlatData { class ParcelType; }
class RewardConfirmData;
namespace MX::Data::Excel { class CharacterExcel; }
namespace FlatData { class Rarity; }

#define UIREWARDCONFIRMRESULT__SETSPINE_B__26_0_OFFSET UNITYSDK_OFFSET(0x27B4550)
#define UIREWARDCONFIRMRESULT_SETRESULTINFOEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x27AFDD0)
#define UIREWARDCONFIRMRESULT_HIDEREWARDCONFIRMRESULT_OFFSET UNITYSDK_OFFSET(0x27B0810)
#define UIREWARDCONFIRMRESULT_GET_CHARACTERSPEECH_OFFSET UNITYSDK_OFFSET(0x27B46B0)
#define UIREWARDCONFIRMRESULT_SETSPINE_OFFSET UNITYSDK_OFFSET(0x27AFF70)
#define UIREWARDCONFIRMRESULT_SETOVERLABREWARDLIST_OFFSET UNITYSDK_OFFSET(0x27B28F0)
#define UIREWARDCONFIRMRESULT_GET_OVERLABPOPUP_OFFSET UNITYSDK_OFFSET(0x27B46C0)
#define UIREWARDCONFIRMRESULT_SETRESULTINFOTSS_OFFSET UNITYSDK_OFFSET(0x27AFD70)
#define UIREWARDCONFIRMRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B47D0)
#define UIREWARDCONFIRMRESULT_SETRESULTINFOCHARACTER_OFFSET UNITYSDK_OFFSET(0x27AFD10)
#define UIREWARDCONFIRMRESULT_SETRESULTRARITYBG_OFFSET UNITYSDK_OFFSET(0x27B0400)

	inline static constexpr unsigned int UIRewardConfirmResult_TypeDefinitionIndex = 7528;

	class UIRewardConfirmResult : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* overLabPopup; // 0x18
		::UnityEngine::GameObject* rBG; // 0x20
		::UnityEngine::GameObject* srBG; // 0x28
		::UnityEngine::GameObject* ssrBG; // 0x30
		UIWidget* spineRenderOrder; // 0x38
		::UnityEngine::GameObject* objImgCharacter; // 0x40
		::UnityEngine::GameObject* objImgTSS; // 0x48
		::UnityEngine::GameObject* objImgEquipment; // 0x50
		::UnityEngine::Transform* spineForntParentCharacter; // 0x58
		UITexture* equipmentTexture; // 0x60
		UIRewardConfirmRightInfoCharacter* uiRewardConfirmRightInfoCharacter; // 0x68
		UIRewardConfirmRightInfoTSS* uiRewardConfirmRightInfoTSS; // 0x70
		UIRewardConfirmRightInfoEquipment* uIRewardConfirmRightInfoEquipment; // 0x78
		UIRewardConfirmBottomCharacterInfo* uiRewardConfirmBottomCharacterInfo; // 0x80
		UIRewardConfirmBottomOtherInfo* uiRewardConfirmBottonOtherInfo; // 0x88
		UIRewardConfirmAnimatorTSS* uiRewardConfirmAnimatorTSS_Tank; // 0x90
		UIRewardConfirmAnimatorTSS* uiRewardConfirmAnimatorTSS_Heli; // 0x98
		Il2CppObject* rewardItems; // 0xA0
		::UnityEngine::Transform* rewardItemDisplayTransform; // 0xA8
		PortraitSpineCharacter* frontSpine; // 0xB0

		::System::Void _SetSpine_b__26_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT__SETSPINE_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetResultInfoEquipment(::MX::Data::Excel::EquipmentExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_SETRESULTINFOEQUIPMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HideRewardConfirmResult(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_HIDEREWARDCONFIRMRESULT_OFFSET))(arg, nullptr);
		}

		UIRewardConfirmBottomCharacterInfo* get_CharacterSpeech()
		{
			return ((UIRewardConfirmBottomCharacterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_GET_CHARACTERSPEECH_OFFSET))(nullptr);
		}

		::System::Void SetSpine(::FlatData::ParcelType* arg, ::System::Int64 arg2, UIWidget* arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_SETSPINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetOverLabRewardList(RewardConfirmData* arg)
		{
			((::System::Void(*)(RewardConfirmData*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_SETOVERLABREWARDLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_OverLabPopup()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_GET_OVERLABPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetResultInfoTSS(::MX::Data::Excel::CharacterExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_SETRESULTINFOTSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetResultInfoCharacter(::MX::Data::Excel::CharacterExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_SETRESULTINFOCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetResultRarityBG(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMRESULT_SETRESULTRARITYBG_OFFSET))(arg, nullptr);
		}

	};

