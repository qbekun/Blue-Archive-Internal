#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ScvpReqRes; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x880600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8806A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8807B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8807F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x880840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x880850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x880860)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	inline static constexpr unsigned int ScvpReqRes_TypeDefinitionIndex = 23208;

	class ScvpReqRes : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* request; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* response; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ScvpReqRes* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ScvpReqRes*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_Request()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_GET_REQUEST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_Response()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_GET_RESPONSE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMS_SCVPREQRES_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

