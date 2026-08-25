#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureCommandType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AuraProcedureCommandType_TypeDefinitionIndex = 14531;

	class AuraProcedureCommandType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::AuraProcedureCommandType* None; // 0x0
		::MX::Logic::Skills::AuraProcedureCommandType* AuraCancel; // 0x0
		::MX::Logic::Skills::AuraProcedureCommandType* SpawnSkillEntity; // 0x0

	};
}

