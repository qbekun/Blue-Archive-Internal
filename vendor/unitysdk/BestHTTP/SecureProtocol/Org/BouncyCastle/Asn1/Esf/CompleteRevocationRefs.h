#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class CompleteRevocationRefs; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x859380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x859510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x859A40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x859B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_GETCRLOCSPREFS_OFFSET UNITYSDK_OFFSET(0x859CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x859E60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int CompleteRevocationRefs_TypeDefinitionIndex = 23119;

	class CompleteRevocationRefs : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* crlOcspRefs; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CompleteRevocationRefs*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCrlOcspRefs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_GETCRLOCSPREFS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_COMPLETEREVOCATIONREFS_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

