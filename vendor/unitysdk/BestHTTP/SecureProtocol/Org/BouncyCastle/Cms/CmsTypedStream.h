#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x79D560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B62C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x7B6390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_GET_CONTENTSTREAM_OFFSET UNITYSDK_OFFSET(0x7B63A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_DRAIN_OFFSET UNITYSDK_OFFSET(0x79D580)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CmsTypedStream_TypeDefinitionIndex = 22711;

	class CmsTypedStream : public Il2CppObject
	{
	public:
		::System::Int32 BufferSize; // 0x0
		::System::String* _oid; // 0x10
		::System::IO::Stream* _in; // 0x18

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* get_ContentType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::IO::Stream* get_ContentStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_GET_CONTENTSTREAM_OFFSET))(nullptr);
		}

		::System::Void Drain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_CMSTYPEDSTREAM_DRAIN_OFFSET))(nullptr);
		}

	};
}

