#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralNames; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x7F69C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7F69D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_GETVALUES_OFFSET UNITYSDK_OFFSET(0x7F6AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F6EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_GET_POLICYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x7F75F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int IetfAttrSyntax_TypeDefinitionIndex = 22895;

	class IetfAttrSyntax : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 ValueOctets; // 0x0
		::System::Int32 ValueOid; // 0x0
		::System::Int32 ValueUtf8; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* policyAuthority; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* values; // 0x18
		::System::Int32 valueChoice; // 0x20

		::System::Int32 get_ValueType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetValues()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_GETVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* get_PolicyAuthority()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_IETFATTRSYNTAX_GET_POLICYAUTHORITY_OFFSET))(nullptr);
		}

	};
}

