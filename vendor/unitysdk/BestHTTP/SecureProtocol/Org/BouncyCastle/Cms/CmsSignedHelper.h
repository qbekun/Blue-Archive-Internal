#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETSIGNATUREINSTANCE_OFFSET UNITYSDK_OFFSET(0x7A5300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETDIGESTINSTANCE_OFFSET UNITYSDK_OFFSET(0x79C8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETDIGESTALGNAME_OFFSET UNITYSDK_OFFSET(0x79B3A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETENCALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x79CAB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETENCOID_OFFSET UNITYSDK_OFFSET(0x7A1E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_FIXALGID_OFFSET UNITYSDK_OFFSET(0x7B3340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7B3410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_CREATEATTRIBUTESTORE_OFFSET UNITYSDK_OFFSET(0x79ED70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B56C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_CREATECRLSTORE_OFFSET UNITYSDK_OFFSET(0x79F720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_ADDENTRIES_OFFSET UNITYSDK_OFFSET(0x7B56D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_CREATECERTIFICATESTORE_OFFSET UNITYSDK_OFFSET(0x79F4C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETENCRYPTIONALGNAME_OFFSET UNITYSDK_OFFSET(0x79B4E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_ADDCERTSFROMSET_OFFSET UNITYSDK_OFFSET(0x7B5CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETDIGESTALIASES_OFFSET UNITYSDK_OFFSET(0x7B31C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_ADDCRLSFROMSET_OFFSET UNITYSDK_OFFSET(0x7B5840)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsSignedHelper_TypeDefinitionIndex = 22708;

	class CmsSignedHelper : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Instance; // 0x0
		::System::String* EncryptionECDsaWithSha1; // 0x8
		::System::String* EncryptionECDsaWithSha224; // 0x10
		::System::String* EncryptionECDsaWithSha256; // 0x18
		::System::String* EncryptionECDsaWithSha384; // 0x20
		::System::String* EncryptionECDsaWithSha512; // 0x28
		::System::Collections::IDictionary* encryptionAlgs; // 0x30
		::System::Collections::IDictionary* digestAlgs; // 0x38
		::System::Collections::IDictionary* digestAliases; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* noParams; // 0x48
		::System::Collections::IDictionary* ecAlgorithms; // 0x50

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* GetSignatureInstance(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETSIGNATUREINSTANCE_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* GetDigestInstance(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETDIGESTINSTANCE_OFFSET))(str, nullptr);
		}

		::System::String* GetDigestAlgName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETDIGESTALGNAME_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetEncAlgorithmIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETENCALGORITHMIDENTIFIER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetEncOid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETENCOID_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* FixAlgID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_FIXALGID_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* CreateAttributeStore(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_CREATEATTRIBUTESTORE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* CreateCrlStore(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_CREATECRLSTORE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddEntries(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_ADDENTRIES_OFFSET))(arg, str, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* CreateCertificateStore(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_CREATECERTIFICATESTORE_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetEncryptionAlgName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETENCRYPTIONALGNAME_OFFSET))(str, nullptr);
		}

		::System::Void AddCertsFromSet(::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_ADDCERTSFROMSET_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDigestAliases(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_GETDIGESTALIASES_OFFSET))(str, nullptr);
		}

		::System::Void AddCrlsFromSet(::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSSIGNEDHELPER_ADDCRLSFROMSET_OFFSET))(arg, arg, nullptr);
		}

	};
}

