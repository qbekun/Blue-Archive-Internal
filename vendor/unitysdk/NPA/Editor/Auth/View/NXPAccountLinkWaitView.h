#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB53D0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_SETLOCALIZATIONRESOURCES_OFFSET UNITYSDK_OFFSET(0x9CB5770)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_SETABORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB5790)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_ONABORT_OFFSET UNITYSDK_OFFSET(0x9CB57A0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_PREVENTUSERCONTROLS_OFFSET UNITYSDK_OFFSET(0x9CB57D0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_ALLOWUSERCONTROLS_OFFSET UNITYSDK_OFFSET(0x9CB58D0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9CB59C0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB5B70)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkWaitView_TypeDefinitionIndex = 27190;

	class NXPAccountLinkWaitView : public Il2CppObject
	{
	public:
		LocalizationResource* _stringResources; // 0x48
		::System::Action* _onAbort; // 0x68
		::UnityEngine::UI::Button* _cancelButton; // 0x70
		::UnityEngine::UI::Text* _cancelButtonText; // 0x78
		::UnityEngine::Color* _cancelButtonTextColor; // 0x80

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetLocalizationResources(LocalizationResource&* arg)
		{
			((::System::Void(*)(LocalizationResource&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_SETLOCALIZATIONRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetAbortCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_SETABORTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnAbort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_ONABORT_OFFSET))(nullptr);
		}

		::System::Void PreventUserControls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_PREVENTUSERCONTROLS_OFFSET))(nullptr);
		}

		::System::Void AllowUserControls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_ALLOWUSERCONTROLS_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKWAITVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

