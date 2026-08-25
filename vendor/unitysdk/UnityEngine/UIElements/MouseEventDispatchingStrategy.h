#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class VisualElement&; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E2570)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E25B0)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SENDEVENTTOTARGET_OFFSET UNITYSDK_OFFSET(0xA3E27D0)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SENDEVENTTOREGULARTARGET_OFFSET UNITYSDK_OFFSET(0xA3E2840)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SENDEVENTTOIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0xA3E28A0)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SETBESTTARGETFOREVENT_OFFSET UNITYSDK_OFFSET(0xA3E2700)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_UPDATEELEMENTUNDERMOUSE_OFFSET UNITYSDK_OFFSET(0xA3E2AF0)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_ISDONE_OFFSET UNITYSDK_OFFSET(0xA3E2AA0)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E2E30)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventDispatchingStrategy_TypeDefinitionIndex = 30491;

	class MouseEventDispatchingStrategy : public Il2CppObject
	{
	public:
		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SendEventToTarget(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SENDEVENTTOTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SendEventToRegularTarget(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SENDEVENTTOREGULARTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SendEventToIMGUIContainer(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SENDEVENTTOIMGUICONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBestTargetForEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_SETBESTTARGETFOREVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateElementUnderMouse(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::BaseVisualElementPanel* arg, ::UnityEngine::UIElements::VisualElement&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_UPDATEELEMENTUNDERMOUSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsDone(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_ISDONE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

