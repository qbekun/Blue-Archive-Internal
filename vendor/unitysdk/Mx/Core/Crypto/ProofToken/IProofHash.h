#pragma once
#include "../../../../unitysdk.h"

#define MX_CORE_CRYPTO_PROOFTOKEN_IPROOFHASH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Crypto::ProofToken
{
	inline static constexpr unsigned int IProofHash_TypeDefinitionIndex = 12910;

	class IProofHash : public Il2CppObject
	{
	public:
		::System::String* Evaluate(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_IPROOFHASH_EVALUATE_OFFSET))(str, nullptr);
		}

	};
}

