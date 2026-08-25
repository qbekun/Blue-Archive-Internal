#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillLogicType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillLogicType_TypeDefinitionIndex = 13536;

	class SkillLogicType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::SkillLogicType* None; // 0x0
		::MX::Logic::Data::SkillLogicType* Active; // 0x0
		::MX::Logic::Data::SkillLogicType* Passive; // 0x0
		::MX::Logic::Data::SkillLogicType* Manual; // 0x0

	};
}

