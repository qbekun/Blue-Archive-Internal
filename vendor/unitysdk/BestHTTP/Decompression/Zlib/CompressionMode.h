#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class CompressionMode; }

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int CompressionMode_TypeDefinitionIndex = 23379;

	class CompressionMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Decompression::Zlib::CompressionMode* Compress; // 0x0
		::BestHTTP::Decompression::Zlib::CompressionMode* Decompress; // 0x0

	};
}

