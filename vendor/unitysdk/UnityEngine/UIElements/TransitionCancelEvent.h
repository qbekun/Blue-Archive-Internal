#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TRANSITIONCANCELEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FEE40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransitionCancelEvent_TypeDefinitionIndex = 30551;

	class TransitionCancelEvent : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONCANCELEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

