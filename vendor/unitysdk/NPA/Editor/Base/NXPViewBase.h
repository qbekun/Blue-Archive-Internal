#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_BASE_NXPVIEWBASE_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9BEBA90)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9BEBAA0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_GET_UITHEME_OFFSET UNITYSDK_OFFSET(0x9BEBAB0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SET_UITHEME_OFFSET UNITYSDK_OFFSET(0x9BEBAC0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SETBACKPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BEBAD0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SETCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9BEBAE0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SHOW_OFFSET UNITYSDK_OFFSET(0x9BE76D0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_DISMISS_OFFSET UNITYSDK_OFFSET(0x9BEB830)
#define NPA_EDITOR_BASE_NXPVIEWBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9BEB930)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SELECTIONGROUPENTER_OFFSET UNITYSDK_OFFSET(0x9BEBAF0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9BEBB00)
#define NPA_EDITOR_BASE_NXPVIEWBASE_SELECTIONGROUPBACK_OFFSET UNITYSDK_OFFSET(0x9BEBB80)
#define NPA_EDITOR_BASE_NXPVIEWBASE_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9BEBBA0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0x9BEBD90)
#define NPA_EDITOR_BASE_NXPVIEWBASE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9BEBB40)
#define NPA_EDITOR_BASE_NXPVIEWBASE_ISCLICKABLE_OFFSET UNITYSDK_OFFSET(0x9BE77B0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_GET_DEFAULTTHEME_OFFSET UNITYSDK_OFFSET(0x9BEBDD0)
#define NPA_EDITOR_BASE_NXPVIEWBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE7980)
#define NPA_EDITOR_BASE_NXPVIEWBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BEBDE0)

namespace NPA::Editor::Base
{
	inline static constexpr unsigned int NXPViewBase_TypeDefinitionIndex = 26477;

	class NXPViewBase : public Il2CppObject
	{
	public:
		::System::String* imageBaseUrl; // 0x0
		::System::String* prefabBaseUrl; // 0x0
		::System::Int64 lastPressTime; // 0x10
		::System::Int64 delayTime; // 0x18
		::NPA::Editor::NXPSelectionGroup* _selectionGroup_k__BackingField; // 0x20
		ETheme* _UiTheme_k__BackingField; // 0x28
		::UnityEngine::GameObject* gameObject; // 0x30
		::System::Action* backPressCallback; // 0x38
		::System::Action* closeCallback; // 0x40

		::NPA::Editor::NXPSelectionGroup* get_selectionGroup()
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_selectionGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SET_SELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		ETheme* get_UiTheme()
		{
			return (return (ETheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_GET_UITHEME_OFFSET))(nullptr);
		}

		::System::Void set_UiTheme(ETheme* arg)
		{
			((::System::Void(*)(ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SET_UITHEME_OFFSET))(arg, nullptr);
		}

		::System::Void SetBackPressCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SETBACKPRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetCloseCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SETCLOSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_LOAD_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SHOW_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_DISMISS_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_DESTROY_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SELECTIONGROUPENTER_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_SELECTIONGROUPBACK_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnBackPressed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_ONBACKPRESSED_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Boolean IsClickable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_ISCLICKABLE_OFFSET))(nullptr);
		}

		ETheme* get_DefaultTheme()
		{
			return (return (ETheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_GET_DEFAULTTHEME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BASE_NXPVIEWBASE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

