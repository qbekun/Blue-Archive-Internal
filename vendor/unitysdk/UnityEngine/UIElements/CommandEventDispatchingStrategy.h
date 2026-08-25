#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3DB980)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0xA3DB9C0)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DCB40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CommandEventDispatchingStrategy_TypeDefinitionIndex = 30451;

	class CommandEventDispatchingStrategy : public Il2CppObject
	{
	public:
		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

