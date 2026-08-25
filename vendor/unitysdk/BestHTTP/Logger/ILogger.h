#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::Logger { class Loglevels; }
namespace BestHTTP::Logger { class ILogOutput; }

#define BESTHTTP_LOGGER_ILOGGER_INFORMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_SET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_LOGGER_ILOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int ILogger_TypeDefinitionIndex = 23292;

	class ILogger : public Il2CppObject
	{
	public:
		::System::Void Information(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_INFORMATION_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void set_Level(::BestHTTP::Logger::Loglevels* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::ILogOutput* get_Output()
		{
			return (return (::BestHTTP::Logger::ILogOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_GET_OUTPUT_OFFSET))(nullptr);
		}

		::System::Void Exception(::System::String* str, ::System::String* str, ::System::Exception* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_EXCEPTION_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void Verbose(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_VERBOSE_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void set_Output(::BestHTTP::Logger::ILogOutput* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::ILogOutput*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_SET_OUTPUT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::Loglevels* get_Level()
		{
			return (return (::BestHTTP::Logger::Loglevels*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void Error(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_ERROR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void Warning(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGGER_WARNING_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

	};
}

