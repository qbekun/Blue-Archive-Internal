#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }
namespace BestHTTP::Logger { class LoggingContext; }

#define BESTHTTP_LOGGER_LOGJOB_WRAPINCOLOR_OFFSET UNITYSDK_OFFSET(0x89E320)
#define BESTHTTP_LOGGER_LOGJOB_.CCTOR_OFFSET UNITYSDK_OFFSET(0x89E330)
#define BESTHTTP_LOGGER_LOGJOB_PROCESSSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x89E580)
#define BESTHTTP_LOGGER_LOGJOB_TOJSON_OFFSET UNITYSDK_OFFSET(0x89D8F0)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int LogJob_TypeDefinitionIndex = 23298;

	class LogJob : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* LevelStrings; // 0x0
		::BestHTTP::Logger::Loglevels* level; // 0x10
		::System::String* division; // 0x18
		::System::String* msg; // 0x20
		::System::Exception* ex; // 0x28
		::System::DateTime* time; // 0x30
		::System::Int32 threadId; // 0x38
		::System::String* stackTrace; // 0x40
		::BestHTTP::Logger::LoggingContext* context1; // 0x48
		::BestHTTP::Logger::LoggingContext* context2; // 0x50
		::BestHTTP::Logger::LoggingContext* context3; // 0x58

		::System::String* WrapInColor(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGJOB_WRAPINCOLOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGJOB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessStackTrace(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGJOB_PROCESSSTACKTRACE_OFFSET))(arg, nullptr);
		}

		::System::String* ToJson(::System::Text::StringBuilder* arg)
		{
			return (return (::System::String*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGJOB_TOJSON_OFFSET))(arg, nullptr);
		}

	};
}

