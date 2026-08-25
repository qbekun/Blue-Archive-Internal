#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int StateNonceResult_TypeDefinitionIndex = 25854;

	class StateNonceResult : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18
		::System::String* state; // 0x20
		::System::String* nonce; // 0x28

	};

