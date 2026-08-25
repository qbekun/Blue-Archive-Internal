#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfoParser; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCONTENTINFOPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78E830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCONTENTINFOPARSER_CLOSE_OFFSET UNITYSDK_OFFSET(0x790B10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsContentInfoParser_TypeDefinitionIndex = 22679;

	class CmsContentInfoParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* contentInfo; // 0x10
		::System::IO::Stream* data; // 0x18

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCONTENTINFOPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCONTENTINFOPARSER_CLOSE_OFFSET))(nullptr);
		}

	};
}

