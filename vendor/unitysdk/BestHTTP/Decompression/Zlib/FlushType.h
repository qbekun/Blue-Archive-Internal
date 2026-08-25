#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class FlushType; }

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int FlushType_TypeDefinitionIndex = 23376;

	class FlushType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Decompression::Zlib::FlushType* None; // 0x0
		::BestHTTP::Decompression::Zlib::FlushType* Partial; // 0x0
		::BestHTTP::Decompression::Zlib::FlushType* Sync; // 0x0
		::BestHTTP::Decompression::Zlib::FlushType* Full; // 0x0
		::BestHTTP::Decompression::Zlib::FlushType* Finish; // 0x0

	};
}

