#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }
namespace BestHTTP::Logger { class ILogOutput; }
namespace BestHTTP::Logger { class LoggingContext; }

#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x89AB90)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x89ABA0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATERR_OFFSET UNITYSDK_OFFSET(0x89ADD0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x89ADE0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATERR_OFFSET UNITYSDK_OFFSET(0x89B310)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x89B320)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATWARN_OFFSET UNITYSDK_OFFSET(0x89B4E0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x89B4F0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x89B6E0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATVERBOSE_OFFSET UNITYSDK_OFFSET(0x89B7A0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATEX_OFFSET UNITYSDK_OFFSET(0x89B7B0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x89B7C0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x89B980)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x89B990)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATVERBOSE_OFFSET UNITYSDK_OFFSET(0x89B9A0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_INFORMATION_OFFSET UNITYSDK_OFFSET(0x89B9B0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATWARN_OFFSET UNITYSDK_OFFSET(0x89BB70)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATINFO_OFFSET UNITYSDK_OFFSET(0x89BB80)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATEX_OFFSET UNITYSDK_OFFSET(0x89BB90)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATINFO_OFFSET UNITYSDK_OFFSET(0x89BBA0)
#define BESTHTTP_LOGGER_DEFAULTLOGGER_GETFORMATTEDTIME_OFFSET UNITYSDK_OFFSET(0x89AD60)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int DefaultLogger_TypeDefinitionIndex = 23288;

	class DefaultLogger : public Il2CppObject
	{
	public:
		::BestHTTP::Logger::Loglevels* _Level_k__BackingField; // 0x10
		::BestHTTP::Logger::ILogOutput* _output; // 0x18
		::System::String* _FormatVerbose_k__BackingField; // 0x20
		::System::String* _FormatInfo_k__BackingField; // 0x28
		::System::String* _FormatWarn_k__BackingField; // 0x30
		::System::String* _FormatErr_k__BackingField; // 0x38
		::System::String* _FormatEx_k__BackingField; // 0x40

		::BestHTTP::Logger::ILogOutput* get_Output()
		{
			return (return (::BestHTTP::Logger::ILogOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_OUTPUT_OFFSET))(nullptr);
		}

		::System::Void Verbose(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_VERBOSE_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void set_FormatErr(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATERR_OFFSET))(str, nullptr);
		}

		::System::Void Exception(::System::String* str, ::System::String* str, ::System::Exception* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_EXCEPTION_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_FormatErr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATERR_OFFSET))(nullptr);
		}

		::System::Void Error(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_ERROR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void set_FormatWarn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATWARN_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Output(::BestHTTP::Logger::ILogOutput* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::ILogOutput*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_OUTPUT_OFFSET))(arg, nullptr);
		}

		::System::String* get_FormatVerbose()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATVERBOSE_OFFSET))(nullptr);
		}

		::System::String* get_FormatEx()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATEX_OFFSET))(nullptr);
		}

		::System::Void Warning(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_WARNING_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::BestHTTP::Logger::Loglevels* get_Level()
		{
			return (return (::BestHTTP::Logger::Loglevels*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::BestHTTP::Logger::Loglevels* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_FormatVerbose(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATVERBOSE_OFFSET))(str, nullptr);
		}

		::System::Void Information(::System::String* str, ::System::String* str, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_INFORMATION_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::String* get_FormatWarn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATWARN_OFFSET))(nullptr);
		}

		::System::String* get_FormatInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GET_FORMATINFO_OFFSET))(nullptr);
		}

		::System::Void set_FormatEx(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATEX_OFFSET))(str, nullptr);
		}

		::System::Void set_FormatInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_SET_FORMATINFO_OFFSET))(str, nullptr);
		}

		::System::String* GetFormattedTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_DEFAULTLOGGER_GETFORMATTEDTIME_OFFSET))(nullptr);
		}

	};
}

