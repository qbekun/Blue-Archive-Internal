#pragma once
#include "unitysdk.h"

class UIEquipmentInfo;
class MXButton;
class UIEquipmentCard;
class UIEquipmentChangePopupList;
class CharacterObject;
class EquipmentObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEQUIPMENTCHANGEPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x231ECC0)
#define UIEQUIPMENTCHANGEPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x231EE40)
#define UIEQUIPMENTCHANGEPOPUP_HANDLEEQUIPMENTITEMEQUIPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x231F120)
#define UIEQUIPMENTCHANGEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x231F210)
#define UIEQUIPMENTCHANGEPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x231F340)
#define UIEQUIPMENTCHANGEPOPUP_SETPARCELS_OFFSET UNITYSDK_OFFSET(0x231F490)
#define UIEQUIPMENTCHANGEPOPUP_ONCLICKEQUIP_OFFSET UNITYSDK_OFFSET(0x231F720)
#define UIEQUIPMENTCHANGEPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x231F930)
#define UIEQUIPMENTCHANGEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x231FA30)
#define UIEQUIPMENTCHANGEPOPUP_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x231EE60)

	inline static constexpr unsigned int UIEquipmentChangePopup_TypeDefinitionIndex = 4914;

	class UIEquipmentChangePopup : public Il2CppObject
	{
	public:
		UIEquipmentInfo* EquipmentInfo; // 0xD8
		MXButton* EquipButton; // 0xE0
		UIEquipmentCard* EquipmentCard; // 0xE8
		UIEquipmentChangePopupList* equipmentList; // 0xF0
		CharacterObject* characterObject; // 0xF8
		::System::Int32 slotIndex; // 0x100
		::System::Int64 _equipmentId; // 0x108
		EquipmentObject* uiDummyEquipment; // 0x110
		EquipmentObject* ownEquipment; // 0x118
		Il2CppObject* requiredEquipmentMaterials; // 0x120

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEquipmentItemEquipResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_HANDLEEQUIPMENTITEMEQUIPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterObject* arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(CharacterObject*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetParcels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_SETPARCELS_OFFSET))(nullptr);
		}

		::System::Void OnClickEquip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_ONCLICKEQUIP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGEPOPUP_REFRESHUI_OFFSET))(nullptr);
		}

	};

