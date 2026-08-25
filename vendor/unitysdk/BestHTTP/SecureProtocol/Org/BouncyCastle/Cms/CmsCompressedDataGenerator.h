#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsCompressedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x78FE00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATAGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x790210)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsCompressedDataGenerator_TypeDefinitionIndex = 22675;

	class CmsCompressedDataGenerator : public Il2CppObject
	{
	public:
		::System::String* ZLib; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsCompressedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATAGENERATOR_GENERATE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATAGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

