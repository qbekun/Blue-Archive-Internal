#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class KekIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsPbeKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInfoGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters&; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x78F170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x78F310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_GET_UNPROTECTEDATTRIBUTEGENERATOR_OFFSET UNITYSDK_OFFSET(0x793B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_SET_UNPROTECTEDATTRIBUTEGENERATOR_OFFSET UNITYSDK_OFFSET(0x793B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYTRANSRECIPIENT_OFFSET UNITYSDK_OFFSET(0x793B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYTRANSRECIPIENT_OFFSET UNITYSDK_OFFSET(0x793C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEKRECIPIENT_OFFSET UNITYSDK_OFFSET(0x793D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEKRECIPIENT_OFFSET UNITYSDK_OFFSET(0x793E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDPASSWORDRECIPIENT_OFFSET UNITYSDK_OFFSET(0x793F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYAGREEMENTRECIPIENT_OFFSET UNITYSDK_OFFSET(0x7941A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYAGREEMENTRECIPIENTS_OFFSET UNITYSDK_OFFSET(0x7942B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDRECIPIENTINFOGENERATOR_OFFSET UNITYSDK_OFFSET(0x78C360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_GETALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x794540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_GENERATEASN1PARAMETERS_OFFSET UNITYSDK_OFFSET(0x794670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7948B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsEnvelopedGenerator_TypeDefinitionIndex = 22685;

	class CmsEnvelopedGenerator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* rc2Table; // 0x0
		::System::String* DesEde3Cbc; // 0x8
		::System::String* RC2Cbc; // 0x10
		::System::String* IdeaCbc; // 0x0
		::System::String* Cast5Cbc; // 0x0
		::System::String* Aes128Cbc; // 0x18
		::System::String* Aes192Cbc; // 0x20
		::System::String* Aes256Cbc; // 0x28
		::System::String* Camellia128Cbc; // 0x30
		::System::String* Camellia192Cbc; // 0x38
		::System::String* Camellia256Cbc; // 0x40
		::System::String* SeedCbc; // 0x48
		::System::String* DesEde3Wrap; // 0x50
		::System::String* Aes128Wrap; // 0x58
		::System::String* Aes192Wrap; // 0x60
		::System::String* Aes256Wrap; // 0x68
		::System::String* Camellia128Wrap; // 0x70
		::System::String* Camellia192Wrap; // 0x78
		::System::String* Camellia256Wrap; // 0x80
		::System::String* SeedWrap; // 0x88
		::System::String* ECDHSha1Kdf; // 0x90
		::System::String* ECMqvSha1Kdf; // 0x98
		::System::Collections::IList* recipientInfoGenerators; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unprotectedAttributeGenerator; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* get_UnprotectedAttributeGenerator()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_GET_UNPROTECTEDATTRIBUTEGENERATOR_OFFSET))(nullptr);
		}

		::System::Void set_UnprotectedAttributeGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_SET_UNPROTECTEDATTRIBUTEGENERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddKeyTransRecipient(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYTRANSRECIPIENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddKeyTransRecipient(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYTRANSRECIPIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKekRecipient(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEKRECIPIENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddKekRecipient(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEKRECIPIENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddPasswordRecipient(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsPbeKey* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsPbeKey*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDPASSWORDRECIPIENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddKeyAgreementRecipient(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYAGREEMENTRECIPIENT_OFFSET))(str, arg, arg, arg, str, nullptr);
		}

		::System::Void AddKeyAgreementRecipients(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::System::Collections::ICollection* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::ICollection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDKEYAGREEMENTRECIPIENTS_OFFSET))(str, arg, arg, arg, str, nullptr);
		}

		::System::Void AddRecipientInfoGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInfoGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInfoGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_ADDRECIPIENTINFOGENERATOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters&* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_GETALGORITHMIDENTIFIER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAsn1Parameters(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_GENERATEASN1PARAMETERS_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

