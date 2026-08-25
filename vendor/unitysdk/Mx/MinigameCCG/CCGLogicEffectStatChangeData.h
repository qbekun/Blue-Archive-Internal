#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntityStatType; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogicEffectStatChangeData_TypeDefinitionIndex = 20473;

	class CCGLogicEffectStatChangeData : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEntityStatType* statType; // 0x10
		::System::Int32 value; // 0x14

	};
}

