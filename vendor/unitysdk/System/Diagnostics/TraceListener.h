#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACELISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFFC90)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x9AFFCD0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AFFCE0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AFFD40)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9AFFD50)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9AFF8E0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x9AFF910)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x9AFFD60)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x9AFFD70)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET UNITYSDK_OFFSET(0x9AFFD80)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET UNITYSDK_OFFSET(0x9AFFD90)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x9AFFDA0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET UNITYSDK_OFFSET(0x9AFFE40)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x9AFFF00)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET UNITYSDK_OFFSET(0x9AFFFF0)
#define SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9B00700)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceListener_TypeDefinitionIndex = 29248;

	class TraceListener : public Il2CppObject
	{
	public:
		::System::Int32 indentLevel; // 0x18
		::System::Int32 indentSize; // 0x1C
		::System::Diagnostics::TraceOptions* traceOptions; // 0x20
		::System::Boolean needIndent; // 0x24
		::System::String* listenerName; // 0x28
		::System::Diagnostics::TraceFilter* filter; // 0x30

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsThreadSafe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_ISTHREADSAFE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void set_IndentLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IndentSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_INDENTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Diagnostics::TraceFilter* get_Filter()
		{
			return (return (::System::Diagnostics::TraceFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_FILTER_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedIndent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_NEEDINDENT_OFFSET))(nullptr);
		}

		::System::Void set_NeedIndent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_SET_NEEDINDENT_OFFSET))(arg, nullptr);
		}

		::System::Diagnostics::TraceOptions* get_TraceOutputOptions()
		{
			return (return (::System::Diagnostics::TraceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_GET_TRACEOUTPUTOPTIONS_OFFSET))(nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void WriteIndent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEINDENT_OFFSET))(nullptr);
		}

		::System::Void WriteLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITELINE_OFFSET))(str, nullptr);
		}

		::System::Void TraceEvent(::System::Diagnostics::TraceEventCache* arg, ::System::String* str, ::System::Diagnostics::TraceEventType* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_TRACEEVENT_OFFSET))(arg, str, arg, arg, str, nullptr);
		}

		::System::Void WriteHeader(::System::String* str, ::System::Diagnostics::TraceEventType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Diagnostics::TraceEventType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEHEADER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void WriteFooter(::System::Diagnostics::TraceEventCache* arg)
		{
			((::System::Void(*)(::System::Diagnostics::TraceEventCache*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_WRITEFOOTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEnabled(::System::Diagnostics::TraceOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::Diagnostics::TraceOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACELISTENER_ISENABLED_OFFSET))(arg, nullptr);
		}

	};
}

