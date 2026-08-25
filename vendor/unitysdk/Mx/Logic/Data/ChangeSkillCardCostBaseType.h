#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeSkillCardCostBaseType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeSkillCardCostBaseType_TypeDefinitionIndex = 13512;

	class ChangeSkillCardCostBaseType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::ChangeSkillCardCostBaseType* Target; // 0x0
		::MX::Logic::Data::ChangeSkillCardCostBaseType* Caster; // 0x0
		::MX::Logic::Data::ChangeSkillCardCostBaseType* None; // 0x0

	};
}

