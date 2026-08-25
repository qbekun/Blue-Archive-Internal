#pragma once
#include "../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTileMapCommonEventContainer; }
namespace MX::Conquest { class ConquestTileMap; }
namespace MX::Conquest { class ConquestTile; }
namespace MX::Campaign { class HexLocation; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::GameLogic::DBModel { class ConquestErosionDB; }

#define MX_CONQUEST_CONQUESTTILEMAP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1426940)
#define MX_CONQUEST_CONQUESTTILEMAP_GET_TILEMAPHASH_OFFSET UNITYSDK_OFFSET(0x1426950)
#define MX_CONQUEST_CONQUESTTILEMAP_SET_TILEMAPHASH_OFFSET UNITYSDK_OFFSET(0x1426960)
#define MX_CONQUEST_CONQUESTTILEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1426970)
#define MX_CONQUEST_CONQUESTTILEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1426E40)
#define MX_CONQUEST_CONQUESTTILEMAP_CREATENEXTENTITYID_OFFSET UNITYSDK_OFFSET(0x1428590)
#define MX_CONQUEST_CONQUESTTILEMAP_CREATENEXTTILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x14285A0)
#define MX_CONQUEST_CONQUESTTILEMAP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1427BC0)
#define MX_CONQUEST_CONQUESTTILEMAP_GETALLNEIGHBORTILE_OFFSET UNITYSDK_OFFSET(0x14285D0)
#define MX_CONQUEST_CONQUESTTILEMAP_GETNEIGHBORTILE_OFFSET UNITYSDK_OFFSET(0x1428A10)
#define MX_CONQUEST_CONQUESTTILEMAP_ISREACHABLE_OFFSET UNITYSDK_OFFSET(0x1428B70)
#define MX_CONQUEST_CONQUESTTILEMAP_DELETETILE_OFFSET UNITYSDK_OFFSET(0x1428D20)
#define MX_CONQUEST_CONQUESTTILEMAP_ADDTILE_OFFSET UNITYSDK_OFFSET(0x1428F60)
#define MX_CONQUEST_CONQUESTTILEMAP_SYNCTILE_OFFSET UNITYSDK_OFFSET(0x1429310)
#define MX_CONQUEST_CONQUESTTILEMAP_SYNCTILE_OFFSET UNITYSDK_OFFSET(0x14295E0)
#define MX_CONQUEST_CONQUESTTILEMAP_SYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1429690)
#define MX_CONQUEST_CONQUESTTILEMAP_SYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x142A3F0)
#define MX_CONQUEST_CONQUESTTILEMAP_ADDUNEXPECTEDENEMY_OFFSET UNITYSDK_OFFSET(0x142A960)
#define MX_CONQUEST_CONQUESTTILEMAP_ADDEROSIONENEMY_OFFSET UNITYSDK_OFFSET(0x142AB30)
#define MX_CONQUEST_CONQUESTTILEMAP_LOADMAPDATA_OFFSET UNITYSDK_OFFSET(0x142AE80)
#define MX_CONQUEST_CONQUESTTILEMAP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x142B160)

namespace MX::Conquest
{
	inline static constexpr unsigned int ConquestTileMap_TypeDefinitionIndex = 14835;

	class ConquestTileMap : public Il2CppObject
	{
	public:
		::System::Single XOffset; // 0x0
		::System::Single YOffset; // 0x4
		::System::Single EmptyOffset; // 0x8
		::System::Single Up; // 0xC
		::System::Int64 LastEntityId; // 0x10
		::System::Int32 LastTileUniqueId; // 0x18
		Il2CppObject* events; // 0x20
		::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventContainer* CommonEventContainer; // 0x28
		Il2CppObject* conquestTileList; // 0x30
		Il2CppObject* conquestUnitList; // 0x38
		Il2CppObject* conquestObjectList; // 0x40
		Il2CppObject* TileLocationMap; // 0x48
		Il2CppObject* TileUniqueIdMap; // 0x50
		::System::UInt64 _TileMapHash_k__BackingField; // 0x58

		Il2CppObject* get_Events()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::UInt64 get_TileMapHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_GET_TILEMAPHASH_OFFSET))(nullptr);
		}

		::System::Void set_TileMapHash(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_SET_TILEMAPHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Conquest::ConquestTileMap* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 CreateNextEntityID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_CREATENEXTENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 CreateNextTileUniqueId(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Int64(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_CREATENEXTTILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_INITIALIZE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAllNeighborTile(::MX::Conquest::ConquestTile* arg)
		{
			return ((Il2CppObject*(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_GETALLNEIGHBORTILE_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTile* GetNeighborTile(::MX::Campaign::HexLocation* arg, ::System::Int32 arg2)
		{
			return ((::MX::Conquest::ConquestTile*(*)(::MX::Campaign::HexLocation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_GETNEIGHBORTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsReachable(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_ISREACHABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteTile(::MX::Conquest::ConquestTile* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_DELETETILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddTile(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_ADDTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncTile(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_SYNCTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncTile(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_SYNCTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncObject(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_SYNCOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncObject(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_SYNCOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void AddUnexpectedEnemy(::MX::Conquest::ConquestTile* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_ADDUNEXPECTEDENEMY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddErosionEnemy(::MX::Conquest::ConquestTile* arg, ::MX::GameLogic::DBModel::ConquestErosionDB* arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::MX::GameLogic::DBModel::ConquestErosionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_ADDEROSIONENEMY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Conquest::ConquestTileMap* LoadMapData(::System::String* str, ::System::String* str2)
		{
			return ((::MX::Conquest::ConquestTileMap*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_LOADMAPDATA_OFFSET))(str, str2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

