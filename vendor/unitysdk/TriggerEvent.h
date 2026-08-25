#pragma once
#include "unitysdk.h"

#define TRIGGEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA493990)

	inline static constexpr unsigned int TriggerEvent_TypeDefinitionIndex = 34917;

	class TriggerEvent : public ::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIGGEREVENT_.CTOR_OFFSET))(nullptr);
		}

	};

