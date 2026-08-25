#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Principal
{
	inline static constexpr unsigned int TokenImpersonationLevel_TypeDefinitionIndex = 24414;

	class TokenImpersonationLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Principal::TokenImpersonationLevel* None; // 0x0
		::System::Security::Principal::TokenImpersonationLevel* Anonymous; // 0x0
		::System::Security::Principal::TokenImpersonationLevel* Identification; // 0x0
		::System::Security::Principal::TokenImpersonationLevel* Impersonation; // 0x0
		::System::Security::Principal::TokenImpersonationLevel* Delegation; // 0x0

	};
}

