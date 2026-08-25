#pragma once
#include "../unitysdk.h"

namespace FlatData { class RoadPuzzleRailTileType; }

namespace FlatData
{
	inline static constexpr unsigned int RoadPuzzleRailTileType_TypeDefinitionIndex = 9561;

	class RoadPuzzleRailTileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RoadPuzzleRailTileType* None; // 0x0
		::FlatData::RoadPuzzleRailTileType* Straight; // 0x0
		::FlatData::RoadPuzzleRailTileType* CurveBig; // 0x0
		::FlatData::RoadPuzzleRailTileType* CurveSmall; // 0x0

	};
}

