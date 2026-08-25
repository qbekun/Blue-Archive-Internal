#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class ClearCondition; }

namespace MX::Campaign
{
	inline static constexpr unsigned int ClearCondition_TypeDefinitionIndex = 14886;

	class ClearCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Campaign::ClearCondition* EnemyAllDead; // 0x0
		::MX::Campaign::ClearCondition* BossKill; // 0x0

	};
}

