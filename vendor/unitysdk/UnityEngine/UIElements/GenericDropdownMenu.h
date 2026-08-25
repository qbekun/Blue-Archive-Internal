#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class ScrollView; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class KeyboardNavigationManipulator; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class DetachFromPanelEvent; }
namespace UnityEngine::UIElements { class KeyboardNavigationOperation; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }
namespace UnityEngine::UIElements { class FocusOutEvent; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }

#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA3A3570)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A1AE0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0xA3A35A0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONDETACHFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA3A39D0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_HIDE_OFFSET UNITYSDK_OFFSET(0xA3A3D70)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_APPLY_OFFSET UNITYSDK_OFFSET(0xA3A3E50)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_APPLY_OFFSET UNITYSDK_OFFSET(0xA3A3E90)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA3A4200)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0xA3A4490)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA3A45D0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONFOCUSOUT_OFFSET UNITYSDK_OFFSET(0xA3A4710)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPARENTRESIZED_OFFSET UNITYSDK_OFFSET(0xA3A4860)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_UPDATESELECTION_OFFSET UNITYSDK_OFFSET(0xA3A4340)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_CHANGESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xA3A4870)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_GETSELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xA3A4030)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA3A4990)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ADDSEPARATOR_OFFSET UNITYSDK_OFFSET(0xA3A4D50)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ADDITEM_OFFSET UNITYSDK_OFFSET(0xA3A49D0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_DROPDOWN_OFFSET UNITYSDK_OFFSET(0xA3A4ED0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONTARGETELEMENTDETACHFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA3A61F0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONCONTAINERGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0xA3A6200)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ENSUREVISIBILITYINPARENT_OFFSET UNITYSDK_OFFSET(0xA3A58B0)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A6210)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU__APPLY_G__UPDATESELECTIONDOWN|27_0_OFFSET UNITYSDK_OFFSET(0xA3A4160)
#define UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU__APPLY_G__UPDATESELECTIONUP|27_1_OFFSET UNITYSDK_OFFSET(0xA3A40D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GenericDropdownMenu_TypeDefinitionIndex = 30327;

	class GenericDropdownMenu : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* itemUssClassName; // 0x8
		::System::String* labelUssClassName; // 0x10
		::System::String* containerInnerUssClassName; // 0x18
		::System::String* containerOuterUssClassName; // 0x20
		::System::String* checkmarkUssClassName; // 0x28
		::System::String* separatorUssClassName; // 0x30
		Il2CppObject* m_Items; // 0x10
		::UnityEngine::UIElements::VisualElement* m_MenuContainer; // 0x18
		::UnityEngine::UIElements::VisualElement* m_OuterContainer; // 0x20
		::UnityEngine::UIElements::ScrollView* m_ScrollView; // 0x28
		::UnityEngine::UIElements::VisualElement* m_PanelRootVisualContainer; // 0x30
		::UnityEngine::UIElements::VisualElement* m_TargetElement; // 0x38
		::UnityEngine::Rect* m_DesiredRect; // 0x40
		::UnityEngine::UIElements::KeyboardNavigationManipulator* m_NavigationManipulator; // 0x50
		::UnityEngine::Vector2* m_MousePosition; // 0x58

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONDETACHFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_HIDE_OFFSET))(nullptr);
		}

		::System::Void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyboardNavigationOperation*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Apply(::UnityEngine::UIElements::KeyboardNavigationOperation* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::KeyboardNavigationOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusOutEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONFOCUSOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnParentResized(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONPARENTRESIZED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSelection(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_UPDATESELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeSelectedIndex(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_CHANGESELECTEDINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetSelectedIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_GETSELECTEDINDEX_OFFSET))(nullptr);
		}

		::System::Void AddItem(::System::String* str, ::System::Boolean arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ADDITEM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddSeparator(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ADDSEPARATOR_OFFSET))(str, nullptr);
		}

		MenuItem* AddItem(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Object* arg)
		{
			return (return (MenuItem*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ADDITEM_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void DropDown(::UnityEngine::Rect* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_DROPDOWN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnTargetElementDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONTARGETELEMENTDETACHFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ONCONTAINERGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureVisibilityInParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_ENSUREVISIBILITYINPARENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _Apply_g__UpdateSelectionDown|27_0(::System::Int32 arg, <>c__DisplayClass27_0&* arg)
		{
			((::System::Void(*)(::System::Int32, <>c__DisplayClass27_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU__APPLY_G__UPDATESELECTIONDOWN|27_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _Apply_g__UpdateSelectionUp|27_1(::System::Int32 arg, <>c__DisplayClass27_0&* arg)
		{
			((::System::Void(*)(::System::Int32, <>c__DisplayClass27_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GENERICDROPDOWNMENU__APPLY_G__UPDATESELECTIONUP|27_1_OFFSET))(arg, arg, nullptr);
		}

	};
}

