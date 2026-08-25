#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class MouseButton; }
namespace UnityEngine { class EventModifiers; }
namespace UnityEngine::UIElements { class ManipulatorActivationFilter; }
namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine::UIElements { class IPointerEvent; }

#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA31F250)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA31F260)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0xA31F270)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xA31F280)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA31F290)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA31F310)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA31F330)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_MATCHES_OFFSET UNITYSDK_OFFSET(0xA31F390)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_HASMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA31F4C0)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_MATCHES_OFFSET UNITYSDK_OFFSET(0xA31F780)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_HASMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA31F8B0)
#define UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_MATCHMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA31F700)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ManipulatorActivationFilter_TypeDefinitionIndex = 30119;

	class ManipulatorActivationFilter : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::MouseButton* _button_k__BackingField; // 0x10
		::UnityEngine::EventModifiers* _modifiers_k__BackingField; // 0x14
		::System::Int32 _clickCount_k__BackingField; // 0x18

		::UnityEngine::UIElements::MouseButton* get_button()
		{
			return (return (::UnityEngine::UIElements::MouseButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void set_button(::UnityEngine::UIElements::MouseButton* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseButton*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_SET_BUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::ManipulatorActivationFilter* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::ManipulatorActivationFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Matches(::UnityEngine::UIElements::IMouseEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IMouseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasModifiers(::UnityEngine::UIElements::IMouseEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IMouseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_HASMODIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Matches(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasModifiers(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_HASMODIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean MatchModifiers(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MANIPULATORACTIVATIONFILTER_MATCHMODIFIERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

