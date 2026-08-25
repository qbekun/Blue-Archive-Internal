#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactory; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1VERIFIERFACTORYPROVIDER_CREATEVERIFIERFACTORY_OFFSET UNITYSDK_OFFSET(0x69D3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1VERIFIERFACTORYPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x69D4A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1VERIFIERFACTORYPROVIDER_GET_SIGNATUREALGNAMES_OFFSET UNITYSDK_OFFSET(0x69D4D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int Asn1VerifierFactoryProvider_TypeDefinitionIndex = 22397;

	class Asn1VerifierFactoryProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* CreateVerifierFactory(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1VERIFIERFACTORYPROVIDER_CREATEVERIFIERFACTORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1VERIFIERFACTORYPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerable* get_SignatureAlgNames()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1VERIFIERFACTORYPROVIDER_GET_SIGNATUREALGNAMES_OFFSET))(nullptr);
		}

	};
}

