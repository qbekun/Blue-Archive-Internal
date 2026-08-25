#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime { class SmimeCapabilities; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x822630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_DOGETCAPABILITIESFOROID_OFFSET UNITYSDK_OFFSET(0x822870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_GETCAPABILITIES_OFFSET UNITYSDK_OFFSET(0x823070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8230E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x823430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_GETCAPABILITIESFOROID_OFFSET UNITYSDK_OFFSET(0x823440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x822840)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime
{
	inline static constexpr unsigned int SmimeCapabilities_TypeDefinitionIndex = 22981;

	class SmimeCapabilities : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PreferSignedData; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CannotDecryptAny; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SmimeCapabilitesVersions; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes256Cbc; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes192Cbc; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Aes128Cbc; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdeaCbc; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Cast5Cbc; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesCbc; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEde3Cbc; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* RC2Cbc; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* capabilities; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void DoGetCapabilitiesForOid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_DOGETCAPABILITIESFOROID_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* GetCapabilities(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_GETCAPABILITIES_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetCapabilitiesForOid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::Collections::IList*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_GETCAPABILITIESFOROID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITIES_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

