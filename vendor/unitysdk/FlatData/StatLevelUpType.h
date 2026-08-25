#pragma once
#include "../unitysdk.h"

namespace FlatData { class StatLevelUpType; }

namespace FlatData
{
	inline static constexpr unsigned int StatLevelUpType_TypeDefinitionIndex = 9426;

	class StatLevelUpType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StatLevelUpType* Standard; // 0x0
		::FlatData::StatLevelUpType* Premature; // 0x0
		::FlatData::StatLevelUpType* LateBloom; // 0x0
		::FlatData::StatLevelUpType* Obstacle; // 0x0
		::FlatData::StatLevelUpType* TimeAttack; // 0x0

	};
}

