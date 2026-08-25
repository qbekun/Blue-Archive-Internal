#pragma once
#include "unitysdk.h"

class TimeState;

	inline static constexpr unsigned int TimeState_TypeDefinitionIndex = 10004;

	class TimeState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TimeState* Normal; // 0x0
		TimeState* Pause; // 0x0
		TimeState* BulletTime; // 0x0

	};

