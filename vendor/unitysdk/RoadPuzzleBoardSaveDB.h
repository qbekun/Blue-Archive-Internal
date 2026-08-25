#pragma once
#include "unitysdk.h"

class RoadPuzzleRailTileData;

#define ROADPUZZLEBOARDSAVEDB_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x2185E50)
#define ROADPUZZLEBOARDSAVEDB_SET_REMAININGTILES_OFFSET UNITYSDK_OFFSET(0x2185E60)
#define ROADPUZZLEBOARDSAVEDB_GET_ISTRAINREADYTODEPART_OFFSET UNITYSDK_OFFSET(0x2185E70)
#define ROADPUZZLEBOARDSAVEDB_GET_REMAININGTILES_OFFSET UNITYSDK_OFFSET(0x2185E80)
#define ROADPUZZLEBOARDSAVEDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x2185E90)
#define ROADPUZZLEBOARDSAVEDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x2185EA0)
#define ROADPUZZLEBOARDSAVEDB_GET_REWARDTILES_OFFSET UNITYSDK_OFFSET(0x2185EB0)
#define ROADPUZZLEBOARDSAVEDB_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x2185EC0)
#define ROADPUZZLEBOARDSAVEDB_SET_RECENTRANDOMRAILTILE_OFFSET UNITYSDK_OFFSET(0x2185ED0)
#define ROADPUZZLEBOARDSAVEDB_SET_REWARDTILES_OFFSET UNITYSDK_OFFSET(0x2185EE0)
#define ROADPUZZLEBOARDSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x2185EF0)
#define ROADPUZZLEBOARDSAVEDB_SET_ISTRAINREADYTODEPART_OFFSET UNITYSDK_OFFSET(0x2185F00)
#define ROADPUZZLEBOARDSAVEDB_GET_PLACEDRAILTILES_OFFSET UNITYSDK_OFFSET(0x2185F10)
#define ROADPUZZLEBOARDSAVEDB_SET_PLACEDRAILTILES_OFFSET UNITYSDK_OFFSET(0x2185F20)
#define ROADPUZZLEBOARDSAVEDB_GET_RECENTRANDOMRAILTILE_OFFSET UNITYSDK_OFFSET(0x2185F30)

	inline static constexpr unsigned int RoadPuzzleBoardSaveDB_TypeDefinitionIndex = 4061;

	class RoadPuzzleBoardSaveDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x18
		RoadPuzzleRailTileData* _recentRandomRailTile_k__BackingField; // 0x20
		Il2CppObject* _remainingTiles_k__BackingField; // 0x28
		Il2CppObject* _placedRailTiles_k__BackingField; // 0x30
		Il2CppObject* _rewardTiles_k__BackingField; // 0x38
		::System::Boolean _isTrainReadyToDepart_k__BackingField; // 0x40

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void set_remainingTiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_REMAININGTILES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isTrainReadyToDepart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_ISTRAINREADYTODEPART_OFFSET))(nullptr);
		}

		Il2CppObject* get_remainingTiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_REMAININGTILES_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_rewardTiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_REWARDTILES_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_recentRandomRailTile(RoadPuzzleRailTileData* arg)
		{
			((::System::Void(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_RECENTRANDOMRAILTILE_OFFSET))(arg, nullptr);
		}

		::System::Void set_rewardTiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_REWARDTILES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_isTrainReadyToDepart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_ISTRAINREADYTODEPART_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_placedRailTiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_PLACEDRAILTILES_OFFSET))(nullptr);
		}

		::System::Void set_placedRailTiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_SET_PLACEDRAILTILES_OFFSET))(arg, nullptr);
		}

		RoadPuzzleRailTileData* get_recentRandomRailTile()
		{
			return ((RoadPuzzleRailTileData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEBOARDSAVEDB_GET_RECENTRANDOMRAILTILE_OFFSET))(nullptr);
		}

	};

