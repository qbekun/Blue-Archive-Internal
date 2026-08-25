#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class CipherKeyGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERKEYGENERATORFACTORY_CREATECIPHERKEYGENERATOR_OFFSET UNITYSDK_OFFSET(0x5EF0A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERKEYGENERATORFACTORY_CREATEKEYGENERATOR_OFFSET UNITYSDK_OFFSET(0x5EF140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERKEYGENERATORFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EF6F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities
{
	inline static constexpr unsigned int CipherKeyGeneratorFactory_TypeDefinitionIndex = 22061;

	class CipherKeyGeneratorFactory : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* CreateCipherKeyGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERKEYGENERATORFACTORY_CREATECIPHERKEYGENERATOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* CreateKeyGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERKEYGENERATORFACTORY_CREATEKEYGENERATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERKEYGENERATORFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

