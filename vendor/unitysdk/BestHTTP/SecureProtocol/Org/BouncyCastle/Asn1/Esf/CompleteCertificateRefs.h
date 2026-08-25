#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class CompleteCertificateRefs; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x858890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x858A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x858F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x859020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_GETOTHERCERTIDS_OFFSET UNITYSDK_OFFSET(0x8591D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x859370)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int CompleteCertificateRefs_TypeDefinitionIndex = 23118;

	class CompleteCertificateRefs : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* otherCertIDs; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CompleteCertificateRefs*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOtherCertIDs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_GETOTHERCERTIDS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETECERTIFICATEREFS_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

