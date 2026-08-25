#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E1EC0)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E1F30)
#define UNITYENGINE_UIELEMENTS_MOUSECAPTUREDISPATCHINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E2560)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseCaptureDispatchingStrategy_TypeDefinitionIndex = 30490;

	class MouseCaptureDispatchingStrategy : public Il2CppObject
	{
	public:
		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSECAPTUREDISPATCHINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

