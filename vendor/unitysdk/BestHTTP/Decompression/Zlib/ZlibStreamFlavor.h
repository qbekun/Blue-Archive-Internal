#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibStreamFlavor; }

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int ZlibStreamFlavor_TypeDefinitionIndex = 23385;

	class ZlibStreamFlavor : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Decompression::Zlib::ZlibStreamFlavor* ZLIB; // 0x0
		::BestHTTP::Decompression::Zlib::ZlibStreamFlavor* DEFLATE; // 0x0
		::BestHTTP::Decompression::Zlib::ZlibStreamFlavor* GZIP; // 0x0

	};
}

