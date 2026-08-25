#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_TIMEOUTHELPER_GETTIME_OFFSET UNITYSDK_OFFSET(0x93DA060)
#define SYSTEM_THREADING_TIMEOUTHELPER_UPDATETIMEOUT_OFFSET UNITYSDK_OFFSET(0x93DA160)

namespace System::Threading
{
	inline static constexpr unsigned int TimeoutHelper_TypeDefinitionIndex = 24057;

	class TimeoutHelper : public Il2CppObject
	{
	public:
		::System::UInt32 GetTime()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUTHELPER_GETTIME_OFFSET))(nullptr);
		}

		::System::Int32 UpdateTimeOut(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUTHELPER_UPDATETIMEOUT_OFFSET))(arg, arg, nullptr);
		}

	};
}

