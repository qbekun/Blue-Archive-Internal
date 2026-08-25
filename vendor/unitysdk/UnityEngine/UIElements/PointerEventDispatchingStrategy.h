#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class VisualElement&; }

#define UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E5870)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E58B0)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_SENDEVENTTOTARGET_OFFSET UNITYSDK_OFFSET(0xA3E5B80)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_SETBESTTARGETFOREVENT_OFFSET UNITYSDK_OFFSET(0xA3E58F0)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_UPDATEELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3E5BB0)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E5E90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEventDispatchingStrategy_TypeDefinitionIndex = 30525;

	class PointerEventDispatchingStrategy : public Il2CppObject
	{
	public:
		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendEventToTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_SENDEVENTTOTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetBestTargetForEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_SETBESTTARGETFOREVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateElementUnderPointer(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg, ::UnityEngine::UIElements::VisualElement&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::VisualElement&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_UPDATEELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

