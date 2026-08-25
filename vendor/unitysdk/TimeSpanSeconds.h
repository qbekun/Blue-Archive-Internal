#pragma once
#include "unitysdk.h"

#define TIMESPANSECONDS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x98239B0)

	inline static constexpr unsigned int TimeSpanSeconds_TypeDefinitionIndex = 36707;

	class TimeSpanSeconds : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::TimeSpan&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANSECONDS_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

