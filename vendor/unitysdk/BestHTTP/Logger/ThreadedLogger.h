#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }
namespace BestHTTP::Logger { class ILogOutput; }
namespace BestHTTP::Logger { class LoggingContext; }

#define BESTHTTP_LOGGER_THREADEDLOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x89CF10)
#define BESTHTTP_LOGGER_THREADEDLOGGER_INFORMATION_OFFSET UNITYSDK_OFFSET(0x89D450)
#define BESTHTTP_LOGGER_THREADEDLOGGER_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x89D490)
#define BESTHTTP_LOGGER_THREADEDLOGGER_ADDJOB_OFFSET UNITYSDK_OFFSET(0x89CF50)
#define BESTHTTP_LOGGER_THREADEDLOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x89DD40)
#define BESTHTTP_LOGGER_THREADEDLOGGER_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x89E060)
#define BESTHTTP_LOGGER_THREADEDLOGGER_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x89E0A0)
#define BESTHTTP_LOGGER_THREADEDLOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x89E0B0)
#define BESTHTTP_LOGGER_THREADEDLOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x89E0F0)
#define BESTHTTP_LOGGER_THREADEDLOGGER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x89E130)
#define BESTHTTP_LOGGER_THREADEDLOGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89E140)
#define BESTHTTP_LOGGER_THREADEDLOGGER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x89E310)
#define BESTHTTP_LOGGER_THREADEDLOGGER_SET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x89DFA0)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int ThreadedLogger_TypeDefinitionIndex = 23297;

	class ThreadedLogger : public Il2CppObject
	{
	public:
		::BestHTTP::Logger::Loglevels* _Level_k__BackingField; // 0x10
		::BestHTTP::Logger::ILogOutput* _output; // 0x18
		::System::Text::StringBuilder* sb; // 0x20
		::System::TimeSpan* ExitThreadAfterInactivity; // 0x28
		Il2CppObject* jobs; // 0x30
		::System::Threading::AutoResetEvent* newJobEvent; // 0x38
		::System::Int32 threadCreated; // 0x40
		::System::Boolean isDisposed; // 0x44

		::System::Void Verbose(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_VERBOSE_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void Information(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_INFORMATION_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void ThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_THREADFUNC_OFFSET))(nullptr);
		}

		::System::Void AddJob(::BestHTTP::Logger::Loglevels* arg, ::System::String* str, ::System::String* str, ::System::Exception* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::System::String*, ::System::String*, ::System::Exception*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_ADDJOB_OFFSET))(arg, str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Exception(::System::String* str, ::System::String* str, ::System::Exception* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_EXCEPTION_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::Logger::ILogOutput* get_Output()
		{
			return (return (::BestHTTP::Logger::ILogOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_GET_OUTPUT_OFFSET))(nullptr);
		}

		::System::Void Error(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_ERROR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void Warning(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_WARNING_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::BestHTTP::Logger::Loglevels* get_Level()
		{
			return (return (::BestHTTP::Logger::Loglevels*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_Level(::BestHTTP::Logger::Loglevels* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Output(::BestHTTP::Logger::ILogOutput* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::ILogOutput*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_THREADEDLOGGER_SET_OUTPUT_OFFSET))(arg, nullptr);
		}

	};
}

