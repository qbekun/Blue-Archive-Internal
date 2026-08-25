#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class RevokedInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class CertStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x83D370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x83D3E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x83D420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x83D460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83D5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_GET_TAGNO_OFFSET UNITYSDK_OFFSET(0x83D740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x83D750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x83D760)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp
{
	inline static constexpr unsigned int CertStatus_TypeDefinitionIndex = 23054;

	class CertStatus : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 tagNo; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* value; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertStatus* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertStatus*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_GET_TAGNO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Status()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_GET_STATUS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_CERTSTATUS_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

