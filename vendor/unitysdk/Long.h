#pragma once
#include "unitysdk.h"

#define LONG_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9823640)

	inline static constexpr unsigned int Long_TypeDefinitionIndex = 36704;

	class Long : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + LONG_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

