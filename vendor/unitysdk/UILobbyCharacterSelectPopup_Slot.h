#pragma once
#include "unitysdk.h"

class UICharacterCard;
namespace UnityEngine { class GameObject; }
class UILabel;
class CharacterObject;
class LobbyCharacterSelectItem;
namespace FlatData { class RewardTag; }
class UICharacterSelectPopupSelectedMessage;

#define UILOBBYCHARACTERSELECTPOPUP_SLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x266D270)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x266DB30)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x266DC80)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT__SETDATA_G__UPDATESORTINGUI|18_1_OFFSET UNITYSDK_OFFSET(0x266D720)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x266DC90)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_HANDLESELECTEDLOBBYCHARACTERCARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x266DCD0)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x266DCF0)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_SETSELECTEDUI_OFFSET UNITYSDK_OFFSET(0x266D9B0)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT__SETDATA_G__UPDATEMEMORYUI|18_0_OFFSET UNITYSDK_OFFSET(0x266D370)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x266DDB0)
#define UILOBBYCHARACTERSELECTPOPUP_SLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x266DDC0)

	inline static constexpr unsigned int UILobbyCharacterSelectPopup_Slot_TypeDefinitionIndex = 6694;

	class UILobbyCharacterSelectPopup_Slot : public ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand
	{
	public:
		UICharacterCard* characterCard; // 0x88
		::UnityEngine::GameObject* selectNumberMark; // 0x90
		UILabel* selectNumberLabel; // 0x98
		::UnityEngine::GameObject* memoryExist; // 0xA0
		::UnityEngine::GameObject* memoryOverOne; // 0xA8
		::UnityEngine::GameObject* memoryOn; // 0xB0
		::UnityEngine::GameObject* memoryOff; // 0xB8
		UILabel* sortLabel; // 0xC0
		::UnityEngine::GameObject* favorObject; // 0xC8
		UILabel* favorLabel; // 0xD0
		::System::Boolean _Selected_k__BackingField; // 0xD8
		CharacterObject* characterObject; // 0xE0

		::System::Void SetData(LobbyCharacterSelectItem* arg, ::System::Boolean arg2, ::FlatData::RewardTag* arg3)
		{
			((::System::Void(*)(LobbyCharacterSelectItem*, ::System::Boolean, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_g__UpdateSortingUI|18_1(<>c__DisplayClass18_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass18_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT__SETDATA_G__UPDATESORTINGUI|18_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectedLobbyCharacterCardMessage(UICharacterSelectPopupSelectedMessage* arg)
		{
			return ((::System::Boolean(*)(UICharacterSelectPopupSelectedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_HANDLESELECTEDLOBBYCHARACTERCARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetSelectedUI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_SETSELECTEDUI_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_g__UpdateMemoryUI|18_0(<>c__DisplayClass18_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass18_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT__SETDATA_G__UPDATEMEMORYUI|18_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCHARACTERSELECTPOPUP_SLOT_AWAKE_OFFSET))(nullptr);
		}

	};

