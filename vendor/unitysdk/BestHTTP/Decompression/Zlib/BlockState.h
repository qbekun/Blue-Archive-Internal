#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class BlockState; }

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int BlockState_TypeDefinitionIndex = 23362;

	class BlockState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Decompression::Zlib::BlockState* NeedMore; // 0x0
		::BestHTTP::Decompression::Zlib::BlockState* BlockDone; // 0x0
		::BestHTTP::Decompression::Zlib::BlockState* FinishStarted; // 0x0
		::BestHTTP::Decompression::Zlib::BlockState* FinishDone; // 0x0

	};
}

