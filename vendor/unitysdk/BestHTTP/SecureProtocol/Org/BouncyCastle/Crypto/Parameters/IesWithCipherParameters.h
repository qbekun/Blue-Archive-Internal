#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESWITHCIPHERPARAMETERS_GET_CIPHERKEYSIZE_OFFSET UNITYSDK_OFFSET(0x691320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESWITHCIPHERPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x691330)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int IesWithCipherParameters_TypeDefinitionIndex = 22343;

	class IesWithCipherParameters : public Il2CppObject
	{
	public:
		::System::Int32 cipherKeySize; // 0x28

		::System::Int32 get_CipherKeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESWITHCIPHERPARAMETERS_GET_CIPHERKEYSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_IESWITHCIPHERPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

