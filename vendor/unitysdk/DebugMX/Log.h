#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LogType; }
namespace UnityEngine { class Color; }

#define DEBUGMX_LOG_INIT_OFFSET UNITYSDK_OFFSET(0xDE0C20)
#define DEBUGMX_LOG_LOGINFILE_OFFSET UNITYSDK_OFFSET(0xDE0C30)
#define DEBUGMX_LOG_DEBUG_OFFSET UNITYSDK_OFFSET(0xDE1050)
#define DEBUGMX_LOG_DEBUG_OFFSET UNITYSDK_OFFSET(0xDE1060)
#define DEBUGMX_LOG_DEBUG_OFFSET UNITYSDK_OFFSET(0xDE1070)
#define DEBUGMX_LOG_INFO_OFFSET UNITYSDK_OFFSET(0xDE1080)
#define DEBUGMX_LOG_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xDE1090)
#define DEBUGMX_LOG_INFO_OFFSET UNITYSDK_OFFSET(0xDE10A0)
#define DEBUGMX_LOG_INFO_OFFSET UNITYSDK_OFFSET(0xDE10B0)
#define DEBUGMX_LOG_INFO_OFFSET UNITYSDK_OFFSET(0xDE10C0)
#define DEBUGMX_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0xDE10D0)
#define DEBUGMX_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0xDE10E0)
#define DEBUGMX_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0xDE10F0)
#define DEBUGMX_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0xDE1100)
#define DEBUGMX_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0xDE1110)
#define DEBUGMX_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0xDE1120)
#define DEBUGMX_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0xDE1130)
#define DEBUGMX_LOG_EXCEPTION_OFFSET UNITYSDK_OFFSET(0xDE1140)
#define DEBUGMX_LOG_EXCEPTION_OFFSET UNITYSDK_OFFSET(0xDE1150)
#define DEBUGMX_LOG_EXCEPTION_OFFSET UNITYSDK_OFFSET(0xDE1160)
#define DEBUGMX_LOG_EXCEPTIONALL_OFFSET UNITYSDK_OFFSET(0xDE1170)
#define DEBUGMX_LOG_TRACE_OFFSET UNITYSDK_OFFSET(0xDE1260)
#define DEBUGMX_LOG_TRACE_OFFSET UNITYSDK_OFFSET(0xDE1270)
#define DEBUGMX_LOG_FATAL_OFFSET UNITYSDK_OFFSET(0xDE1280)
#define DEBUGMX_LOG_FATAL_OFFSET UNITYSDK_OFFSET(0xDE1290)
#define DEBUGMX_LOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDE12A0)

namespace DebugMX
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 10139;

	class Log : public Il2CppObject
	{
	public:
		::System::String* logWinPath; // 0x0
		::System::String* curLogFile; // 0x8

		::System::Void Init(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_INIT_OFFSET))(str, nullptr);
		}

		::System::Void LogInFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_LOGINFILE_OFFSET))(str, nullptr);
		}

		::System::Void Debug(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_DEBUG_OFFSET))(str, nullptr);
		}

		::System::Void Debug(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_DEBUG_OFFSET))(str, arg, nullptr);
		}

		::System::Void Debug(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_DEBUG_OFFSET))(arg, nullptr);
		}

		::System::Void Info(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_INFO_OFFSET))(str, nullptr);
		}

		::System::Void LogMessageReceived(::System::String* str, ::System::String* str2, ::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_LOGMESSAGERECEIVED_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void Info(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_INFO_OFFSET))(arg, nullptr);
		}

		::System::Void Info(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_INFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void Info(::System::String* str, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_INFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void Warning(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_WARNING_OFFSET))(str, nullptr);
		}

		::System::Void Warning(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_WARNING_OFFSET))(arg, nullptr);
		}

		::System::Void Warning(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_WARNING_OFFSET))(str, arg, nullptr);
		}

		::System::Void Warning(::System::Exception* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Exception*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_WARNING_OFFSET))(arg, str, nullptr);
		}

		::System::Void Error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_ERROR_OFFSET))(str, nullptr);
		}

		::System::Void Error(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_ERROR_OFFSET))(arg, nullptr);
		}

		::System::Void Error(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_ERROR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Exception(::System::Exception* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Exception*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_EXCEPTION_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void Exception(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_EXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void Exception(::System::Exception* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Exception*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_EXCEPTION_OFFSET))(arg, str, nullptr);
		}

		::System::Void ExceptionAll(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_EXCEPTIONALL_OFFSET))(arg, nullptr);
		}

		::System::Void Trace(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_TRACE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Trace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_TRACE_OFFSET))(str, nullptr);
		}

		::System::Void Fatal(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_FATAL_OFFSET))(str, nullptr);
		}

		::System::Void Fatal(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_FATAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_LOG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

