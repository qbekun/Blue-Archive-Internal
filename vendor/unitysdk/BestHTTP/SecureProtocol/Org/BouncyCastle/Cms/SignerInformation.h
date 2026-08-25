#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsSignedHelper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class SignerInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class IDigestCalculator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class AttributeTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformationStore; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DigestInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class Time; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x79E390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C0440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ISCOUNTERSIGNATURE_OFFSET UNITYSDK_OFFSET(0x7C05A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x7C05B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_SIGNERID_OFFSET UNITYSDK_OFFSET(0x7C05C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x7C05D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_DIGESTALGORITHMID_OFFSET UNITYSDK_OFFSET(0x7C0600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_DIGESTALGOID_OFFSET UNITYSDK_OFFSET(0x7C0610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_DIGESTALGPARAMS_OFFSET UNITYSDK_OFFSET(0x7C0650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETCONTENTDIGEST_OFFSET UNITYSDK_OFFSET(0x7C06A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ENCRYPTIONALGORITHMID_OFFSET UNITYSDK_OFFSET(0x7C0770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ENCRYPTIONALGOID_OFFSET UNITYSDK_OFFSET(0x7C0780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ENCRYPTIONALGPARAMS_OFFSET UNITYSDK_OFFSET(0x7C07C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_SIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7C0810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_UNSIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7C0890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x7C0910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETCOUNTERSIGNATURES_OFFSET UNITYSDK_OFFSET(0x7C0990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETENCODEDSIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7C14F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_DOVERIFY_OFFSET UNITYSDK_OFFSET(0x7C1540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_ISNULL_OFFSET UNITYSDK_OFFSET(0x7C37F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_DERDECODE_OFFSET UNITYSDK_OFFSET(0x7C3870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_VERIFYDIGEST_OFFSET UNITYSDK_OFFSET(0x7C3040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_VERIFY_OFFSET UNITYSDK_OFFSET(0x7C3970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_VERIFY_OFFSET UNITYSDK_OFFSET(0x7C3B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_TOSIGNERINFO_OFFSET UNITYSDK_OFFSET(0x7C3BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETSINGLEVALUEDSIGNEDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x7C2D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETSIGNINGTIME_OFFSET UNITYSDK_OFFSET(0x7C3A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_REPLACEUNSIGNEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x7C3CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_ADDCOUNTERSIGNERS_OFFSET UNITYSDK_OFFSET(0x7C3E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7C4560)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int SignerInformation_TypeDefinitionIndex = 22739;

	class SignerInformation : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedHelper* Helper; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID* sid; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo* info; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encryptionAlgorithm; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* signedAttributeSet; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* unsignedAttributeSet; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content; // 0x40
		::Il2CppArray<::System::Object*>* signature; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::IDigestCalculator* digestCalculator; // 0x58
		::Il2CppArray<::System::Object*>* resultDigest; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttributeTable; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttributeTable; // 0x70
		::System::Boolean isCounterSignature; // 0x78

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::IDigestCalculator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::IDigestCalculator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCounterSignature()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ISCOUNTERSIGNATURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID* get_SignerID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_SIGNERID_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_DIGESTALGORITHMID_OFFSET))(nullptr);
		}

		::System::String* get_DigestAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_DIGESTALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_DigestAlgParams()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_DIGESTALGPARAMS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetContentDigest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETCONTENTDIGEST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ENCRYPTIONALGORITHMID_OFFSET))(nullptr);
		}

		::System::String* get_EncryptionAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ENCRYPTIONALGOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* get_EncryptionAlgParams()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_ENCRYPTIONALGPARAMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_SignedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_SIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_UnsignedAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GET_UNSIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETSIGNATURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* GetCounterSignatures()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETCOUNTERSIGNATURES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncodedSignedAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETENCODEDSIGNEDATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean DoVerify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_DOVERIFY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNull(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_ISNULL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DigestInfo* DerDecode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DigestInfo*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_DERDECODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifyDigest(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_VERIFYDIGEST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_VERIFY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo* ToSignerInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_TOSIGNERINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetSingleValuedSignedAttribute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETSINGLEVALUEDSIGNEDATTRIBUTE_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Time* GetSigningTime()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Time*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_GETSIGNINGTIME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* ReplaceUnsignedAttributes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_REPLACEUNSIGNEDATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* AddCounterSigners(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_ADDCOUNTERSIGNERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

