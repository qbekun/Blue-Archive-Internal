#pragma once
#include "../unitysdk.h"

#define SYSTEM_EXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x93A10A0)
#define SYSTEM_EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93A1150)
#define SYSTEM_EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93A1170)
#define SYSTEM_EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93A11B0)
#define SYSTEM_EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93A1200)
#define SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x93A16F0)
#define SYSTEM_EXCEPTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x93A1860)
#define SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x93A1800)
#define SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x93A18E0)
#define SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x93A18F0)
#define SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x93A1940)
#define SYSTEM_EXCEPTION_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0x93A19A0)
#define SYSTEM_EXCEPTION_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x93A19B0)
#define SYSTEM_EXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93A1AE0)
#define SYSTEM_EXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93A1AF0)
#define SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93A1EC0)
#define SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x93A23B0)
#define SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET UNITYSDK_OFFSET(0x93A1990)
#define SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x93A2440)
#define SYSTEM_EXCEPTION_GET_HRESULT_OFFSET UNITYSDK_OFFSET(0x93A2510)
#define SYSTEM_EXCEPTION_SET_HRESULT_OFFSET UNITYSDK_OFFSET(0x93A2520)
#define SYSTEM_EXCEPTION_GETTYPE_OFFSET UNITYSDK_OFFSET(0x93A18D0)
#define SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET UNITYSDK_OFFSET(0x93A2530)
#define SYSTEM_EXCEPTION_FIXREMOTINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93A25A0)
#define SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93A2680)
#define SYSTEM_EXCEPTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93A2690)

namespace System
{
	inline static constexpr unsigned int Exception_TypeDefinitionIndex = 23932;

	class Exception : public Il2CppObject
	{
	public:
		::System::Object* s_EDILock; // 0x0
		::System::String* _className; // 0x10
		::System::String* _message; // 0x18
		::System::Collections::IDictionary* _data; // 0x20
		::System::Exception* _innerException; // 0x28
		::System::String* _helpURL; // 0x30
		::System::Object* _stackTrace; // 0x38
		::System::String* _stackTraceString; // 0x40
		::System::String* _remoteStackTraceString; // 0x48
		::System::Int32 _remoteStackIndex; // 0x50
		::System::Object* _dynamicMethods; // 0x58
		::System::Int32 _HResult; // 0x60
		::System::String* _source; // 0x68
		::System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager; // 0x70
		::Il2CppArray<::System::Object*>* captured_traces; // 0x78
		::Il2CppArray<::System::Object*>* native_trace_ips; // 0x80
		::System::Int32 caught_in_unmanaged; // 0x88
		::System::Int32 _COMPlusExceptionCode; // 0x0

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* get_Data()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* GetClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET))(nullptr);
		}

		::System::Exception* get_InnerException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET))(nullptr);
		}

		::System::String* get_StackTrace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET))(nullptr);
		}

		::System::String* GetStackTrace(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET))(arg, nullptr);
		}

		::System::Void SetErrorCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SETERRORCODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Source()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::String* StripFileInfo(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_HRESULT_OFFSET))(nullptr);
		}

		::System::Void set_HResult(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HRESULT_OFFSET))(arg, nullptr);
		}

		::System::Type* GetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETTYPE_OFFSET))(nullptr);
		}

		::System::String* GetMessageFromNativeResources(ExceptionMessageKind* arg)
		{
			return (return (::System::String*(*)(ExceptionMessageKind*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Exception* FixRemotingException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_FIXREMOTINGEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ReportUnhandledException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

