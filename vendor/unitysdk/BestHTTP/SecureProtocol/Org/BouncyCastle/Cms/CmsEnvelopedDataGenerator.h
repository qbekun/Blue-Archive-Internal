#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsProcessable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class CipherKeyGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherBuilderWithKey; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x78C6E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x790D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x790DF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x791A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x78B580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x791C60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsEnvelopedDataGenerator_TypeDefinitionIndex = 22681;

	class CmsEnvelopedDataGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET))(arg, str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSENVELOPEDDATAGENERATOR_GENERATE_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

