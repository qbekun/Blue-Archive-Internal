#pragma once
#include "unitysdk.h"

#define PLAYERJOINEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F20B70)

	inline static constexpr unsigned int PlayerJoinedEvent_TypeDefinitionIndex = 28564;

	class PlayerJoinedEvent : public <get_patterns>d__4
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERJOINEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

