#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class SkillAbilityValue; }

	inline static constexpr unsigned int AbilityWithOrder_TypeDefinitionIndex = 13945;

	class AbilityWithOrder : public Il2CppObject
	{
	public:
		::System::Int32 OrderNumber; // 0x10
		::MX::Logic::Data::SkillAbilityValue* Ability; // 0x18

	};

