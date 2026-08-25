#pragma once
#include "unitysdk.h"

#define SUBMITEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA456BC0)

	inline static constexpr unsigned int SubmitEvent_TypeDefinitionIndex = 34788;

	class SubmitEvent : public ::UnityEngine::InputSystem::Controls::AnyKeyControl
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBMITEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

