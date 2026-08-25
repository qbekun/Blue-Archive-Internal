#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x92650E0)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_START_OFFSET UNITYSDK_OFFSET(0x9265120)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_END_OFFSET UNITYSDK_OFFSET(0x9265130)
#define SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x9265140)

namespace System::Globalization
{
	inline static constexpr unsigned int DaylightTime_TypeDefinitionIndex = 24963;

	class DaylightTime : public Il2CppObject
	{
	public:
		::System::DateTime* _start; // 0x10
		::System::DateTime* _end; // 0x18
		::System::TimeSpan* _delta; // 0x20

		::System::Void .ctor(::System::DateTime* arg, ::System::DateTime* arg, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* get_Start()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_START_OFFSET))(nullptr);
		}

		::System::DateTime* get_End()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_END_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_Delta()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_DAYLIGHTTIME_GET_DELTA_OFFSET))(nullptr);
		}

	};
}

