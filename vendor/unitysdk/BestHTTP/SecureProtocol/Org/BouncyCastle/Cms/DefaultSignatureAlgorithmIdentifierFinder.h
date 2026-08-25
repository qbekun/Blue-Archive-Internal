#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class RsassaPssParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A78B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_CREATEPSSPARAMS_OFFSET UNITYSDK_OFFSET(0x7A78C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_GENERATE_OFFSET UNITYSDK_OFFSET(0x7A79F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7A8170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_FIND_OFFSET UNITYSDK_OFFSET(0x7AF8D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int DefaultSignatureAlgorithmIdentifierFinder_TypeDefinitionIndex = 22705;

	class DefaultSignatureAlgorithmIdentifierFinder : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* algorithms; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* noParams; // 0x8
		::System::Collections::IDictionary* _params; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* pkcs15RsaEncryption; // 0x18
		::System::Collections::IDictionary* digestOids; // 0x20
		::System::Collections::IDictionary* digestBuilders; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_RSA; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_DSA; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECDSA; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_RSA_PSS; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_GOST3410; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECGOST3410; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECGOST3410_2012_256; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECGOST3410_2012_512; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_CREATEPSSPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Generate(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_GENERATE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Find(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_DEFAULTSIGNATUREALGORITHMIDENTIFIERFINDER_FIND_OFFSET))(str, nullptr);
		}

	};
}

