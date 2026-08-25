#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E69C0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E6A10)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int ZlibException_TypeDefinitionIndex = 23380;

	class ZlibException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

