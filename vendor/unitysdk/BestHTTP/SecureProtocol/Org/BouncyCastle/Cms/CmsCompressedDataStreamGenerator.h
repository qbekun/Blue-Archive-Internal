#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7905B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_SETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x7905C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x7905D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_OPEN_OFFSET UNITYSDK_OFFSET(0x790660)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsCompressedDataStreamGenerator_TypeDefinitionIndex = 22678;

	class CmsCompressedDataStreamGenerator : public Il2CppObject
	{
	public:
		::System::String* ZLib; // 0x0
		::System::Int32 _bufferSize; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBufferSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_SETBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, nullptr);
		}

		::System::IO::Stream* Open(::System::IO::Stream* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSCOMPRESSEDDATASTREAMGENERATOR_OPEN_OFFSET))(arg, str, str, nullptr);
		}

	};
}

