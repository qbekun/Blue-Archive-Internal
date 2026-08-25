#pragma once
#include "../../unitysdk.h"

namespace Unity::Burst { class FloatPrecision; }

namespace Unity::Burst
{
	inline static constexpr unsigned int FloatPrecision_TypeDefinitionIndex = 37229;

	class FloatPrecision : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::Burst::FloatPrecision* Standard; // 0x0
		::Unity::Burst::FloatPrecision* High; // 0x0
		::Unity::Burst::FloatPrecision* Medium; // 0x0
		::Unity::Burst::FloatPrecision* Low; // 0x0

	};
}

