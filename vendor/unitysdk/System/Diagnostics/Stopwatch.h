#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_STOPWATCH_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9AFF240)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_STARTNEW_OFFSET UNITYSDK_OFFSET(0x9B03970)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B03A10)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x9B03A80)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x9B03CF0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDTICKS_OFFSET UNITYSDK_OFFSET(0x9B03C90)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_RESET_OFFSET UNITYSDK_OFFSET(0x9B03EB0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_START_OFFSET UNITYSDK_OFFSET(0x9B03A20)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_STOP_OFFSET UNITYSDK_OFFSET(0x9B03EC0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B03F30)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Stopwatch_TypeDefinitionIndex = 29262;

	class Stopwatch : public Il2CppObject
	{
	public:
		::System::Int64 Frequency; // 0x0
		::System::Boolean IsHighResolution; // 0x8
		::System::Int64 elapsed; // 0x10
		::System::Int64 started; // 0x18
		::System::Boolean is_running; // 0x20

		::System::Int64 GetTimestamp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GETTIMESTAMP_OFFSET))(nullptr);
		}

		::System::Diagnostics::Stopwatch* StartNew()
		{
			return (return (::System::Diagnostics::Stopwatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_STARTNEW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_.CTOR_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_Elapsed()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Int64 get_ElapsedMilliseconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_ElapsedTicks()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDTICKS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_RESET_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_START_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_STOP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

