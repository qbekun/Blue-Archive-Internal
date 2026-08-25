#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleResultSkipType; }

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int BattleResultSkipType_TypeDefinitionIndex = 20302;

	class BattleResultSkipType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Battles::BattleResultSkipType* None; // 0x0
		::MX::Visual::Battles::BattleResultSkipType* SkipPopup; // 0x0
		::MX::Visual::Battles::BattleResultSkipType* SkipTimeline; // 0x0

	};
}

