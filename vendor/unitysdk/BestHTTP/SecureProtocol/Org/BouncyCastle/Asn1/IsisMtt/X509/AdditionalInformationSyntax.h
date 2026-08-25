#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500 { class DirectoryString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509 { class AdditionalInformationSyntax; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x847EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x848020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x848050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_GET_INFORMATION_OFFSET UNITYSDK_OFFSET(0x8480D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8480E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509
{
	inline static constexpr unsigned int AdditionalInformationSyntax_TypeDefinitionIndex = 23082;

	class AdditionalInformationSyntax : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* information; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_.CTOR_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Information()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_GET_INFORMATION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_ADDITIONALINFORMATIONSYNTAX_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

