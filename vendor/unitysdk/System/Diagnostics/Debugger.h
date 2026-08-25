#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGER_ISLOGGING_OFFSET UNITYSDK_OFFSET(0x92C5400)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_LOG_ICALL_OFFSET UNITYSDK_OFFSET(0x92C5410)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_LOG_OFFSET UNITYSDK_OFFSET(0x92C5420)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_NOTIFYOFCROSSTHREADDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x92C5480)
#define SYSTEM_DIAGNOSTICS_DEBUGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92C5490)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Debugger_TypeDefinitionIndex = 25030;

	class Debugger : public Il2CppObject
	{
	public:
		::System::String* DefaultCategory; // 0x0

		::System::Boolean IsLogging()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_ISLOGGING_OFFSET))(nullptr);
		}

		::System::Void Log_icall(::System::Int32 arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_LOG_ICALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Log(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_LOG_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void NotifyOfCrossThreadDependency()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_NOTIFYOFCROSSTHREADDEPENDENCY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

