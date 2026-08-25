#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
namespace MXField::UI { class UIFieldLobbyBattleButton; }
namespace MXField::UI { class UIFieldLobbyFreeModeButton; }

#define MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9A590)
#define MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_GET_MISSONBUTTON_OFFSET UNITYSDK_OFFSET(0xE9A5A0)
#define MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_GET_BATTLEBUTTON_OFFSET UNITYSDK_OFFSET(0xE9A5B0)
#define MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xE9A5C0)
#define MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_GET_FREEMODEBUTTON_OFFSET UNITYSDK_OFFSET(0xE9A5E0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldLobby_ButtonGroup_TypeDefinitionIndex = 10713;

	class UIFieldLobby_ButtonGroup : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _root; // 0x10
		MXButton* _missionButton; // 0x18
		::MXField::UI::UIFieldLobbyBattleButton* _battleButton; // 0x20
		::MXField::UI::UIFieldLobbyFreeModeButton* _freeModeButton; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_.CTOR_OFFSET))(nullptr);
		}

		MXButton* get_MissonButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_GET_MISSONBUTTON_OFFSET))(nullptr);
		}

		::MXField::UI::UIFieldLobbyBattleButton* get_BattleButton()
		{
			return ((::MXField::UI::UIFieldLobbyBattleButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_GET_BATTLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::MXField::UI::UIFieldLobbyFreeModeButton* get_FreeModeButton()
		{
			return ((::MXField::UI::UIFieldLobbyFreeModeButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_BUTTONGROUP_GET_FREEMODEBUTTON_OFFSET))(nullptr);
		}

	};
}

