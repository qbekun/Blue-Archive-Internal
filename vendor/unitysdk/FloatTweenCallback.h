#pragma once
#include "unitysdk.h"

#define FLOATTWEENCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48BAB0)

	inline static constexpr unsigned int FloatTweenCallback_TypeDefinitionIndex = 34879;

	class FloatTweenCallback : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATTWEENCALLBACK_.CTOR_OFFSET))(nullptr);
		}

	};

