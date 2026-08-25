#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IFocusRing; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class DispatchMode; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class Focusable&; }

#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA317CE0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSRING_OFFSET UNITYSDK_OFFSET(0xA317D80)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA3139E0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xA318010)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETRETARGETEDFOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA317D90)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETLEAFFOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA3181B0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ISLOCALELEMENT_OFFSET UNITYSDK_OFFSET(0xA317FD0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ISPENDINGFOCUS_OFFSET UNITYSDK_OFFSET(0xA318250)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SETFOCUSTOLASTFOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA318300)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_BLURLASTFOCUSEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA318380)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_DOFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA318410)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_FOCUSNEXTINDIRECTION_OFFSET UNITYSDK_OFFSET(0xA318630)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTORELEASEFOCUS_OFFSET UNITYSDK_OFFSET(0xA3187B0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_RELEASEFOCUS_OFFSET UNITYSDK_OFFSET(0xA318960)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTOGRABFOCUS_OFFSET UNITYSDK_OFFSET(0xA318B10)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GRABFOCUS_OFFSET UNITYSDK_OFFSET(0xA318CC0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_BLUR_OFFSET UNITYSDK_OFFSET(0xA316E80)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET UNITYSDK_OFFSET(0xA316D60)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET UNITYSDK_OFFSET(0xA317890)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUSONEVENT_OFFSET UNITYSDK_OFFSET(0xA3172B0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_REEVALUATEFOCUS_OFFSET UNITYSDK_OFFSET(0xA318E70)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETFOCUSABLEPARENTFORPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0xA318F60)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_IMGUIKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0xA319090)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SET_IMGUIKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0xA3190A0)
#define UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SYNCIMGUIFOCUS_OFFSET UNITYSDK_OFFSET(0xA3190B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusController_TypeDefinitionIndex = 30100;

	class FocusController : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IFocusRing* _focusRing_k__BackingField; // 0x10
		Il2CppObject* m_FocusedElements; // 0x18
		::UnityEngine::UIElements::Focusable* m_LastFocusedElement; // 0x20
		::UnityEngine::UIElements::Focusable* m_LastPendingFocusedElement; // 0x28
		::System::Int32 m_PendingFocusCount; // 0x30
		::System::Int32 _imguiKeyboardControl_k__BackingField; // 0x34

		::System::Void .ctor(::UnityEngine::UIElements::IFocusRing* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IFocusRing*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IFocusRing* get_focusRing()
		{
			return (return (::UnityEngine::UIElements::IFocusRing*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSRING_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Focusable* get_focusedElement()
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_FOCUSEDELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean IsFocused(::UnityEngine::UIElements::Focusable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ISFOCUSED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETRETARGETEDFOCUSEDELEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetLeafFocusedElement()
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETLEAFFOCUSEDELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean IsLocalElement(::UnityEngine::UIElements::Focusable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ISLOCALELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPendingFocus(::UnityEngine::UIElements::Focusable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ISPENDINGFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetFocusToLastFocusedElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SETFOCUSTOLASTFOCUSEDELEMENT_OFFSET))(nullptr);
		}

		::System::Void BlurLastFocusedElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_BLURLASTFOCUSEDELEMENT_OFFSET))(nullptr);
		}

		::System::Void DoFocusChange(::UnityEngine::UIElements::Focusable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_DOFOCUSCHANGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* FocusNextInDirection(::UnityEngine::UIElements::FocusChangeDirection* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::FocusChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_FOCUSNEXTINDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTORELEASEFOCUS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReleaseFocus(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_RELEASEFOCUS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_ABOUTTOGRABFOCUS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GrabFocus(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg, ::System::Boolean arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::System::Boolean, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GRABFOCUS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blur(::UnityEngine::UIElements::Focusable* arg, ::System::Boolean arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::System::Boolean, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_BLUR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwitchFocus(::UnityEngine::UIElements::Focusable* arg, ::System::Boolean arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::System::Boolean, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwitchFocus(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg, ::System::Boolean arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::System::Boolean, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SWITCHFOCUSONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ReevaluateFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_REEVALUATEFOCUS_OFFSET))(nullptr);
		}

		::System::Boolean GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::Focusable&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GETFOCUSABLEPARENTFORPOINTEREVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_imguiKeyboardControl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_GET_IMGUIKEYBOARDCONTROL_OFFSET))(nullptr);
		}

		::System::Void set_imguiKeyboardControl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SET_IMGUIKEYBOARDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void SyncIMGUIFocus(::System::Int32 arg, ::UnityEngine::UIElements::Focusable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::Focusable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCONTROLLER_SYNCIMGUIFOCUS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

