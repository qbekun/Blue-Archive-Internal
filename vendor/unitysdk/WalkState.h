#pragma once
#include "unitysdk.h"

class WalkState;

	inline static constexpr unsigned int WalkState_TypeDefinitionIndex = 324;

	class WalkState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		WalkState* VertexEnter; // 0x0
		WalkState* VertexStay; // 0x0
		WalkState* EdgeEnter; // 0x0
		WalkState* EdgeWalk; // 0x0

	};

