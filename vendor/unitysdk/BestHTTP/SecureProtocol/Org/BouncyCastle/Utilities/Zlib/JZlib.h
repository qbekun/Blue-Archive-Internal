#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_JZLIB_VERSION_OFFSET UNITYSDK_OFFSET(0x92CFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_JZLIB_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CFD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int JZlib_TypeDefinitionIndex = 21583;

	class JZlib : public Il2CppObject
	{
	public:
		::System::String* _version; // 0x0
		::System::Int32 Z_NO_COMPRESSION; // 0x0
		::System::Int32 Z_BEST_SPEED; // 0x0
		::System::Int32 Z_BEST_COMPRESSION; // 0x0
		::System::Int32 Z_DEFAULT_COMPRESSION; // 0x0
		::System::Int32 Z_FILTERED; // 0x0
		::System::Int32 Z_HUFFMAN_ONLY; // 0x0
		::System::Int32 Z_DEFAULT_STRATEGY; // 0x0
		::System::Int32 Z_NO_FLUSH; // 0x0
		::System::Int32 Z_PARTIAL_FLUSH; // 0x0
		::System::Int32 Z_SYNC_FLUSH; // 0x0
		::System::Int32 Z_FULL_FLUSH; // 0x0
		::System::Int32 Z_FINISH; // 0x0
		::System::Int32 Z_OK; // 0x0
		::System::Int32 Z_STREAM_END; // 0x0
		::System::Int32 Z_NEED_DICT; // 0x0
		::System::Int32 Z_ERRNO; // 0x0
		::System::Int32 Z_STREAM_ERROR; // 0x0
		::System::Int32 Z_DATA_ERROR; // 0x0
		::System::Int32 Z_MEM_ERROR; // 0x0
		::System::Int32 Z_BUF_ERROR; // 0x0
		::System::Int32 Z_VERSION_ERROR; // 0x0

		::System::String* version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_JZLIB_VERSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_JZLIB_.CTOR_OFFSET))(nullptr);
		}

	};
}

