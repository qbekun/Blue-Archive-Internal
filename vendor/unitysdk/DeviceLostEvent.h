#pragma once
#include "unitysdk.h"

#define DEVICELOSTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F19130)

	inline static constexpr unsigned int DeviceLostEvent_TypeDefinitionIndex = 28560;

	class DeviceLostEvent : public <get_patterns>d__4
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICELOSTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};

