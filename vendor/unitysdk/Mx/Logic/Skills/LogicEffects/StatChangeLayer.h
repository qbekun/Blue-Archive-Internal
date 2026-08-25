#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StatChangeLayer; }

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StatChangeLayer_TypeDefinitionIndex = 14807;

	class StatChangeLayer : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::LogicEffects::StatChangeLayer* Normal; // 0x0
		::MX::Logic::Skills::LogicEffects::StatChangeLayer* ForceApplied; // 0x0

	};
}

