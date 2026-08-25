#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHVERIFIER_ACCEPT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsDHVerifier_TypeDefinitionIndex = 22198;

	class TlsDHVerifier : public Il2CppObject
	{
	public:
		::System::Boolean Accept(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHVERIFIER_ACCEPT_OFFSET))(arg, nullptr);
		}

	};
}

