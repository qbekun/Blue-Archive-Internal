#pragma once
#include "../unitysdk.h"

namespace FlatData { class TileState; }

namespace FlatData
{
	inline static constexpr unsigned int TileState_TypeDefinitionIndex = 9447;

	class TileState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TileState* None; // 0x0
		::FlatData::TileState* PartiallyConquested; // 0x0
		::FlatData::TileState* FullyConquested; // 0x0

	};
}

