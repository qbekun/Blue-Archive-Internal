#pragma once
#include "../../../unitysdk.h"

namespace Mono::Math::Prime { class ConfidenceFactor; }

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int ConfidenceFactor_TypeDefinitionIndex = 35821;

	class ConfidenceFactor : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Math::Prime::ConfidenceFactor* ExtraLow; // 0x0
		::Mono::Math::Prime::ConfidenceFactor* Low; // 0x0
		::Mono::Math::Prime::ConfidenceFactor* Medium; // 0x0
		::Mono::Math::Prime::ConfidenceFactor* High; // 0x0
		::Mono::Math::Prime::ConfidenceFactor* ExtraHigh; // 0x0
		::Mono::Math::Prime::ConfidenceFactor* Provable; // 0x0

	};
}

