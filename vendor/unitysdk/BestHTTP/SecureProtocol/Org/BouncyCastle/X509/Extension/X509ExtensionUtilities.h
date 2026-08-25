#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_GETSUBJECTALTERNATIVENAMES_OFFSET UNITYSDK_OFFSET(0x8C73F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_GETISSUERALTERNATIVENAMES_OFFSET UNITYSDK_OFFSET(0x8C7F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C8010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_GETALTERNATIVENAME_OFFSET UNITYSDK_OFFSET(0x8C7480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_FROMEXTENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x8C09E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Extension
{
	inline static constexpr unsigned int X509ExtensionUtilities_TypeDefinitionIndex = 21566;

	class X509ExtensionUtilities : public Il2CppObject
	{
	public:
		::System::Collections::ICollection* GetSubjectAlternativeNames(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_GETSUBJECTALTERNATIVENAMES_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* GetIssuerAlternativeNames(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_GETISSUERALTERNATIVENAMES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* GetAlternativeName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_GETALTERNATIVENAME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* FromExtensionValue(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_EXTENSION_X509EXTENSIONUTILITIES_FROMEXTENSIONVALUE_OFFSET))(arg, nullptr);
		}

	};
}

