#pragma once
#include "../unitysdk.h"

namespace Animancer { class FadeMode; }

namespace Animancer
{
	inline static constexpr unsigned int FadeMode_TypeDefinitionIndex = 35124;

	class FadeMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Animancer::FadeMode* FixedSpeed; // 0x0
		::Animancer::FadeMode* FixedDuration; // 0x0
		::Animancer::FadeMode* FromStart; // 0x0
		::Animancer::FadeMode* NormalizedSpeed; // 0x0
		::Animancer::FadeMode* NormalizedDuration; // 0x0
		::Animancer::FadeMode* NormalizedFromStart; // 0x0

	};
}

