#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Web::MacOS { class NXPWebBrowserOSX; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine::Events { class UnityAction; }

#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9DA87F0)
#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9DA8800)
#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA8810)
#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0x9DA88A0)
#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9DA88B0)
#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9DA8FF0)
#define NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_ONJSDIALOGCLICK_OFFSET UNITYSDK_OFFSET(0x9DA8F20)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int GameScaleWebJSAlertDialog_TypeDefinitionIndex = 26378;

	class GameScaleWebJSAlertDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Web::MacOS::NXPWebBrowserOSX* webBrowser; // 0x10
		JsDialogType* type; // 0x18
		::System::String* title; // 0x20
		::System::String* message; // 0x28
		::System::Action* closeCallback; // 0x30
		::UnityEngine::Canvas* parentCanvas; // 0x38
		::UnityEngine::GameObject* gameObject; // 0x40
		::NPA::Editor::NXPSelectionGroup* _selectionGroup_k__BackingField; // 0x48

		::NPA::Editor::NXPSelectionGroup* get_selectionGroup()
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_selectionGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SET_SELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::Editor::Web::MacOS::NXPWebBrowserOSX* arg, JsDialogType* arg, ::System::String* str, ::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::MacOS::NXPWebBrowserOSX*, JsDialogType*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_.CTOR_OFFSET))(arg, arg, str, str, arg, nullptr);
		}

		::System::Void SetParentView(::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SETPARENTVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::UnityEngine::Events::UnityAction* OnJsDialogClick(::System::Boolean arg, ::System::String* str)
		{
			return (return (::UnityEngine::Events::UnityAction*(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBJSALERTDIALOG_ONJSDIALOGCLICK_OFFSET))(arg, str, nullptr);
		}

	};
}

