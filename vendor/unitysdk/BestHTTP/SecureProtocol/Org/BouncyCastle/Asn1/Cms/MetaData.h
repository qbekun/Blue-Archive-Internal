#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBoolean; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerUtf8String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerIA5String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class Attributes; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class MetaData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x87C630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x87C6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x87C8F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x87C990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_ISHASHPROTECTED_OFFSET UNITYSDK_OFFSET(0x87CB80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x87CBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x87CBB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_OTHERMETADATA_OFFSET UNITYSDK_OFFSET(0x87CBC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int MetaData_TypeDefinitionIndex = 23196;

	class MetaData : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean* hashProtected; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* fileName; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* mediaType; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Attributes* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBoolean*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Attributes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHashProtected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_ISHASHPROTECTED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String* get_FileName()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerUtf8String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_FILENAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* get_MediaType()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_MEDIATYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Attributes* get_OtherMetaData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Attributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_METADATA_GET_OTHERMETADATA_OFFSET))(nullptr);
		}

	};
}

