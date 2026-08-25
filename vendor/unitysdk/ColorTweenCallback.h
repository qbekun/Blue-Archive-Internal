#pragma once
#include "unitysdk.h"

#define COLORTWEENCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48B7E0)

	inline static constexpr unsigned int ColorTweenCallback_TypeDefinitionIndex = 34877;

	class ColorTweenCallback : public DeviceDescriptionJson
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLORTWEENCALLBACK_.CTOR_OFFSET))(nullptr);
		}

	};

