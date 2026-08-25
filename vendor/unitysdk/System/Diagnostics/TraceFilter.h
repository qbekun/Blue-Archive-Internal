#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET UNITYSDK_OFFSET(0x9AFF7A0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceFilter_TypeDefinitionIndex = 29245;

	class TraceFilter : public Il2CppObject
	{
	public:
		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventCache* arg, ::System::String* str, ::System::Diagnostics::TraceEventType* arg, ::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType*, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET))(arg, str, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldTrace(::System::Diagnostics::TraceEventCache* arg, ::System::String* str, ::System::Diagnostics::TraceEventType* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_OFFSET))(arg, str, arg, arg, str, nullptr);
		}

	};
}

