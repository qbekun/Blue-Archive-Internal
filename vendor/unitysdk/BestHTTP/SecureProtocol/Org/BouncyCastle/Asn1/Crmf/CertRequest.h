#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertTemplate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class Controls; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x86B490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x86ADD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x86B830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x86B8D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GET_CERTREQID_OFFSET UNITYSDK_OFFSET(0x86B930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GET_CERTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x86B940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x86B950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x86B960)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf
{
	inline static constexpr unsigned int CertRequest_TypeDefinitionIndex = 23153;

	class CertRequest : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* certReqId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certTemplate; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls* controls; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertRequest* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertRequest*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GET_CERTREQID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate* get_CertTemplate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GET_CERTTEMPLATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls* get_Controls()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_GET_CONTROLS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_CERTREQUEST_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

