#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsAttributeTableGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInfoGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x799140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7991C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7995C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET UNITYSDK_OFFSET(0x799DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNERINFOGENERATOR_OFFSET UNITYSDK_OFFSET(0x799E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_DOADDSIGNER_OFFSET UNITYSDK_OFFSET(0x7993D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x799F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x79A070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x79A000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATECOUNTERSIGNERS_OFFSET UNITYSDK_OFFSET(0x79B070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x79B160)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsSignedDataGenerator_TypeDefinitionIndex = 22699;

	class CmsSignedDataGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Helper; // 0x0
		::System::Collections::IList* signerInfs; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::System::Void AddSignerInfoGenerator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_ADDSIGNERINFOGENERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void doAddSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* arg, ::System::String* str, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*, ::System::String*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_DOADDSIGNER_OFFSET))(arg, arg, str, str, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Generate(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATE_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* GenerateCounterSigners(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_GENERATECOUNTERSIGNERS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDDATAGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

