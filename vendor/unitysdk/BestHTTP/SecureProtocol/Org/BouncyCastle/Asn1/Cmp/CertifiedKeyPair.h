#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class CertOrEncCert; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class EncryptedValue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PkiPublicationInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class CertifiedKeyPair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x886F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x887210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8873A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8873C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GET_CERTORENCCERT_OFFSET UNITYSDK_OFFSET(0x887470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x887480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GET_PUBLICATIONINFO_OFFSET UNITYSDK_OFFSET(0x887490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8874A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int CertifiedKeyPair_TypeDefinitionIndex = 23221;

	class CertifiedKeyPair : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* privateKey; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* publicationInfo; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* get_CertOrEncCert()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GET_CERTORENCCERT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* get_PrivateKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GET_PRIVATEKEY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* get_PublicationInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_GET_PUBLICATIONINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_CERTIFIEDKEYPAIR_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

