#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventDispatcher; }

#define UNITYENGINE_UIELEMENTS_RUNTIMEEVENTDISPATCHER_CREATE_OFFSET UNITYSDK_OFFSET(0xA4030D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RuntimeEventDispatcher_TypeDefinitionIndex = 30566;

	class RuntimeEventDispatcher : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::EventDispatcher* Create()
		{
			return (return (::UnityEngine::UIElements::EventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RUNTIMEEVENTDISPATCHER_CREATE_OFFSET))(nullptr);
		}

	};
}

