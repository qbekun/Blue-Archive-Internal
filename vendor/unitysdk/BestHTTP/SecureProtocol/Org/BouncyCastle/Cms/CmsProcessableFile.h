#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x797210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x797250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_GETINPUTSTREAM_OFFSET UNITYSDK_OFFSET(0x797290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_WRITE_OFFSET UNITYSDK_OFFSET(0x797330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x7973B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsProcessableFile_TypeDefinitionIndex = 22693;

	class CmsProcessableFile : public Il2CppObject
	{
	public:
		::System::Int32 DefaultBufSize; // 0x0
		::System::IO::FileInfo* _file; // 0x10
		::System::Int32 _bufSize; // 0x18

		::System::Void .ctor(::System::IO::FileInfo* arg)
		{
			((::System::Void(*)(::System::IO::FileInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::FileInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::FileInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* GetInputStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_GETINPUTSTREAM_OFFSET))(nullptr);
		}

		::System::Void Write(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetContent()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSPROCESSABLEFILE_GETCONTENT_OFFSET))(nullptr);
		}

	};
}

