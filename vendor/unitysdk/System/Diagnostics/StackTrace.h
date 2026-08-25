#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5930)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5B60)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5B90)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_INIT_FRAMES_OFFSET UNITYSDK_OFFSET(0x92C5960)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x92C5BC0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5BD0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5BF0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x92C5CF0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAME_OFFSET UNITYSDK_OFFSET(0x92C5D00)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETAOTID_OFFSET UNITYSDK_OFFSET(0x92C5D50)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_ADDFRAMES_OFFSET UNITYSDK_OFFSET(0x92C5E30)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_GETFULLNAMEFORSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x92C6310)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_CONVERTASYNCSTATEMACHINEMETHOD_OFFSET UNITYSDK_OFFSET(0x92C6B10)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92C6FA0)
#define SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92C70F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackTrace_TypeDefinitionIndex = 25033;

	class StackTrace : public Il2CppObject
	{
	public:
		::System::Int32 METHODS_TO_SKIP; // 0x0
		::System::String* prefix; // 0x0
		::Il2CppArray<::System::Object*>* frames; // 0x10
		::Il2CppArray<::System::Object*>* captured_traces; // 0x18
		::System::Boolean debug_info; // 0x20
		::System::Boolean isAotidSet; // 0x0
		::System::String* aotid; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void init_frames(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_INIT_FRAMES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_trace(::System::Exception* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Exception*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GET_TRACE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_FrameCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GET_FRAMECOUNT_OFFSET))(nullptr);
		}

		::System::Diagnostics::StackFrame* GetFrame(::System::Int32 arg)
		{
			return (return (::System::Diagnostics::StackFrame*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFRAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetAotId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETAOTID_OFFSET))(nullptr);
		}

		::System::Boolean AddFrames(::System::Text::StringBuilder* arg, ::System::Boolean arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Text::StringBuilder*, ::System::Boolean, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_ADDFRAMES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetFullNameForStackTrace(::System::Text::StringBuilder* arg, ::System::Reflection::MethodBase* arg, ::System::Boolean arg, bool&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Reflection::MethodBase*, ::System::Boolean, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_GETFULLNAMEFORSTACKTRACE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConvertAsyncStateMachineMethod(::System::Reflection::MethodBase&* arg, ::System::Type&* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodBase&*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_CONVERTASYNCSTATEMACHINEMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(TraceFormat* arg)
		{
			return (return (::System::String*(*)(TraceFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACE_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

