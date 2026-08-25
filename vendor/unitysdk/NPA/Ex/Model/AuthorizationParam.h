#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Model
{
	inline static constexpr unsigned int AuthorizationParam_TypeDefinitionIndex = 26106;

	class AuthorizationParam : public Il2CppObject
	{
	public:
		::System::String* scope; // 0x10
		::System::String* state; // 0x18
		::System::String* nonce; // 0x20

	};
}

