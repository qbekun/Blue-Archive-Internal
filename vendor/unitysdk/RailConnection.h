#pragma once
#include "unitysdk.h"

class RoadPuzzleRailTileVisual;
class RailConnectionType;

#define RAILCONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B98E0)

	inline static constexpr unsigned int RailConnection_TypeDefinitionIndex = 7542;

	class RailConnection : public Il2CppObject
	{
	public:
		RoadPuzzleRailTileVisual* Tile; // 0x10
		RailConnectionType* FromConnectionType; // 0x18
		RailConnectionType* ToConnectionType; // 0x1C

		::System::Void .ctor(RoadPuzzleRailTileVisual* arg, RailConnectionType* arg2, RailConnectionType* arg3)
		{
			((::System::Void(*)(RoadPuzzleRailTileVisual*, RailConnectionType*, RailConnectionType*, ::PVOID))((::PBYTE)hIl2Cpp + RAILCONNECTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

