#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralNames; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class IssuerSerial; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class ObjectDigestInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class V2Form; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7EAFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7EAE10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x803440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x803500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x803560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8034A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x803170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x8035C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GET_BASECERTIFICATEID_OFFSET UNITYSDK_OFFSET(0x8035D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GET_OBJECTDIGESTINFO_OFFSET UNITYSDK_OFFSET(0x8035E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8035F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int V2Form_TypeDefinitionIndex = 22928;

	class V2Form : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2Form* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2Form*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2Form* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2Form*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* get_IssuerName()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GET_ISSUERNAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_BaseCertificateID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::IssuerSerial*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GET_BASECERTIFICATEID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* get_ObjectDigestInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_GET_OBJECTDIGESTINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_V2FORM_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

