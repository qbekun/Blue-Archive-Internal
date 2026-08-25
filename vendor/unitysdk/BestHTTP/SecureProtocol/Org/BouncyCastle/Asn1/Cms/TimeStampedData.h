#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerIA5String; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class MetaData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class Evidence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class TimeStampedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x884B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x884C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x884F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_DATAURI_OFFSET UNITYSDK_OFFSET(0x884FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_METADATA_OFFSET UNITYSDK_OFFSET(0x884FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x884FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_TEMPORALEVIDENCE_OFFSET UNITYSDK_OFFSET(0x884FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x885000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int TimeStampedData_TypeDefinitionIndex = 23215;

	class TimeStampedData : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* dataUri; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* metaData; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* content; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::TimeStampedData* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::TimeStampedData*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_DATAURI_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_METADATA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_Content()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_CONTENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* get_TemporalEvidence()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_GET_TEMPORALEVIDENCE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_TIMESTAMPEDDATA_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

