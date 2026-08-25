#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class CertID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class Request; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83EE30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83EE50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x83F110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x83EFE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GET_REQCERT_OFFSET UNITYSDK_OFFSET(0x83F1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GET_SINGLEREQUESTEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x83F1C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x83F1D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp
{
	inline static constexpr unsigned int Request_TypeDefinitionIndex = 23060;

	class Request : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* reqCert; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* singleRequestExtensions; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* get_ReqCert()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GET_REQCERT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleRequestExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_GET_SINGLEREQUESTEXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_REQUEST_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

