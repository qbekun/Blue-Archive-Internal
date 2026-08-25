#pragma once
#include "unitysdk.h"

#define BRAINEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2824070)

	inline static constexpr unsigned int BrainEvent_TypeDefinitionIndex = 34196;

	class BrainEvent : public ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

