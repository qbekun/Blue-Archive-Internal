#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int SelectionState_TypeDefinitionIndex = 34843;

	class SelectionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		SelectionState* Normal; // 0x0
		SelectionState* Highlighted; // 0x0
		SelectionState* Pressed; // 0x0
		SelectionState* Selected; // 0x0
		SelectionState* Disabled; // 0x0

	};

