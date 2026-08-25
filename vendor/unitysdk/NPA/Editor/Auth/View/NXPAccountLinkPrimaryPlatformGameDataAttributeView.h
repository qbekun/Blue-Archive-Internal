#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class GameObject; }
namespace NPA::Editor::Auth::View { class NXPAccountLinkPickerItemAttributeData; }

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPRIMARYPLATFORMGAMEDATAATTRIBUTEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB3BE0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPRIMARYPLATFORMGAMEDATAATTRIBUTEVIEW_SETUNFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB3D30)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPRIMARYPLATFORMGAMEDATAATTRIBUTEVIEW_SETFOCUSED_OFFSET UNITYSDK_OFFSET(0x9CB3E60)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkPrimaryPlatformGameDataAttributeView_TypeDefinitionIndex = 27187;

	class NXPAccountLinkPrimaryPlatformGameDataAttributeView : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* key; // 0x10
		::UnityEngine::UI::Text* value; // 0x18

		::System::Void .ctor(::UnityEngine::GameObject* arg, ::NPA::Editor::Auth::View::NXPAccountLinkPickerItemAttributeData* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::NPA::Editor::Auth::View::NXPAccountLinkPickerItemAttributeData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPRIMARYPLATFORMGAMEDATAATTRIBUTEVIEW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetUnfocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPRIMARYPLATFORMGAMEDATAATTRIBUTEVIEW_SETUNFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void SetFocused(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKPRIMARYPLATFORMGAMEDATAATTRIBUTEVIEW_SETFOCUSED_OFFSET))(arg, nullptr);
		}

	};
}

