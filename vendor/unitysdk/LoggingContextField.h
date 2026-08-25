#pragma once
#include "unitysdk.h"

namespace BestHTTP::Logger { class LoggingContext; }

	inline static constexpr unsigned int LoggingContextField_TypeDefinitionIndex = 23294;

	class LoggingContextField : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::System::Int64 longValue; // 0x18
		::System::Boolean boolValue; // 0x20
		::System::String* stringValue; // 0x28
		::BestHTTP::Logger::LoggingContext* loggingContextValue; // 0x30
		LoggingContextFieldType* fieldType; // 0x38

	};

