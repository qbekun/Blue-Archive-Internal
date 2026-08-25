#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AllClearCondition; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AllClearCondition_TypeDefinitionIndex = 14270;

	class AllClearCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::AllClearCondition* LastWaveClear; // 0x0
		::MX::Logic::Battles::AllClearCondition* AllSpawnedEnemyDied; // 0x0

	};
}

