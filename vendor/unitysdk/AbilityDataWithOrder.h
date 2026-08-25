#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class LevelSkillAbilityData; }

	inline static constexpr unsigned int AbilityDataWithOrder_TypeDefinitionIndex = 13679;

	class AbilityDataWithOrder : public Il2CppObject
	{
	public:
		::System::Int32 OrderNumber; // 0x10
		::MX::Logic::Data::LevelSkillAbilityData* Ability; // 0x18

	};

