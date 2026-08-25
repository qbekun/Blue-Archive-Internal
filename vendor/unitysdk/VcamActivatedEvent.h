#pragma once
#include "unitysdk.h"

#define VCAMACTIVATEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x28240B0)

	inline static constexpr unsigned int VcamActivatedEvent_TypeDefinitionIndex = 34197;

	class VcamActivatedEvent : public ::UnityEngine::InputSystem::Controls::DeltaControl
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VCAMACTIVATEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

