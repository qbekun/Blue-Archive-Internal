#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB1B60)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONUNFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB3040)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB3370)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONPRESSED_OFFSET UNITYSDK_OFFSET(0x9CB36B0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONUNPRESSED_OFFSET UNITYSDK_OFFSET(0x9CB38B0)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkPickerItemView_TypeDefinitionIndex = 27186;

	class NXPAccountLinkPickerItemView : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Image* background; // 0x10
		::UnityEngine::UI::Image* border; // 0x18
		::UnityEngine::UI::Image* top; // 0x20
		::UnityEngine::UI::Image* topIcon; // 0x28
		::UnityEngine::UI::Text* topText; // 0x30
		Il2CppObject* attributes; // 0x38

		::System::Void .ctor(::UnityEngine::GameObject* arg, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void OnUnfocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONUNFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnFocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnpressed(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPICKERITEMVIEW_ONUNPRESSED_OFFSET))(arg, nullptr);
		}

	};
}

