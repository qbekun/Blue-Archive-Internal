#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::Campaign { class HexaTile; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexaTileUnitMovementOrderComparer; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign { class HexaTileState; }

#define MX_CAMPAIGN_HEXATILEMAP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x14325B0)
#define MX_CAMPAIGN_HEXATILEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x14325C0)
#define MX_CAMPAIGN_HEXATILEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1432780)
#define MX_CAMPAIGN_HEXATILEMAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1433460)
#define MX_CAMPAIGN_HEXATILEMAP_CREATENEXTENTITYID_OFFSET UNITYSDK_OFFSET(0x14334C0)
#define MX_CAMPAIGN_HEXATILEMAP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14334D0)
#define MX_CAMPAIGN_HEXATILEMAP_GETALLNEIGHBORTILE_OFFSET UNITYSDK_OFFSET(0x1433710)
#define MX_CAMPAIGN_HEXATILEMAP_GETTILEINRADIUS_OFFSET UNITYSDK_OFFSET(0x14339B0)
#define MX_CAMPAIGN_HEXATILEMAP_GETNEIGHBORTILE_OFFSET UNITYSDK_OFFSET(0x1433840)
#define MX_CAMPAIGN_HEXATILEMAP_BUILDMOVEMENTMAP_OFFSET UNITYSDK_OFFSET(0x1433E30)
#define MX_CAMPAIGN_HEXATILEMAP_INITIALIZEMOVABLETILESANDMOVEMENTMAPFROMORIGIN_OFFSET UNITYSDK_OFFSET(0x1434210)
#define MX_CAMPAIGN_HEXATILEMAP_CANUNITPASSTARGETTILE_OFFSET UNITYSDK_OFFSET(0x1434460)
#define MX_CAMPAIGN_HEXATILEMAP_ISTHEREENEMYUNIT_OFFSET UNITYSDK_OFFSET(0x14346E0)
#define MX_CAMPAIGN_HEXATILEMAP_EXPANDMOVEMENTMAPONNEIGHBORTILES_OFFSET UNITYSDK_OFFSET(0x14344B0)
#define MX_CAMPAIGN_HEXATILEMAP_GETNEARESTENEMYTRACEROUTE_OFFSET UNITYSDK_OFFSET(0x1434720)
#define MX_CAMPAIGN_HEXATILEMAP_GETAIUNITTRACEROUTE_OFFSET UNITYSDK_OFFSET(0x1434F70)
#define MX_CAMPAIGN_HEXATILEMAP_GETNEARLESTTILEBYTRACEROUTESIZE_OFFSET UNITYSDK_OFFSET(0x14357D0)
#define MX_CAMPAIGN_HEXATILEMAP_ISLINKEDTILE_OFFSET UNITYSDK_OFFSET(0x1435C60)
#define MX_CAMPAIGN_HEXATILEMAP_GETPATHFROMMOVEMENTMAP_OFFSET UNITYSDK_OFFSET(0x1434D60)
#define MX_CAMPAIGN_HEXATILEMAP_GETALLENEMYUNIT_OFFSET UNITYSDK_OFFSET(0x1436100)
#define MX_CAMPAIGN_HEXATILEMAP_FINDUNIT_OFFSET UNITYSDK_OFFSET(0x1436440)
#define MX_CAMPAIGN_HEXATILEMAP_FINDTILE_OFFSET UNITYSDK_OFFSET(0x14365E0)
#define MX_CAMPAIGN_HEXATILEMAP_DELETETILE_OFFSET UNITYSDK_OFFSET(0x1436810)
#define MX_CAMPAIGN_HEXATILEMAP_ADDHEXATILE_OFFSET UNITYSDK_OFFSET(0x14368A0)
#define MX_CAMPAIGN_HEXATILEMAP_ISBATTLEREADY_OFFSET UNITYSDK_OFFSET(0x1436A30)
#define MX_CAMPAIGN_HEXATILEMAP_LOADHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0x1436AB0)
#define MX_CAMPAIGN_HEXATILEMAP_APPLYTILESTATES_OFFSET UNITYSDK_OFFSET(0x1436D80)
#define MX_CAMPAIGN_HEXATILEMAP_APPLYTILESTATE_OFFSET UNITYSDK_OFFSET(0x1436FB0)
#define MX_CAMPAIGN_HEXATILEMAP_EXTRACTTILESTATES_OFFSET UNITYSDK_OFFSET(0x1436FF0)
#define MX_CAMPAIGN_HEXATILEMAP_PROCESSVISUALCONDITIONANDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1437150)
#define MX_CAMPAIGN_HEXATILEMAP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14380D0)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileMap_TypeDefinitionIndex = 14891;

	class HexaTileMap : public Il2CppObject
	{
	public:
		::System::Single XOffset; // 0x0
		::System::Single YOffset; // 0x4
		::System::Single EmptyOffset; // 0x8
		::System::Single Up; // 0xC
		::System::Int32 LastEntityId; // 0x10
		::System::Boolean IsBig; // 0x14
		Il2CppObject* events; // 0x18
		Il2CppObject* hexaTileList; // 0x20
		Il2CppObject* hexaUnitList; // 0x28
		Il2CppObject* hexaStrageyList; // 0x30
		Il2CppObject* TileLocationMap; // 0x38

		Il2CppObject* get_Events()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* Clone()
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 CreateNextEntityID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_CREATENEXTENTITYID_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllNeighborTile(::MX::Campaign::HexaTile* arg)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETALLNEIGHBORTILE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTileInRadius(::MX::Campaign::HexLocation* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETTILEINRADIUS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexaTile* GetNeighborTile(::MX::Campaign::HexaTile* arg, ::System::Int32 arg2)
		{
			return ((::MX::Campaign::HexaTile*(*)(::MX::Campaign::HexaTile*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETNEIGHBORTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BuildMovementMap(::MX::Campaign::HexaUnit* arg, ::System::Int32 arg2, Il2CppObject&* arg3, Il2CppObject&* arg4)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::System::Int32, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_BUILDMOVEMENTMAP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitializeMovableTilesAndMovementMapFromOrigin(::MX::Campaign::HexaTile* arg, Il2CppObject&* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTile*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_INITIALIZEMOVABLETILESANDMOVEMENTMAPFROMORIGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanUnitPassTargetTile(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaTile* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_CANUNITPASSTARGETTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsThereEnemyUnit(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaTile* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_ISTHEREENEMYUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ExpandMovementMapOnNeighborTiles(::MX::Campaign::HexaTile* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Campaign::HexaTile*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_EXPANDMOVEMENTMAPONNEIGHBORTILES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetNearestEnemyTraceRoute(::MX::Campaign::HexaUnit* arg)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETNEARESTENEMYTRACEROUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAIUnitTraceRoute(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaTileUnitMovementOrderComparer* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTileUnitMovementOrderComparer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETAIUNITTRACEROUTE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexaTile* GetNearlestTileByTraceRouteSize(::MX::Campaign::HexLocation* arg, Il2CppObject* arg2)
		{
			return ((::MX::Campaign::HexaTile*(*)(::MX::Campaign::HexLocation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETNEARLESTTILEBYTRACEROUTESIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsLinkedTile(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_ISLINKEDTILE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetPathFromMovementMap(::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaTile* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETPATHFROMMOVEMENTMAP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAllEnemyUnit()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_GETALLENEMYUNIT_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaUnit* FindUnit(::System::Int64 arg)
		{
			return ((::MX::Campaign::HexaUnit*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_FINDUNIT_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTile* FindTile(::MX::Campaign::HexLocation* arg)
		{
			return ((::MX::Campaign::HexaTile*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_FINDTILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteTile(::MX::Campaign::HexaTile* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_DELETETILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddHexaTile(::MX::Campaign::HexaTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_ADDHEXATILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBattleReady(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_ISBATTLEREADY_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* LoadHexaMapData(::System::String* str)
		{
			return ((::MX::Campaign::HexaTileMap*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_LOADHEXAMAPDATA_OFFSET))(str, nullptr);
		}

		::System::Void ApplyTileStates(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_APPLYTILESTATES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyTileState(::MX::Campaign::HexaTile* arg, ::MX::Campaign::HexaTileState* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTileState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_APPLYTILESTATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ExtractTileStates()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_EXTRACTTILESTATES_OFFSET))(nullptr);
		}

		::System::Void ProcessVisualConditionAndCommand(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_PROCESSVISUALCONDITIONANDCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

