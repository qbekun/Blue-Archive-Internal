#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class IssuerAndSerialNumber; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x8315E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x831770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8318C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x831950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8319A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_GET_CERTIFICATESERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x8319B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8319C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs
{
	inline static constexpr unsigned int IssuerAndSerialNumber_TypeDefinitionIndex = 23033;

	class IssuerAndSerialNumber : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* name; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* certSerialNumber; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_Name()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_GET_NAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_CertificateSerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_GET_CERTIFICATESERIALNUMBER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ISSUERANDSERIALNUMBER_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

