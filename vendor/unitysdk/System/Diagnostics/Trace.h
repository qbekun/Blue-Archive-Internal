#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACE_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x9AFE9D0)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x9AFEDB0)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_CORRELATIONMANAGER_OFFSET UNITYSDK_OFFSET(0x9AFEED0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Trace_TypeDefinitionIndex = 29242;

	class Trace : public Il2CppObject
	{
	public:
		::System::Diagnostics::CorrelationManager* correlationManager; // 0x0

		::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return (return (::System::Diagnostics::TraceListenerCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_LISTENERS_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoFlush()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_AUTOFLUSH_OFFSET))(nullptr);
		}

		::System::Diagnostics::CorrelationManager* get_CorrelationManager()
		{
			return (return (::System::Diagnostics::CorrelationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_CORRELATIONMANAGER_OFFSET))(nullptr);
		}

	};
}

