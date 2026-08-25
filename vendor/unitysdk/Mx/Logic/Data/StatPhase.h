#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class StatPhase; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatPhase_TypeDefinitionIndex = 13537;

	class StatPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::StatPhase* Invalid; // 0x0
		::MX::Logic::Data::StatPhase* DefaultStat; // 0x0
		::MX::Logic::Data::StatPhase* InitialStat; // 0x0
		::MX::Logic::Data::StatPhase* CurrentStat; // 0x0
		::MX::Logic::Data::StatPhase* ArenaResultStat; // 0x0

	};
}

