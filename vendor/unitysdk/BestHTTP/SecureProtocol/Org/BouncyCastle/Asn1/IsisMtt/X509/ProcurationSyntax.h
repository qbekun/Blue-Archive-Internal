#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500 { class DirectoryString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class IssuerSerial; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509 { class ProcurationSyntax; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84AEE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x84B070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x84B3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x84B440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x84B4B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_TYPEOFSUBSTITUTION_OFFSET UNITYSDK_OFFSET(0x84B4C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_THIRDPERSON_OFFSET UNITYSDK_OFFSET(0x84B4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_CERTREF_OFFSET UNITYSDK_OFFSET(0x84B4E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84B4F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509
{
	inline static constexpr unsigned int ProcurationSyntax_TypeDefinitionIndex = 23089;

	class ProcurationSyntax : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::String* country; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* get_Country()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_COUNTRY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString* get_TypeOfSubstitution()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X500::DirectoryString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_TYPEOFSUBSTITUTION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_ThirdPerson()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_THIRDPERSON_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_CertRef()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_GET_CERTREF_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROCURATIONSYNTAX_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

