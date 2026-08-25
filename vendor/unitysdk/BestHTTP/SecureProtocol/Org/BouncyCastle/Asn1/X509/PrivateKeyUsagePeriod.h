#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class PrivateKeyUsagePeriod; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_GET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x7FC480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FC490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_GET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x7FC7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7FC800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7FC9F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int PrivateKeyUsagePeriod_TypeDefinitionIndex = 22908;

	class PrivateKeyUsagePeriod : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* _notBefore; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* _notAfter; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotBefore()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_GET_NOTBEFORE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotAfter()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_GET_NOTAFTER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_PRIVATEKEYUSAGEPERIOD_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

