#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTVERIFIERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x69D800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTVERIFIERRESULT_ISVERIFIED_OFFSET UNITYSDK_OFFSET(0x69D840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTVERIFIERRESULT_ISVERIFIED_OFFSET UNITYSDK_OFFSET(0x69D8F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int DefaultVerifierResult_TypeDefinitionIndex = 22401;

	class DefaultVerifierResult : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* mSigner; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTVERIFIERRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVerified(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTVERIFIERRESULT_ISVERIFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVerified(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTVERIFIERRESULT_ISVERIFIED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

