#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C6A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_FROMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x8C6AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_FROMKEY_OFFSET UNITYSDK_OFFSET(0x8C6F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C70E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C7110)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Extension
{
	inline static constexpr unsigned int AuthorityKeyIdentifierStructure_TypeDefinitionIndex = 21564;

	class AuthorityKeyIdentifierStructure : public ::AutoMapper::Configuration::Conventions::MemberConfiguration
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* FromCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_FROMCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* FromKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_FROMKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_AUTHORITYKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

