#pragma once
#include "unitysdk.h"

class Movement;

	inline static constexpr unsigned int Movement_TypeDefinitionIndex = 68;

	class Movement : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		Movement* Horizontal; // 0x0
		Movement* Vertical; // 0x0
		Movement* Unrestricted; // 0x0
		Movement* Custom; // 0x0

	};

