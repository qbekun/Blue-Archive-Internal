#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x79FFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A11C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_SETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x7A1380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDDIGESTS_OFFSET UNITYSDK_OFFSET(0x7A1390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDDIGESTS_OFFSET UNITYSDK_OFFSET(0x7A0DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A15E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A1880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A1A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A1CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A17A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A1970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A25C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A27C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A2980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A26A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A28E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_DOADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7A2440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNERCALLBACK_OFFSET UNITYSDK_OFFSET(0x7A2FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7A3170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7A31E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7A3260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7A0560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7A32E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_REGISTERDIGESTOID_OFFSET UNITYSDK_OFFSET(0x7A2FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_CONFIGUREDIGEST_OFFSET UNITYSDK_OFFSET(0x7A13A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x7A4CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_CALCULATEVERSION_OFFSET UNITYSDK_OFFSET(0x7A3C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_CHECKFORVERSION3_OFFSET UNITYSDK_OFFSET(0x7A4DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ATTACHDIGESTSTOOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7A47F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_GETSAFEOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7A5160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_GETSAFETEEOUTPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x7A46C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7A51C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsSignedDataStreamGenerator_TypeDefinitionIndex = 22704;

	class CmsSignedDataStreamGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Helper; // 0x0
		::System::Collections::IList* _signerInfs; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* _messageDigestOids; // 0x48
		::System::Collections::IDictionary* _messageDigests; // 0x50
		::System::Collections::IDictionary* _messageHashes; // 0x58
		::System::Boolean _messageDigestsLocked; // 0x60
		::System::Int32 _bufferSize; // 0x64

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetBufferSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_SETBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDigests(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDDIGESTS_OFFSET))(arg, nullptr);
		}

		::System::Void AddDigests(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDDIGESTS_OFFSET))(arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void DoAddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_DOADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSignerCallback(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ADDSIGNERCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::Boolean arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::Boolean arg, ::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::Boolean, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str, ::System::Boolean arg, ::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::System::Boolean, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void RegisterDigestOid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_REGISTERDIGESTOID_OFFSET))(str, nullptr);
		}

		::System::Void ConfigureDigest(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_CONFIGUREDIGEST_OFFSET))(str, nullptr);
		}

		::System::Void Generate(::System::IO::Stream* arg, ::System::String* str, ::System::Boolean arg, ::System::IO::Stream* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::System::Boolean, ::System::IO::Stream*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_GENERATE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* CalculateVersion(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_CALCULATEVERSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckForVersion3(::System::Collections::IList* arg)
		{
			return (return (::System::Boolean(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_CHECKFORVERSION3_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* AttachDigestsToOutputStream(::System::Collections::ICollection* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Collections::ICollection*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_ATTACHDIGESTSTOOUTPUTSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* GetSafeOutputStream(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_GETSAFEOUTPUTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetSafeTeeOutputStream(::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_GETSAFETEEOUTPUTSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATASTREAMGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

