#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int TimerState_TypeDefinitionIndex = 29722;

	class TimerState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TimerState* Ready; // 0x0
		TimerState* Fired; // 0x0
		TimerState* Cancelled; // 0x0
		TimerState* Sentinel; // 0x0

	};

