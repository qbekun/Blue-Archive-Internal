#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_GET_ELAPSEDMILLISECONDSPERTEST_OFFSET UNITYSDK_OFFSET(0x107BE40)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_GET_ELAPSEDTICKSPERTEST_OFFSET UNITYSDK_OFFSET(0x107BE80)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BED0)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_.CTOR_OFFSET UNITYSDK_OFFSET(0x107BF70)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_RUN_OFFSET UNITYSDK_OFFSET(0x107C000)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107C050)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_SHOWDEBUGMESSAGE_OFFSET UNITYSDK_OFFSET(0x107C090)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_BUILDRESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x107C0A0)
#define MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x107C2A0)

namespace MX::Core::Diagnostics
{
	inline static constexpr unsigned int ElapsedTimeProfiler_TypeDefinitionIndex = 12898;

	class ElapsedTimeProfiler : public Il2CppObject
	{
	public:
		::System::String* _testName; // 0x10
		::System::Int32 _numTests; // 0x18
		::System::Diagnostics::Stopwatch* _watch; // 0x20
		::System::Action* _action; // 0x28
		::System::Boolean disposedValue; // 0x30

		::System::Double get_ElapsedMillisecondsPerTest()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_GET_ELAPSEDMILLISECONDSPERTEST_OFFSET))(nullptr);
		}

		::System::Int64 get_ElapsedTicksPerTest()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_GET_ELAPSEDTICKSPERTEST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Action* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_RUN_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowDebugMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_SHOWDEBUGMESSAGE_OFFSET))(nullptr);
		}

		::System::String* BuildResultMessage(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_BUILDRESULTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_DIAGNOSTICS_ELAPSEDTIMEPROFILER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

