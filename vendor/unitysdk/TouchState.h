#pragma once
#include "unitysdk.h"

class TouchState;

	inline static constexpr unsigned int TouchState_TypeDefinitionIndex = 6082;

	class TouchState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TouchState* None; // 0x0
		TouchState* Down; // 0x0
		TouchState* Press; // 0x0
		TouchState* Drag; // 0x0
		TouchState* Up; // 0x0

	};

