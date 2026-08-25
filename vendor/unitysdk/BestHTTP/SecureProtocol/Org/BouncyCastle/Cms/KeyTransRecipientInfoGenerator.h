#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class TbsCertificateStructure; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class IssuerAndSerialNumber; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class RecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BBF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BBF30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BBF60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_SET_RECIPIENTCERT_OFFSET UNITYSDK_OFFSET(0x7BBFE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_SET_RECIPIENTPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x7BC080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_SET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7BC1A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x7BC1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_GET_ALGORITHMDETAILS_OFFSET UNITYSDK_OFFSET(0x7BC390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_GENERATEWRAPPEDKEY_OFFSET UNITYSDK_OFFSET(0x7BC3B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7BC5B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int KeyTransRecipientInfoGenerator_TypeDefinitionIndex = 22722;

	class KeyTransRecipientInfoGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* recipientTbsCert; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* recipientPublicKey; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* info; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* issuerAndSerialNumber; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RecipientCert(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_SET_RECIPIENTCERT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RecipientPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_SET_RECIPIENTPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_SubjectKeyIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_SET_SUBJECTKEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmDetails()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_GET_ALGORITHMDETAILS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateWrappedKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_GENERATEWRAPPEDKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_KEYTRANSRECIPIENTINFOGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

