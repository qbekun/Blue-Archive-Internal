#pragma once
#include "../../unitysdk.h"

namespace Unity::Burst { class FloatMode; }

namespace Unity::Burst
{
	inline static constexpr unsigned int FloatMode_TypeDefinitionIndex = 37228;

	class FloatMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::Burst::FloatMode* Default; // 0x0
		::Unity::Burst::FloatMode* Strict; // 0x0
		::Unity::Burst::FloatMode* Deterministic; // 0x0
		::Unity::Burst::FloatMode* Fast; // 0x0

	};
}

