#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSecureReadable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class RecipientInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IWrapper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBufferedCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x794EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_GETRFC3211WRAPPERNAME_OFFSET UNITYSDK_OFFSET(0x795570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_BUILDRECIPIENTINFORMATIONSTORE_OFFSET UNITYSDK_OFFSET(0x78E150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_READRECIPIENTINFO_OFFSET UNITYSDK_OFFSET(0x795760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x795560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x795AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_CREATEASYMMETRICCIPHER_OFFSET UNITYSDK_OFFSET(0x795C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_GETASYMMETRICENCRYPTIONALGNAME_OFFSET UNITYSDK_OFFSET(0x795BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_GETKEYSIZE_OFFSET UNITYSDK_OFFSET(0x795DA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsEnvelopedHelper_TypeDefinitionIndex = 22688;

	class CmsEnvelopedHelper : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Instance; // 0x0
		::System::Collections::IDictionary* KeySizes; // 0x8
		::System::Collections::IDictionary* BaseCipherNames; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetRfc3211WrapperName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_GETRFC3211WRAPPERNAME_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* BuildRecipientInformationStore(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_BUILDRECIPIENTINFORMATIONSTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadRecipientInfo(::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_READRECIPIENTINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IWrapper* CreateWrapper(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IWrapper*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_CREATEWRAPPER_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* CreateAsymmetricCipher(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_CREATEASYMMETRICCIPHER_OFFSET))(str, nullptr);
		}

		::System::String* GetAsymmetricEncryptionAlgName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_GETASYMMETRICENCRYPTIONALGNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 GetKeySize(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDHELPER_GETKEYSIZE_OFFSET))(str, nullptr);
		}

	};
}

