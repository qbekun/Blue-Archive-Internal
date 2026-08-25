#pragma once
#include "../../../unitysdk.h"

namespace System::IO::Compression
{
	inline static constexpr unsigned int CompressionLevel_TypeDefinitionIndex = 29625;

	class CompressionLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::Compression::CompressionLevel* Optimal; // 0x0
		::System::IO::Compression::CompressionLevel* Fastest; // 0x0
		::System::IO::Compression::CompressionLevel* NoCompression; // 0x0

	};
}

