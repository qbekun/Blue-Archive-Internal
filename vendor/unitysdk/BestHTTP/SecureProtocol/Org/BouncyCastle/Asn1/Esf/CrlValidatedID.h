#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class OtherHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class CrlIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf { class CrlValidatedID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x85AC50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_.CTOR_OFFSET UNITYSDK_OFFSET(0x85BC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_.CTOR_OFFSET UNITYSDK_OFFSET(0x85BF40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_.CTOR_OFFSET UNITYSDK_OFFSET(0x85BF50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_GET_CRLHASH_OFFSET UNITYSDK_OFFSET(0x85BFF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_GET_CRLIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x85C000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x85C010)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf
{
	inline static constexpr unsigned int CrlValidatedID_TypeDefinitionIndex = 23123;

	class CrlValidatedID : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash* get_CrlHash()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::OtherHash*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_GET_CRLHASH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* get_CrlIdentifier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_GET_CRLIDENTIFIER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ESF_CRLVALIDATEDID_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

