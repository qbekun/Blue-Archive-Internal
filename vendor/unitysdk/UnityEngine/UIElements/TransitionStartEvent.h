#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TRANSITIONSTARTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FEDC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransitionStartEvent_TypeDefinitionIndex = 30549;

	class TransitionStartEvent : public ::UnityEngine::InputSystem::GravitySensor
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONSTARTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

