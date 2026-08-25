#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TRANSITIONENDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FEE00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransitionEndEvent_TypeDefinitionIndex = 30550;

	class TransitionEndEvent : public ::UnityEngine::InputSystem::Accelerometer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONENDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

