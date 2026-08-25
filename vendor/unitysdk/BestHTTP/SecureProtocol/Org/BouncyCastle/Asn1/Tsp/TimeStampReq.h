#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { class MessageImprint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBoolean; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { class TimeStampReq; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x81CA70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_.CTOR_OFFSET UNITYSDK_OFFSET(0x81CB10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_.CTOR_OFFSET UNITYSDK_OFFSET(0x81CF40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x81D040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_MESSAGEIMPRINT_OFFSET UNITYSDK_OFFSET(0x81D050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_REQPOLICY_OFFSET UNITYSDK_OFFSET(0x81D060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_NONCE_OFFSET UNITYSDK_OFFSET(0x81D070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_CERTREQ_OFFSET UNITYSDK_OFFSET(0x81D080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x81D090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x81D0A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp
{
	inline static constexpr unsigned int TimeStampReq_TypeDefinitionIndex = 22961;

	class TimeStampReq : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* nonce; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean* certReq; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions; // 0x38

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::MessageImprint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::MessageImprint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::MessageImprint* get_MessageImprint()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::MessageImprint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_MESSAGEIMPRINT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ReqPolicy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_REQPOLICY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Nonce()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_NONCE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean* get_CertReq()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_CERTREQ_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_GET_EXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_TSP_TIMESTAMPREQ_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

