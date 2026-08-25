#pragma once
#include "unitysdk.h"

#define DEVICEREGAINEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F19200)

	inline static constexpr unsigned int DeviceRegainedEvent_TypeDefinitionIndex = 28561;

	class DeviceRegainedEvent : public <get_patterns>d__4
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEREGAINEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

