#pragma once
#include "unitysdk.h"

#define TOKENHASHVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9263E80)

	inline static constexpr unsigned int TokenHashValue_TypeDefinitionIndex = 24956;

	class TokenHashValue : public Il2CppObject
	{
	public:
		::System::String* tokenString; // 0x10
		::System::TokenType* tokenType; // 0x18
		::System::Int32 tokenValue; // 0x1C

		::System::Void .ctor(::System::String* str, ::System::TokenType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::TokenType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOKENHASHVALUE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};

