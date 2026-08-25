#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }
class MXUIKeyShortcut;
namespace UnityEngine { class Transform; }
class UCButtonVisualState;
class RefreshEventType;
namespace MXUnderCover { class SwitchedPlayerMessage; }

#define MXUNDERCOVER_UIUCPLAYERBUTTON_SETACTIVEKEYMAPSHORTICON_OFFSET UNITYSDK_OFFSET(0xDC4090)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_APPLYREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0xDC5F80)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_GETKEYMAPSHORTICON_OFFSET UNITYSDK_OFFSET(0xDC5E40)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_SETICON_OFFSET UNITYSDK_OFFSET(0xDC3DF0)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_ONSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDC5F90)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_SETENABLE_OFFSET UNITYSDK_OFFSET(0xDC1900)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xDC5FA0)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_GET_BUTTONVISUALSTATE_OFFSET UNITYSDK_OFFSET(0xDC6110)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_SET_BUTTONVISUALSTATE_OFFSET UNITYSDK_OFFSET(0xDC6120)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_SETBUTTONVISUALSTATE_OFFSET UNITYSDK_OFFSET(0xDC6130)
#define MXUNDERCOVER_UIUCPLAYERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC0D90)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCPlayerButton_TypeDefinitionIndex = 10029;

	class UIUCPlayerButton : public Il2CppObject
	{
	public:
		::UnityEngine::BoxCollider* touchCollider; // 0x70
		::UnityEngine::GameObject* EnableObject; // 0x78
		::UnityEngine::GameObject* DisableObject; // 0x80
		::Il2CppArray<::System::Object*>* iconTextures; // 0x88
		MXUIKeyShortcut* _keyMappingShortcut; // 0x90
		::UnityEngine::Transform* KeymapShortIcon; // 0x98
		UCButtonVisualState* _ButtonVisualState_k__BackingField; // 0xA0

		::System::Void SetActiveKeymapShortIcon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_SETACTIVEKEYMAPSHORTICON_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyRefreshEvent(RefreshEventType* arg)
		{
			((::System::Void(*)(RefreshEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_APPLYREFRESHEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetKeymapShortIcon()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_GETKEYMAPSHORTICON_OFFSET))(nullptr);
		}

		::System::Void SetIcon(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_SETICON_OFFSET))(str, nullptr);
		}

		::System::Void OnSwitchPlayer(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_ONSWITCHPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_SETEMPTY_OFFSET))(nullptr);
		}

		UCButtonVisualState* get_ButtonVisualState()
		{
			return ((UCButtonVisualState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_GET_BUTTONVISUALSTATE_OFFSET))(nullptr);
		}

		::System::Void set_ButtonVisualState(UCButtonVisualState* arg)
		{
			((::System::Void(*)(UCButtonVisualState*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_SET_BUTTONVISUALSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonVisualState(UCButtonVisualState* arg)
		{
			((::System::Void(*)(UCButtonVisualState*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_SETBUTTONVISUALSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

