#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class LoggingContext; }

#define BESTHTTP_LOGGER_LOGGINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x89BF90)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x89BFA0)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x89C1B0)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x89C3B0)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x89C120)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x89C450)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x89C230)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_REMOVE_OFFSET UNITYSDK_OFFSET(0x89C4E0)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0x89C5B0)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_TOJSON_OFFSET UNITYSDK_OFFSET(0x89C890)
#define BESTHTTP_LOGGER_LOGGINGCONTEXT_ESCAPE_OFFSET UNITYSDK_OFFSET(0x89CCA0)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int LoggingContext_TypeDefinitionIndex = 23296;

	class LoggingContext : public Il2CppObject
	{
	public:
		Il2CppObject* fields; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET))(str, str, nullptr);
		}

		::System::Void Add(::System::String* str, ::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(LoggingContextField* arg)
		{
			((::System::Void(*)(LoggingContextField*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_REMOVE_OFFSET))(str, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* Clone()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_CLONE_OFFSET))(nullptr);
		}

		::System::Void ToJson(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_TOJSON_OFFSET))(arg, nullptr);
		}

		::System::String* Escape(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_LOGGINGCONTEXT_ESCAPE_OFFSET))(str, nullptr);
		}

	};
}

