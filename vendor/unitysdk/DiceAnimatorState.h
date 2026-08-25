#pragma once
#include "unitysdk.h"

class DiceAnimatorState;

	inline static constexpr unsigned int DiceAnimatorState_TypeDefinitionIndex = 5327;

	class DiceAnimatorState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		DiceAnimatorState* DiceRace_Idle; // 0x0
		DiceAnimatorState* DiceRace_Run; // 0x0
		DiceAnimatorState* DiceRace_Run_End; // 0x0
		DiceAnimatorState* DiceRace_Finish; // 0x0
		DiceAnimatorState* DiceRace_Reward; // 0x0
		DiceAnimatorState* None; // 0x0

	};

