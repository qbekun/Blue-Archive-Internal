#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGHitActiveTiming; }

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int CCGHitActiveTiming_TypeDefinitionIndex = 20953;

	class CCGHitActiveTiming : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::Procedures::CCGHitActiveTiming* OnEveryHit; // 0x0
		::MX::MinigameCCG::Procedures::CCGHitActiveTiming* OnFirstHitOnly; // 0x0
		::MX::MinigameCCG::Procedures::CCGHitActiveTiming* OnLastHitOnly; // 0x0

	};
}

