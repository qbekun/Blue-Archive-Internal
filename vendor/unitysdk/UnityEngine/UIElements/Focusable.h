#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_FOCUSABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3168B0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSABLE_OFFSET UNITYSDK_OFFSET(0xA3168E0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_FOCUSABLE_OFFSET UNITYSDK_OFFSET(0xA3168F0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0xA316900)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_TABINDEX_OFFSET UNITYSDK_OFFSET(0xA316910)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_DELEGATESFOCUS_OFFSET UNITYSDK_OFFSET(0xA316920)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_DELEGATESFOCUS_OFFSET UNITYSDK_OFFSET(0xA316930)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_EXCLUDEFROMFOCUSRING_OFFSET UNITYSDK_OFFSET(0xA316940)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_EXCLUDEFROMFOCUSRING_OFFSET UNITYSDK_OFFSET(0xA316950)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_CANGRABFOCUS_OFFSET UNITYSDK_OFFSET(0xA316A20)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_FOCUS_OFFSET UNITYSDK_OFFSET(0xA316A30)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_BLUR_OFFSET UNITYSDK_OFFSET(0xA316E40)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_BLURIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA317000)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFOCUSDELEGATE_OFFSET UNITYSDK_OFFSET(0xA316CD0)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFIRSTFOCUSABLECHILD_OFFSET UNITYSDK_OFFSET(0xA317040)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA317190)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_EXECUTEDEFAULTACTIONDISABLED_OFFSET UNITYSDK_OFFSET(0xA317250)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA3171F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Focusable_TypeDefinitionIndex = 30096;

	class Focusable : public Il2CppObject
	{
	public:
		::System::Boolean _focusable_k__BackingField; // 0x18
		::System::Int32 _tabIndex_k__BackingField; // 0x1C
		::System::Boolean m_DelegatesFocus; // 0x20
		::System::Boolean m_ExcludeFromFocusRing; // 0x21
		::System::Boolean isIMGUIContainer; // 0x22

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		::System::Boolean get_focusable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSABLE_OFFSET))(nullptr);
		}

		::System::Void set_focusable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_FOCUSABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_tabIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_TABINDEX_OFFSET))(nullptr);
		}

		::System::Void set_tabIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_TABINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_delegatesFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_DELEGATESFOCUS_OFFSET))(nullptr);
		}

		::System::Void set_delegatesFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_DELEGATESFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_excludeFromFocusRing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_EXCLUDEFROMFOCUSRING_OFFSET))(nullptr);
		}

		::System::Void set_excludeFromFocusRing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_SET_EXCLUDEFROMFOCUSRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canGrabFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_CANGRABFOCUS_OFFSET))(nullptr);
		}

		::System::Void Focus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_FOCUS_OFFSET))(nullptr);
		}

		::System::Void Blur()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_BLUR_OFFSET))(nullptr);
		}

		::System::Void BlurImmediately()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_BLURIMMEDIATELY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetFocusDelegate()
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFOCUSDELEGATE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetFirstFocusableChild(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GETFIRSTFOCUSABLECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_EXECUTEDEFAULTACTIONDISABLED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_PROCESSEVENT_OFFSET))(arg, nullptr);
		}

	};
}

