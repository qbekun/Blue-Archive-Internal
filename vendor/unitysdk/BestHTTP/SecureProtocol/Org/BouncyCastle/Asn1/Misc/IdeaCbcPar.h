#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Misc { class IdeaCbcPar; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x8458F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x845B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x845A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_GETIV_OFFSET UNITYSDK_OFFSET(0x845BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x845BD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Misc
{
	inline static constexpr unsigned int IdeaCbcPar_TypeDefinitionIndex = 23074;

	class IdeaCbcPar : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* iv; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIV()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_GETIV_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_MISC_IDEACBCPAR_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

