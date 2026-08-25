#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BeamPhase; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BeamPhase_TypeDefinitionIndex = 13509;

	class BeamPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::BeamPhase* Expansion; // 0x0
		::MX::Logic::Data::BeamPhase* Keeping; // 0x0
		::MX::Logic::Data::BeamPhase* Extinction; // 0x0

	};
}

