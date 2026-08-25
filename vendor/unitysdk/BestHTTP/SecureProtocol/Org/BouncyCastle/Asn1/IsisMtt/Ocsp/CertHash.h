#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp { class CertHash; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84D6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x84D840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x84D990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x84DAE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_GET_CERTIFICATEHASH_OFFSET UNITYSDK_OFFSET(0x84DAF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84DB70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp
{
	inline static constexpr unsigned int CertHash_TypeDefinitionIndex = 23092;

	class CertHash : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm; // 0x10
		::Il2CppArray<::System::Object*>* certificateHash; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::CertHash*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_GET_HASHALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CertificateHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_GET_CERTIFICATEHASH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_OCSP_CERTHASH_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

