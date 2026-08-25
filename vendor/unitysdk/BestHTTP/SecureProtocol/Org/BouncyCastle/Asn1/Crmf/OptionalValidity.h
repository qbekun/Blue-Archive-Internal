#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Time; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class OptionalValidity; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x86DE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x86C1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x86E190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_GET_NOTBEFORE_OFFSET UNITYSDK_OFFSET(0x86E1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_GET_NOTAFTER_OFFSET UNITYSDK_OFFSET(0x86E1F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x86E200)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf
{
	inline static constexpr unsigned int OptionalValidity_TypeDefinitionIndex = 23161;

	class OptionalValidity : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* notBefore; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* notAfter; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* get_NotBefore()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_GET_NOTBEFORE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* get_NotAfter()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_GET_NOTAFTER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_OPTIONALVALIDITY_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

