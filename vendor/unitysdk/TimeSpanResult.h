#pragma once
#include "unitysdk.h"

#define TIMESPANRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x928B5D0)
#define TIMESPANRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x928BA00)

	inline static constexpr unsigned int TimeSpanResult_TypeDefinitionIndex = 24982;

	class TimeSpanResult : public Il2CppObject
	{
	public:
		::System::TimeSpan* parsedTimeSpan; // 0x10
		::System::Boolean _throwOnFailure; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetFailure(ParseFailureKind* arg, ::System::String* str, ::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(ParseFailureKind*, ::System::String*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRESULT_SETFAILURE_OFFSET))(arg, str, arg, str, nullptr);
		}

	};

