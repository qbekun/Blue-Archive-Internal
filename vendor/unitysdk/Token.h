#pragma once
#include "unitysdk.h"

#define TOKEN_CHECK_OFFSET UNITYSDK_OFFSET(0x98155F0)
#define TOKEN_TRYCHECK_OFFSET UNITYSDK_OFFSET(0x981F850)

	inline static constexpr unsigned int Token_TypeDefinitionIndex = 36698;

	class Token : public Il2CppObject
	{
	public:
		::System::Void Check(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOKEN_CHECK_OFFSET))(str, nullptr);
		}

		::System::Boolean TryCheck(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOKEN_TRYCHECK_OFFSET))(str, nullptr);
		}

	};

