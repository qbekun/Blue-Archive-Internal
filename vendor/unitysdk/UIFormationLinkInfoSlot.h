#pragma once
#include "unitysdk.h"

class UICharacterCard;
namespace UnityEngine { class GameObject; }
class MXButton;
class CharacterObject;

#define UIFORMATIONLINKINFOSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2544CA0)
#define UIFORMATIONLINKINFOSLOT_ONSLOTSELECTED_OFFSET UNITYSDK_OFFSET(0x2544970)
#define UIFORMATIONLINKINFOSLOT_ONCLICKSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x2544DF0)
#define UIFORMATIONLINKINFOSLOT_CHECKSAVEDSELECTION_OFFSET UNITYSDK_OFFSET(0x25438C0)
#define UIFORMATIONLINKINFOSLOT_SETUI_OFFSET UNITYSDK_OFFSET(0x2544F00)
#define UIFORMATIONLINKINFOSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2543810)
#define UIFORMATIONLINKINFOSLOT__SETUI_B__20_0_OFFSET UNITYSDK_OFFSET(0x2545240)
#define UIFORMATIONLINKINFOSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25452E0)
#define UIFORMATIONLINKINFOSLOT_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x25452F0)
#define UIFORMATIONLINKINFOSLOT_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2545300)
#define UIFORMATIONLINKINFOSLOT_SETABLE_OFFSET UNITYSDK_OFFSET(0x25451C0)
#define UIFORMATIONLINKINFOSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2545200)
#define UIFORMATIONLINKINFOSLOT_SETSELECT_OFFSET UNITYSDK_OFFSET(0x2544DC0)

	inline static constexpr unsigned int UIFormationLinkInfoSlot_TypeDefinitionIndex = 6068;

	class UIFormationLinkInfoSlot : public Il2CppObject
	{
	public:
		UICharacterCard* TopCard; // 0x18
		::UnityEngine::GameObject* TopLeader; // 0x20
		::UnityEngine::GameObject* TopAssist; // 0x28
		UICharacterCard* BottomCard; // 0x30
		::UnityEngine::GameObject* Able; // 0x38
		::UnityEngine::GameObject* Disable; // 0x40
		::UnityEngine::GameObject* Select; // 0x48
		MXButton* SelectButton; // 0x50
		::UnityEngine::GameObject* NotEmptySet; // 0x58
		::UnityEngine::GameObject* EmptySet; // 0x60
		CharacterObject* tssObject; // 0x68
		CharacterObject* characterToInteractObject; // 0x70
		Il2CppObject* tssExcel; // 0x78
		Il2CppObject* onClickSelectButton; // 0x90
		::System::Boolean _Selected_k__BackingField; // 0x98

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnSlotSelected(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_ONSLOTSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_ONCLICKSELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void CheckSavedSelection(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_CHECKSAVEDSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(CharacterObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(CharacterObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _SetUI_b__20_0(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT__SETUI_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetAble(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_SETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_SETEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONLINKINFOSLOT_SETSELECT_OFFSET))(arg, nullptr);
		}

	};

