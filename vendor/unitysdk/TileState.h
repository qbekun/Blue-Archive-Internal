#pragma once
#include "unitysdk.h"

class TileState;

	inline static constexpr unsigned int TileState_TypeDefinitionIndex = 5016;

	class TileState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		TileState* Conquested; // 0x0
		TileState* Conquestable; // 0x0
		TileState* Enemy; // 0x0
		TileState* TreasureBox; // 0x0
		TileState* Operating; // 0x0

	};

