#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffectDecayFlag; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogicEffectDecayFlag_TypeDefinitionIndex = 20474;

	class CCGLogicEffectDecayFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGLogicEffectDecayFlag* None; // 0x0
		::MX::MinigameCCG::CCGLogicEffectDecayFlag* DecayByTurn; // 0x0
		::MX::MinigameCCG::CCGLogicEffectDecayFlag* DecayByPassiveSkillTriggered; // 0x0

	};
}

