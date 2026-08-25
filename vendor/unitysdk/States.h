#pragma once
#include "unitysdk.h"

class States;

	inline static constexpr unsigned int States_TypeDefinitionIndex = 9976;

	class States : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		States* Initialize; // 0x0
		States* Playing; // 0x0
		States* Detected; // 0x0
		States* LoadingSavePoint; // 0x0
		States* EnterStageAction; // 0x0
		States* GameOver; // 0x0
		States* ClearStage; // 0x0

	};

