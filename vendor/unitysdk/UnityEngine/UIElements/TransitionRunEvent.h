#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TRANSITIONRUNEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FED80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransitionRunEvent_TypeDefinitionIndex = 30548;

	class TransitionRunEvent : public ::UnityEngine::InputSystem::Gyroscope
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONRUNEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

