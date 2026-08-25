#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class TweenAlpha;
class MXButton;
class UIEquipmentCard;
class CharacterObject;
class GearObject;
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::Data::Excel { class CharacterGearExcel; }
class UIPopup_GearInfo;

#define UIGEARCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x231FAB0)
#define UIGEARCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x23196F0)
#define UIGEARCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x23204F0)
#define UIGEARCARD_SETDOT_OFFSET UNITYSDK_OFFSET(0x23205D0)
#define UIGEARCARD_PLAYCANMOUNTEDTWEEN_OFFSET UNITYSDK_OFFSET(0x2320650)
#define UIGEARCARD_APPLYGEARUI_OFFSET UNITYSDK_OFFSET(0x231FEC0)
#define UIGEARCARD_SHOWEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x231FC20)
#define UIGEARCARD_SETEMPTYNOCHARACTER_OFFSET UNITYSDK_OFFSET(0x23208C0)
#define UIGEARCARD_ONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x23209F0)
#define UIGEARCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2320BD0)
#define UIGEARCARD__ONCLICKPARCEL_B__31_0_OFFSET UNITYSDK_OFFSET(0x2320BE0)

	inline static constexpr unsigned int UIGearCard_TypeDefinitionIndex = 4916;

	class UIGearCard : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* dot; // 0x18
		::UnityEngine::GameObject* lockCover; // 0x20
		::UnityEngine::GameObject* notMounted; // 0x28
		::UnityEngine::GameObject* mounted; // 0x30
		::UnityEngine::GameObject* empty; // 0x38
		UILabel* openLevelLabel; // 0x40
		UISprite* favorIcon; // 0x48
		UILabel* levelLabel; // 0x50
		::UnityEngine::GameObject* tierObj; // 0x58
		::Il2CppArray<::System::Object*>* tierLabels; // 0x60
		::Il2CppArray<::System::Object*>* images; // 0x68
		Il2CppObject* gearBGs; // 0x70
		TweenAlpha* dim; // 0x78
		UILabel* gearName; // 0x80
		MXButton* parcelClickBtn; // 0x88
		UIEquipmentCard* equipmentCard; // 0x90
		::UnityEngine::GameObject* emptyNoCharacter; // 0x98
		::System::Boolean showGearPopupOnLocked; // 0xA0
		::System::Boolean showRedDot; // 0xA1
		CharacterObject* charObj; // 0xA8
		GearObject* gearObj; // 0xB0
		::System::Int64 characterId; // 0xB8
		::MX::GameLogic::DBModel::AssistCharacterDB* assistCharacterDB; // 0xC0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(GearObject* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(GearObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_SETDOT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayCanMountedTween(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_PLAYCANMOUNTEDTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyGearUI(::MX::Data::Excel::CharacterGearExcel* arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::String* str, ::System::Int32 arg5)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterGearExcel*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_APPLYGEARUI_OFFSET))(arg, arg2, arg3, arg4, str, arg5, nullptr);
		}

		::System::Void ShowEmptyState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_SHOWEMPTYSTATE_OFFSET))(nullptr);
		}

		::System::Void SetEmptyNoCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_SETEMPTYNOCHARACTER_OFFSET))(nullptr);
		}

		::System::Void OnClickParcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_ONCLICKPARCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickParcel_b__31_0(UIPopup_GearInfo* arg)
		{
			((::System::Void(*)(UIPopup_GearInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARCARD__ONCLICKPARCEL_B__31_0_OFFSET))(arg, nullptr);
		}

	};

