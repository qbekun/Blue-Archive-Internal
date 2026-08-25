#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class ResponseData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class BasicOcspResponse; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83C5E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x83C600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x83C9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x83C790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETTBSRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x83CBB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_TBSRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x83CBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETSIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x83CBD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x83CBE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x83CBF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x83CC00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETSIGNATUREOCTETS_OFFSET UNITYSDK_OFFSET(0x83CC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETCERTS_OFFSET UNITYSDK_OFFSET(0x83CC40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_CERTS_OFFSET UNITYSDK_OFFSET(0x83CC50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x83CC60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp
{
	inline static constexpr unsigned int BasicOcspResponse_TypeDefinitionIndex = 23052;

	class BasicOcspResponse : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* signature; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* certs; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetTbsResponseData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETTBSRESPONSEDATA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData* get_TbsResponseData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::ResponseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_TBSRESPONSEDATA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetSignatureAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETSIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* GetSignature()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETSIGNATURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* get_Signature()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_SIGNATURE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSignatureOctets()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETSIGNATUREOCTETS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* GetCerts()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GETCERTS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* get_Certs()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_GET_CERTS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OCSP_BASICOCSPRESPONSE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

