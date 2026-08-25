#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatusEncodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x88FF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x88FFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x88FFD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x890170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x890190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8901A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiStatusEncodable_TypeDefinitionIndex = 23246;

	class PkiStatusEncodable : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* granted; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* grantedWithMods; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* rejection; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* waiting; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* revocationWarning; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* revocationNotification; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* keyUpdateWaiting; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* status; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Value()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_GET_VALUE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKISTATUSENCODABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

