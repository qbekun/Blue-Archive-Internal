#pragma once
#include "unitysdk.h"

class WaitPlan;

	inline static constexpr unsigned int WaitPlan_TypeDefinitionIndex = 3321;

	class WaitPlan : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		WaitPlan* WaitByStop; // 0x0
		WaitPlan* WaitByLoop; // 0x0
		WaitPlan* TimeoutFail; // 0x0

	};

