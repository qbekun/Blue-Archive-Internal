#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class ResponderID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class ResponseData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83FD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83CA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8400B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x840140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x83FD60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x840210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_RESPONDERID_OFFSET UNITYSDK_OFFSET(0x840220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_PRODUCEDAT_OFFSET UNITYSDK_OFFSET(0x840230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_RESPONSES_OFFSET UNITYSDK_OFFSET(0x840240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_RESPONSEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x840250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x840260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8404C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp
{
	inline static constexpr unsigned int ResponseData_TypeDefinitionIndex = 23063;

	class ResponseData : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* V1; // 0x0
		::System::Boolean versionPresent; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* responses; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions; // 0x38

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID* get_ResponderID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponderID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_RESPONDERID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_ProducedAt()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_PRODUCEDAT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_Responses()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_RESPONSES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_GET_RESPONSEEXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_RESPONSEDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

