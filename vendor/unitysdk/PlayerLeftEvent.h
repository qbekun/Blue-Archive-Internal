#pragma once
#include "unitysdk.h"

#define PLAYERLEFTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F20C40)

	inline static constexpr unsigned int PlayerLeftEvent_TypeDefinitionIndex = 28565;

	class PlayerLeftEvent : public <get_patterns>d__4
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERLEFTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

