#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509CertificateStructure; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class CertificatePair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7EFAA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7EFC30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F0150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7F01A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x7F0260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x7F0270)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int CertificatePair_TypeDefinitionIndex = 22879;

	class CertificatePair : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificatePair* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificatePair*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_Forward()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_GET_FORWARD_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_Reverse()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTIFICATEPAIR_GET_REVERSE_OFFSET))(nullptr);
		}

	};
}

