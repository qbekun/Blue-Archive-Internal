#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class CompressionStrategy; }

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int CompressionStrategy_TypeDefinitionIndex = 23378;

	class CompressionStrategy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Decompression::Zlib::CompressionStrategy* Default; // 0x0
		::BestHTTP::Decompression::Zlib::CompressionStrategy* Filtered; // 0x0
		::BestHTTP::Decompression::Zlib::CompressionStrategy* HuffmanOnly; // 0x0

	};
}

