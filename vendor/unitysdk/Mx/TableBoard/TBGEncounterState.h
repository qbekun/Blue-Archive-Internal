#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGEncounterState; }

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGEncounterState_TypeDefinitionIndex = 11182;

	class TBGEncounterState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::TableBoard::TBGEncounterState* None; // 0x0
		::MX::TableBoard::TBGEncounterState* Active; // 0x0
		::MX::TableBoard::TBGEncounterState* Disposing; // 0x0

	};
}

