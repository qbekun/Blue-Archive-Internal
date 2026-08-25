#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class DeflateFlavor; }

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int DeflateFlavor_TypeDefinitionIndex = 23363;

	class DeflateFlavor : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Decompression::Zlib::DeflateFlavor* Store; // 0x0
		::BestHTTP::Decompression::Zlib::DeflateFlavor* Fast; // 0x0
		::BestHTTP::Decompression::Zlib::DeflateFlavor* Slow; // 0x0

	};
}

