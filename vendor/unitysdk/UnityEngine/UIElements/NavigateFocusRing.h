#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualElementFocusRing; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3FF1A0)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FF1D0)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GETFOCUSCHANGEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA3FF260)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GETNEXTFOCUSABLE_OFFSET UNITYSDK_OFFSET(0xA3FF710)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GETNEXTFOCUSABLE2D_OFFSET UNITYSDK_OFFSET(0xA3FFAA0)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA400300)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_ISNAVIGABLE_OFFSET UNITYSDK_OFFSET(0xA4003C0)
#define UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA400420)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int NavigateFocusRing_TypeDefinitionIndex = 30561;

	class NavigateFocusRing : public Il2CppObject
	{
	public:
		ChangeDirection* Left; // 0x0
		ChangeDirection* Right; // 0x8
		ChangeDirection* Up; // 0x10
		ChangeDirection* Down; // 0x18
		ChangeDirection* Next; // 0x20
		ChangeDirection* Previous; // 0x28
		::UnityEngine::UIElements::VisualElement* m_Root; // 0x10
		::UnityEngine::UIElements::VisualElementFocusRing* m_Ring; // 0x18

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GETFOCUSCHANGEDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GETNEXTFOCUSABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetNextFocusable2D(::UnityEngine::UIElements::Focusable* arg, ChangeDirection* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::Focusable*, ChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_GETNEXTFOCUSABLE2D_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsActive(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNavigable(::UnityEngine::UIElements::Focusable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_ISNAVIGABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_NAVIGATEFOCUSRING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

