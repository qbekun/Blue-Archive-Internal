#pragma once
#include "unitysdk.h"

#define REALTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F472D0)
#define REALTIME_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1F3A9A0)
#define REALTIME_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1F472E0)

	inline static constexpr unsigned int RealTime_TypeDefinitionIndex = 121;

	class RealTime : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REALTIME_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + REALTIME_GET_TIME_OFFSET))(nullptr);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + REALTIME_GET_DELTATIME_OFFSET))(nullptr);
		}

	};

