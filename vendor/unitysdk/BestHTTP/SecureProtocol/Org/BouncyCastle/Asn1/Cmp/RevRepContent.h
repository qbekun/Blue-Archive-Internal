#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class RevRepContent; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x892110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETCRLS_OFFSET UNITYSDK_OFFSET(0x892220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x892340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x88CA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETREVCERTS_OFFSET UNITYSDK_OFFSET(0x892590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x892480)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int RevRepContent_TypeDefinitionIndex = 23255;

	class RevRepContent : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* status; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* revCerts; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* crls; // 0x20

		::Il2CppArray<::System::Object*>* GetStatus()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETSTATUS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCrls()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETCRLS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContent* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::RevRepContent*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRevCerts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_GETREVCERTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_REVREPCONTENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

