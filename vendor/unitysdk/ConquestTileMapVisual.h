#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestTileMap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class ConquestTileVisual;
class ConquestUnitVisual;
class ConquestObjectVisual;
namespace FlatData { class StageDifficulty; }
namespace MX::Conquest { class ConquestUnit; }
namespace MX::GameLogic::DBModel { class ConquestErosionDB; }
namespace MX::Conquest { class ConquestObject; }
namespace MX::Conquest { class ConquestTile; }
class UIConquest;
namespace MX::Campaign { class HexLocation; }
namespace FlatData { class ConquestTeamType; }

#define CONQUESTTILEMAPVISUAL_INITCONQUESTMAP_OFFSET UNITYSDK_OFFSET(0x1BEB8C0)
#define CONQUESTTILEMAPVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BEC140)
#define CONQUESTTILEMAPVISUAL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BEC2B0)
#define CONQUESTTILEMAPVISUAL_ADDCONQUESTTILEFORCE_OFFSET UNITYSDK_OFFSET(0x1BEC2C0)
#define CONQUESTTILEMAPVISUAL_ADDCONQUESTTILE_OFFSET UNITYSDK_OFFSET(0x1BEC970)
#define CONQUESTTILEMAPVISUAL_DELETECONQUESTTILE_OFFSET UNITYSDK_OFFSET(0x1BEC5A0)
#define CONQUESTTILEMAPVISUAL_DELETEUNIT_OFFSET UNITYSDK_OFFSET(0x1BECFD0)
#define CONQUESTTILEMAPVISUAL_DELETECONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BED170)
#define CONQUESTTILEMAPVISUAL_REPLACEUNIT_OFFSET UNITYSDK_OFFSET(0x1BED2C0)
#define CONQUESTTILEMAPVISUAL_REPLACECONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BED3D0)
#define CONQUESTTILEMAPVISUAL_LOADCONQUESTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1BED4F0)
#define CONQUESTTILEMAPVISUAL_LOADCONQUESTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1BE9C80)
#define CONQUESTTILEMAPVISUAL_MAKECONQUESTTILEMAP_OFFSET UNITYSDK_OFFSET(0x1BED520)
#define CONQUESTTILEMAPVISUAL_MAKECONQUESTUNIT_OFFSET UNITYSDK_OFFSET(0x1BED5F0)
#define CONQUESTTILEMAPVISUAL_ADDCONQUESTUNIT_OFFSET UNITYSDK_OFFSET(0x1BDF130)
#define CONQUESTTILEMAPVISUAL_ADDSUDDENEVENTENEMY_OFFSET UNITYSDK_OFFSET(0x1BDB100)
#define CONQUESTTILEMAPVISUAL_ADDEROSIONENEMY_OFFSET UNITYSDK_OFFSET(0x1BDF1D0)
#define CONQUESTTILEMAPVISUAL_MAKECONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BED670)
#define CONQUESTTILEMAPVISUAL_MAKEUNEXPECTEDENEMYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1BED710)
#define CONQUESTTILEMAPVISUAL_MAKECONQUESTTILE_OFFSET UNITYSDK_OFFSET(0x1BED7B0)
#define CONQUESTTILEMAPVISUAL_REFRESHTILESTATE_OFFSET UNITYSDK_OFFSET(0x1BED8D0)
#define CONQUESTTILEMAPVISUAL_SETMAXOPENEDSTEP_OFFSET UNITYSDK_OFFSET(0x1BDB200)
#define CONQUESTTILEMAPVISUAL_SYNCDB_OFFSET UNITYSDK_OFFSET(0x1BEDE70)
#define CONQUESTTILEMAPVISUAL_REBUILDBORDERLINE_OFFSET UNITYSDK_OFFSET(0x1BDB3A0)
#define CONQUESTTILEMAPVISUAL_PLAYUNFOGSTEP_OFFSET UNITYSDK_OFFSET(0x1BDE940)
#define CONQUESTTILEMAPVISUAL_GETTILESBYROW_OFFSET UNITYSDK_OFFSET(0x1BEF040)
#define CONQUESTTILEMAPVISUAL_SETUNITHEXAUIHIDE_OFFSET UNITYSDK_OFFSET(0x1BEF6E0)
#define CONQUESTTILEMAPVISUAL_PLAYUNITANIMATION_OFFSET UNITYSDK_OFFSET(0x1BEC240)
#define CONQUESTTILEMAPVISUAL_GETACTIVESTEPS_OFFSET UNITYSDK_OFFSET(0x1BEF880)
#define CONQUESTTILEMAPVISUAL_GETBORDERLINES_OFFSET UNITYSDK_OFFSET(0x1BEDFC0)
#define CONQUESTTILEMAPVISUAL_ISREACHABLE_OFFSET UNITYSDK_OFFSET(0x1BEFC50)
#define CONQUESTTILEMAPVISUAL_ISREACHABLE_OFFSET UNITYSDK_OFFSET(0x1BEF000)
#define CONQUESTTILEMAPVISUAL_ISEROSIONONGOING_OFFSET UNITYSDK_OFFSET(0x1BEFD00)
#define CONQUESTTILEMAPVISUAL_ISTILECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BF0020)
#define CONQUESTTILEMAPVISUAL_ISOBJECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BF02D0)
#define CONQUESTTILEMAPVISUAL_GETCONQUESTEDANDTOTALTILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BF0050)
#define CONQUESTTILEMAPVISUAL_GETMATCHINGTILECOUNT_OFFSET UNITYSDK_OFFSET(0x1BF0670)
#define CONQUESTTILEMAPVISUAL_GETREMAININGANDTOTALNORMALENEMY_OFFSET UNITYSDK_OFFSET(0x1BF0810)
#define CONQUESTTILEMAPVISUAL_GETOBTAINEDANDTOTALOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BF0300)
#define CONQUESTTILEMAPVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0C90)
#define CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_0_OFFSET UNITYSDK_OFFSET(0x1BF0FE0)
#define CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_1_OFFSET UNITYSDK_OFFSET(0x1BF10F0)
#define CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_2_OFFSET UNITYSDK_OFFSET(0x1BF1130)
#define CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_3_OFFSET UNITYSDK_OFFSET(0x1BF1240)
#define CONQUESTTILEMAPVISUAL__GETBORDERLINES_G__INVERSEDIRECTION|51_0_OFFSET UNITYSDK_OFFSET(0x1BEFC30)
#define CONQUESTTILEMAPVISUAL__GETBORDERLINES_G__ISSURROUNDED|51_1_OFFSET UNITYSDK_OFFSET(0x1BEFA80)
#define CONQUESTTILEMAPVISUAL__GETBORDERLINES_G__ISLEFTMATCH|51_2_OFFSET UNITYSDK_OFFSET(0x1BEFB60)

	inline static constexpr unsigned int ConquestTileMapVisual_TypeDefinitionIndex = 1571;

	class ConquestTileMapVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMap* Data; // 0x18
		::UnityEngine::GameObject* HexaTileRoot; // 0x20
		::UnityEngine::GameObject* MonsterRoot; // 0x28
		::UnityEngine::GameObject* BorderLineRoot; // 0x30
		::UnityEngine::GameObject* Plane; // 0x38
		Il2CppObject* ConquestTileVisualList; // 0x40
		Il2CppObject* ConquestTileVisualMapByHexLocation; // 0x48
		Il2CppObject* ConquestTileVisualMapByTileUniqueId; // 0x50
		Il2CppObject* ConquestUnitMapByEntityId; // 0x58
		Il2CppObject* UnitVisualList; // 0x60
		Il2CppObject* ConquestObjectVisualList; // 0x68
		Il2CppObject* UnexpectedEnemySymbolList; // 0x70
		::UnityEngine::Transform* EventParent; // 0x78
		::UnityEngine::GameObject* ConquestedBorderLinePrefab; // 0x80
		::UnityEngine::GameObject* ReachableBorderLinePrefab; // 0x88
		::System::Single BorderLineOffsetHeight; // 0x90
		::System::Single tileUnfogInterval; // 0x94
		Il2CppObject* conquestedBorderLines; // 0x98
		Il2CppObject* reachableBorderLines; // 0xA0
		Il2CppObject* MapRangeByStep; // 0xA8
		::System::Int32 maxOpenedStep; // 0xB0

		::System::Void InitConquestMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_INITCONQUESTMAP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void AddConquestTileForce(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ADDCONQUESTTILEFORCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddConquestTile(ConquestTileVisual* arg)
		{
			return ((::System::Boolean(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ADDCONQUESTTILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteConquestTile(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_DELETECONQUESTTILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteUnit(ConquestUnitVisual* arg)
		{
			((::System::Void(*)(ConquestUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_DELETEUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteConquestObject(ConquestObjectVisual* arg)
		{
			((::System::Void(*)(ConquestObjectVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_DELETECONQUESTOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReplaceUnit(ConquestUnitVisual* arg)
		{
			((::System::Void(*)(ConquestUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_REPLACEUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void ReplaceConquestObject(ConquestObjectVisual* arg)
		{
			((::System::Void(*)(ConquestObjectVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_REPLACECONQUESTOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void LoadConquestMapData(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_LOADCONQUESTMAPDATA_OFFSET))(str, arg, nullptr);
		}

		::MX::Conquest::ConquestTileMap* LoadConquestMapData(::System::String* str)
		{
			return ((::MX::Conquest::ConquestTileMap*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_LOADCONQUESTMAPDATA_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* MakeConquestTileMap(::MX::Conquest::ConquestTileMap* arg, ::System::Boolean arg2, ::UnityEngine::Transform* arg3, Il2CppObject* arg4, ::FlatData::StageDifficulty* arg5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestTileMap*, ::System::Boolean, ::UnityEngine::Transform*, Il2CppObject*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_MAKECONQUESTTILEMAP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Collections::IEnumerator* MakeConquestUnit(::MX::Conquest::ConquestUnit* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestUnit*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_MAKECONQUESTUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* AddConquestUnit(::MX::Conquest::ConquestUnit* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestUnit*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ADDCONQUESTUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* AddSuddenEventEnemy(ConquestTileVisual* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(ConquestTileVisual*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ADDSUDDENEVENTENEMY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* AddErosionEnemy(ConquestTileVisual* arg, ::MX::GameLogic::DBModel::ConquestErosionDB* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(ConquestTileVisual*, ::MX::GameLogic::DBModel::ConquestErosionDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ADDEROSIONENEMY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* MakeConquestObject(::MX::Conquest::ConquestObject* arg, ::UnityEngine::Transform* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Conquest::ConquestObject*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_MAKECONQUESTOBJECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* MakeUnexpectedEnemySymbol(::System::String* str, ::UnityEngine::Transform* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_MAKEUNEXPECTEDENEMYSYMBOL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void MakeConquestTile(::MX::Conquest::ConquestTile* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_MAKECONQUESTTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshTileState(UIConquest* arg)
		{
			((::System::Void(*)(UIConquest*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_REFRESHTILESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxOpenedStep(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_SETMAXOPENEDSTEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncDB()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_SYNCDB_OFFSET))(nullptr);
		}

		::System::Void RebuildBorderLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_REBUILDBORDERLINE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayUnfogStep(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_PLAYUNFOGSTEP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTilesByRow(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETTILESBYROW_OFFSET))(arg, nullptr);
		}

		::System::Void SetUnitHexaUIHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_SETUNITHEXAUIHIDE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayUnitAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_PLAYUNITANIMATION_OFFSET))(nullptr);
		}

		Il2CppObject* GetActiveSteps()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETACTIVESTEPS_OFFSET))(nullptr);
		}

		Il2CppObject* GetBorderLines(::System::Single arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETBORDERLINES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsReachable(::MX::Campaign::HexLocation* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ISREACHABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReachable(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ISREACHABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsErosionOngoing(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ISEROSIONONGOING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTileComplete(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ISTILECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsObjectComplete(::System::Int64 arg, ::FlatData::StageDifficulty* arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_ISOBJECTCOMPLETE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetConquestedAndTotalTileCount(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETCONQUESTEDANDTOTALTILECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMatchingTileCount(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETMATCHINGTILECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRemainingAndTotalNormalEnemy(::System::Int32 arg, ::FlatData::ConquestTeamType* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::FlatData::ConquestTeamType*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETREMAININGANDTOTALNORMALENEMY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetObtainedAndTotalObjectCount(::System::Int64 arg, ::FlatData::StageDifficulty* arg2, ::System::Int32 arg3)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_GETOBTAINEDANDTOTALOBJECTCOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RebuildBorderLine_b__45_0(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RebuildBorderLine_b__45_1(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RebuildBorderLine_b__45_2(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RebuildBorderLine_b__45_3(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__REBUILDBORDERLINE_B__45_3_OFFSET))(arg, nullptr);
		}

		::System::Int32 _GetBorderLines_g__InverseDirection|51_0(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__GETBORDERLINES_G__INVERSEDIRECTION|51_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetBorderLines_g__IsSurrounded|51_1(::MX::Campaign::HexLocation* arg, <>c__DisplayClass51_0&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, <>c__DisplayClass51_0&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__GETBORDERLINES_G__ISSURROUNDED|51_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _GetBorderLines_g__IsLeftMatch|51_2(::MX::Campaign::HexLocation* arg, ::System::Int32 arg2, <>c__DisplayClass51_0&* arg3)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::System::Int32, <>c__DisplayClass51_0&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPVISUAL__GETBORDERLINES_G__ISLEFTMATCH|51_2_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

