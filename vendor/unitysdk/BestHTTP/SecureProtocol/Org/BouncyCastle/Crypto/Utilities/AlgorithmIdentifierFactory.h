#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_ALGORITHMIDENTIFIERFACTORY_GENERATEENCRYPTIONALGID_OFFSET UNITYSDK_OFFSET(0x5EDAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_ALGORITHMIDENTIFIERFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EE160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_ALGORITHMIDENTIFIERFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5EE170)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities
{
	inline static constexpr unsigned int AlgorithmIdentifierFactory_TypeDefinitionIndex = 22059;

	class AlgorithmIdentifierFactory : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IDEA_CBC; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CAST5_CBC; // 0x8
		::Il2CppArray<::System::Object*>* rc2Table; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GenerateEncryptionAlgID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_ALGORITHMIDENTIFIERFACTORY_GENERATEENCRYPTIONALGID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_ALGORITHMIDENTIFIERFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_ALGORITHMIDENTIFIERFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

