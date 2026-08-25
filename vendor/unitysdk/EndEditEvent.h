#pragma once
#include "unitysdk.h"

#define ENDEDITEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA456C00)

	inline static constexpr unsigned int EndEditEvent_TypeDefinitionIndex = 34789;

	class EndEditEvent : public ::UnityEngine::InputSystem::Controls::AnyKeyControl
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEDITEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

