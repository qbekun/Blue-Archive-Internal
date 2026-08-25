#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509CertificateStructure; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp { class RequestedCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1TaggedObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84DCB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84E000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x84DEE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x84DEB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x84E080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x84E120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GETCERTIFICATEBYTES_OFFSET UNITYSDK_OFFSET(0x84E140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84E290)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp
{
	inline static constexpr unsigned int RequestedCertificate_TypeDefinitionIndex = 23094;

	class RequestedCertificate : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* cert; // 0x10
		::Il2CppArray<::System::Object*>* publicKeyCert; // 0x18
		::Il2CppArray<::System::Object*>* attributeCert; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Choice* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Choice*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Choice* get_Type()
		{
			return (return (Choice*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GET_TYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCertificateBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_GETCERTIFICATEBYTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_REQUESTEDCERTIFICATE_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

