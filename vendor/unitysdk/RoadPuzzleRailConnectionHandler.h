#pragma once
#include "unitysdk.h"

class RoadPuzzleTileMap;
class RailConnection;
class RailConnectionType;
class RoadPuzzleRailTileData;

#define ROADPUZZLERAILCONNECTIONHANDLER_GETNEXTCONNECTION_OFFSET UNITYSDK_OFFSET(0x27B9920)
#define ROADPUZZLERAILCONNECTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B9F40)
#define ROADPUZZLERAILCONNECTIONHANDLER_GETCONNECTEDSPLINEPATH_OFFSET UNITYSDK_OFFSET(0x27B9F70)
#define ROADPUZZLERAILCONNECTIONHANDLER_GETCONNECTEDRAILS_OFFSET UNITYSDK_OFFSET(0x27BA1A0)
#define ROADPUZZLERAILCONNECTIONHANDLER_ISEXITCONNECTED_OFFSET UNITYSDK_OFFSET(0x27B9E80)
#define ROADPUZZLERAILCONNECTIONHANDLER_ISENTRANCECONNECTED_OFFSET UNITYSDK_OFFSET(0x27B9DC0)
#define ROADPUZZLERAILCONNECTIONHANDLER__GETCONNECTEDSPLINEPATH_G__FIXSTARTENDTILECONNECTIONS|2_0_OFFSET UNITYSDK_OFFSET(0x27BA3F0)

	inline static constexpr unsigned int RoadPuzzleRailConnectionHandler_TypeDefinitionIndex = 7543;

	class RoadPuzzleRailConnectionHandler : public Il2CppObject
	{
	public:
		RoadPuzzleTileMap* tileMap; // 0x10

		RailConnection* GetNextConnection(RailConnection* arg, RailConnection* arg2)
		{
			return ((RailConnection*(*)(RailConnection*, RailConnection*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER_GETNEXTCONNECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(RoadPuzzleTileMap* arg)
		{
			((::System::Void(*)(RoadPuzzleTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConnectedSplinePath()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER_GETCONNECTEDSPLINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConnectedRails()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER_GETCONNECTEDRAILS_OFFSET))(nullptr);
		}

		RailConnectionType* IsExitConnected(RoadPuzzleRailTileData* arg, RoadPuzzleRailTileData* arg2)
		{
			return ((RailConnectionType*(*)(RoadPuzzleRailTileData*, RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER_ISEXITCONNECTED_OFFSET))(arg, arg2, nullptr);
		}

		RailConnectionType* IsEntranceConnected(RoadPuzzleRailTileData* arg, RoadPuzzleRailTileData* arg2)
		{
			return ((RailConnectionType*(*)(RoadPuzzleRailTileData*, RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER_ISENTRANCECONNECTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _GetConnectedSplinePath_g__FixStartEndTileConnections|2_0(RailConnection* arg)
		{
			((::System::Void(*)(RailConnection*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILCONNECTIONHANDLER__GETCONNECTEDSPLINEPATH_G__FIXSTARTENDTILECONNECTIONS|2_0_OFFSET))(arg, nullptr);
		}

	};

