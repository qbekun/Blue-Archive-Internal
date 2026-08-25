#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A1160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A12C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETBASEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7B1C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETATTRIBUTESET_OFFSET UNITYSDK_OFFSET(0x7B1EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x7A0B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDCRLS_OFFSET UNITYSDK_OFFSET(0x7A0B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDATTRIBUTECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x7A0580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDSIGNERS_OFFSET UNITYSDK_OFFSET(0x7A0110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETGENERATEDDIGESTS_OFFSET UNITYSDK_OFFSET(0x7B2AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GET_USEDERFORCERTS_OFFSET UNITYSDK_OFFSET(0x7B2B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_SET_USEDERFORCERTS_OFFSET UNITYSDK_OFFSET(0x7B2B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GET_USEDERFORCRLS_OFFSET UNITYSDK_OFFSET(0x7B2B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_SET_USEDERFORCRLS_OFFSET UNITYSDK_OFFSET(0x7B2B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDSIGNERCALLBACK_OFFSET UNITYSDK_OFFSET(0x7B2B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETSIGNERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7A23D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETSIGNERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7A2AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7B2C20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsSignedGenerator_TypeDefinitionIndex = 22707;

	class CmsSignedGenerator : public Il2CppObject
	{
	public:
		::System::String* Data; // 0x0
		::System::String* DigestSha1; // 0x8
		::System::String* DigestSha224; // 0x10
		::System::String* DigestSha256; // 0x18
		::System::String* DigestSha384; // 0x20
		::System::String* DigestSha512; // 0x28
		::System::String* DigestMD5; // 0x30
		::System::String* DigestGost3411; // 0x38
		::System::String* DigestRipeMD128; // 0x40
		::System::String* DigestRipeMD160; // 0x48
		::System::String* DigestRipeMD256; // 0x50
		::System::String* EncryptionRsa; // 0x58
		::System::String* EncryptionDsa; // 0x60
		::System::String* EncryptionECDsa; // 0x68
		::System::String* EncryptionRsaPss; // 0x70
		::System::String* EncryptionGost3410; // 0x78
		::System::String* EncryptionECGost3410; // 0x80
		::System::Collections::IList* _certs; // 0x10
		::System::Collections::IList* _crls; // 0x18
		::System::Collections::IList* _signers; // 0x20
		::System::Collections::IDictionary* _digests; // 0x28
		::System::Boolean _useDerForCerts; // 0x30
		::System::Boolean _useDerForCrls; // 0x31
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionary* GetBaseParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETBASEPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* GetAttributeSet(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETATTRIBUTESET_OFFSET))(arg, nullptr);
		}

		::System::Void AddCertificates(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Void AddCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDCRLS_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttributeCertificates(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDATTRIBUTECERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Void AddSigners(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDSIGNERS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionary* GetGeneratedDigests()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETGENERATEDDIGESTS_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDerForCerts()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GET_USEDERFORCERTS_OFFSET))(nullptr);
		}

		::System::Void set_UseDerForCerts(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_SET_USEDERFORCERTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseDerForCrls()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GET_USEDERFORCRLS_OFFSET))(nullptr);
		}

		::System::Void set_UseDerForCrls(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_SET_USEDERFORCRLS_OFFSET))(arg, nullptr);
		}

		::System::Void AddSignerCallback(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_ADDSIGNERCALLBACK_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* GetSignerIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETSIGNERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* GetSignerIdentifier(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_GETSIGNERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

