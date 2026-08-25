#pragma once
#include "../unitysdk.h"

namespace FlatData { class RoadPuzzleMapTileType; }

namespace FlatData
{
	inline static constexpr unsigned int RoadPuzzleMapTileType_TypeDefinitionIndex = 9560;

	class RoadPuzzleMapTileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RoadPuzzleMapTileType* None; // 0x0
		::FlatData::RoadPuzzleMapTileType* Start; // 0x0
		::FlatData::RoadPuzzleMapTileType* End; // 0x0
		::FlatData::RoadPuzzleMapTileType* Transit; // 0x0
		::FlatData::RoadPuzzleMapTileType* Obstacle; // 0x0
		::FlatData::RoadPuzzleMapTileType* Empty; // 0x0

	};
}

