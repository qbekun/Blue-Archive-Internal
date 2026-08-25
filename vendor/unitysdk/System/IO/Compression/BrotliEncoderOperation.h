#pragma once
#include "../../../unitysdk.h"

namespace System::IO::Compression
{
	inline static constexpr unsigned int BrotliEncoderOperation_TypeDefinitionIndex = 38053;

	class BrotliEncoderOperation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::IO::Compression::BrotliEncoderOperation* Process; // 0x0
		::System::IO::Compression::BrotliEncoderOperation* Flush; // 0x0
		::System::IO::Compression::BrotliEncoderOperation* Finish; // 0x0
		::System::IO::Compression::BrotliEncoderOperation* EmitMetadata; // 0x0

	};
}

