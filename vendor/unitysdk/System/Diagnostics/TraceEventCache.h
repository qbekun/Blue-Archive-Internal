#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_CALLSTACK_OFFSET UNITYSDK_OFFSET(0x9AFEF90)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_LOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x9AFEFD0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x9AFEFF0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x9AFF080)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_THREADID_OFFSET UNITYSDK_OFFSET(0x9AFF120)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9AFF1D0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_INITPROCESSINFO_OFFSET UNITYSDK_OFFSET(0x9AFF250)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETPROCESSID_OFFSET UNITYSDK_OFFSET(0x9AFF0D0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETTHREADID_OFFSET UNITYSDK_OFFSET(0x9AFF1A0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFF730)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceEventCache_TypeDefinitionIndex = 29243;

	class TraceEventCache : public Il2CppObject
	{
	public:
		::System::Int32 processId; // 0x0
		::System::String* processName; // 0x8
		::System::Int64 timeStamp; // 0x10
		::System::DateTime* dateTime; // 0x18
		::System::String* stackTrace; // 0x20

		::System::String* get_Callstack()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_CALLSTACK_OFFSET))(nullptr);
		}

		::System::Collections::Stack* get_LogicalOperationStack()
		{
			return (return (::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_LOGICALOPERATIONSTACK_OFFSET))(nullptr);
		}

		::System::DateTime* get_DateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_DATETIME_OFFSET))(nullptr);
		}

		::System::Int32 get_ProcessId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_PROCESSID_OFFSET))(nullptr);
		}

		::System::String* get_ThreadId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_THREADID_OFFSET))(nullptr);
		}

		::System::Int64 get_Timestamp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_TIMESTAMP_OFFSET))(nullptr);
		}

		::System::Void InitProcessInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_INITPROCESSINFO_OFFSET))(nullptr);
		}

		::System::Int32 GetProcessId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETPROCESSID_OFFSET))(nullptr);
		}

		::System::Int32 GetThreadId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETTHREADID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_.CTOR_OFFSET))(nullptr);
		}

	};
}

