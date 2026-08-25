#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int BloomPass_TypeDefinitionIndex = 32661;

	class BloomPass : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		BloomPass* Copy; // 0x0
		BloomPass* Prefilter; // 0x0
		BloomPass* Downsample; // 0x0
		BloomPass* Upsample; // 0x0
		BloomPass* Final; // 0x0

	};

