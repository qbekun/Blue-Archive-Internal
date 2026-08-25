#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiMessages; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_.CTOR_OFFSET UNITYSDK_OFFSET(0x88FCC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x88CEF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_.CTOR_OFFSET UNITYSDK_OFFSET(0x88FCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_TOPKIMESSAGEARRAY_OFFSET UNITYSDK_OFFSET(0x88FD70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x88FF10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiMessages_TypeDefinitionIndex = 23244;

	class PkiMessages : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* content; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiMessages* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiMessages*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToPkiMessageArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_TOPKIMESSAGEARRAY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIMESSAGES_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

