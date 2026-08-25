#pragma once
#include "unitysdk.h"

#define CONNECTIONCHANGEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24FF30)

	inline static constexpr unsigned int ConnectionChangeEvent_TypeDefinitionIndex = 31470;

	class ConnectionChangeEvent : public ::UnityEngine::InputSystem::Layouts::InputDeviceDescription
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONCHANGEEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

