#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_SUBJECTKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C7140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_SUBJECTKEYIDENTIFIERSTRUCTURE_FROMPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x8C71F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_SUBJECTKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C73C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Extension
{
	inline static constexpr unsigned int SubjectKeyIdentifierStructure_TypeDefinitionIndex = 21565;

	class SubjectKeyIdentifierStructure : public Il2CppObject
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_SUBJECTKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* FromPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_SUBJECTKEYIDENTIFIERSTRUCTURE_FROMPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_SUBJECTKEYIDENTIFIERSTRUCTURE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

