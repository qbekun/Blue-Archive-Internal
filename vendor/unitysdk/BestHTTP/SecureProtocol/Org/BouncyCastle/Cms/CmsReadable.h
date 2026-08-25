#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSREADABLE_GETINPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsReadable_TypeDefinitionIndex = 22695;

	class CmsReadable : public Il2CppObject
	{
	public:
		::System::IO::Stream* GetInputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSREADABLE_GETINPUTSTREAM_OFFSET))(nullptr);
		}

	};
}

