#pragma once
#include "unitysdk.h"

#define INT_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x98235D0)

	inline static constexpr unsigned int Int_TypeDefinitionIndex = 36703;

	class Int : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + INT_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

