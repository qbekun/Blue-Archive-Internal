#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E1410)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3E1480)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1540)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIEventDispatchingStrategy_TypeDefinitionIndex = 30481;

	class IMGUIEventDispatchingStrategy : public Il2CppObject
	{
	public:
		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

