#pragma once
#include "../../../unitysdk.h"

namespace System::IO::Compression
{
	inline static constexpr unsigned int BrotliEncoderParameter_TypeDefinitionIndex = 38054;

	class BrotliEncoderParameter : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::Compression::BrotliEncoderParameter* Mode; // 0x0
		::System::IO::Compression::BrotliEncoderParameter* Quality; // 0x0
		::System::IO::Compression::BrotliEncoderParameter* LGWin; // 0x0
		::System::IO::Compression::BrotliEncoderParameter* LGBlock; // 0x0
		::System::IO::Compression::BrotliEncoderParameter* LCModeling; // 0x0
		::System::IO::Compression::BrotliEncoderParameter* SizeHint; // 0x0

	};
}

