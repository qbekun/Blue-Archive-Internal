#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENVELOPEDGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x78F620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENVELOPEDGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x78F630)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsAuthEnvelopedGenerator_TypeDefinitionIndex = 22673;

	class CmsAuthEnvelopedGenerator : public Il2CppObject
	{
	public:
		::System::String* Aes128Ccm; // 0x0
		::System::String* Aes192Ccm; // 0x8
		::System::String* Aes256Ccm; // 0x10
		::System::String* Aes128Gcm; // 0x18
		::System::String* Aes192Gcm; // 0x20
		::System::String* Aes256Gcm; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENVELOPEDGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSAUTHENVELOPEDGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

