#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::GameLogic::DBModel { class ConquestStageSaveDB; }
namespace MX::GameLogic::DBModel { class ConquestSummary; }
class ConquestTileMapDataContainer;
namespace MX::Data::Excel { class ConquestTileExcel; }
namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }
namespace MX::GameLogic::DBModel { class ConquestStepSummary; }
namespace MX::GameLogic::DBModel { class ConquestMainStoryStepSummary; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::NetworkProtocol { class ConquestCheckResponse; }
namespace MX::NetworkProtocol { class ConquestMainStoryCheckResponse; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
class UIBase;
class UIConquest;
namespace MX::Conquest { class ConquestTile; }

#define CONQUESTCONTENTOBJECT_SET_CONQUESTREWARDEVENTLOBBYREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD5B50)
#define CONQUESTCONTENTOBJECT_GETCONQUESTSUMMARY_OFFSET UNITYSDK_OFFSET(0x1AD5B60)
#define CONQUESTCONTENTOBJECT_SYNCCONQUESTDBS_OFFSET UNITYSDK_OFFSET(0x1AD60A0)
#define CONQUESTCONTENTOBJECT_SET_CONQUESTECHELONDBS_OFFSET UNITYSDK_OFFSET(0x1AD67F0)
#define CONQUESTCONTENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6800)
#define CONQUESTCONTENTOBJECT_GET_DIFFICULTYSTEPDICT_OFFSET UNITYSDK_OFFSET(0x1AD6810)
#define CONQUESTCONTENTOBJECT_SYNCCONQUESTECHELONDB_OFFSET UNITYSDK_OFFSET(0x1AD6820)
#define CONQUESTCONTENTOBJECT__SYNCMAINSTORYEVENTLOBBYCONQUESTCONTROLLERINFO_G__CONVERTFROMMAINSTORYSUMMARY|59_0_OFFSET UNITYSDK_OFFSET(0x1AD6950)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTOBJECTDBS_OFFSET UNITYSDK_OFFSET(0x1AD69C0)
#define CONQUESTCONTENTOBJECT__TRYGETTILEDBBYUNITID_B__68_0_OFFSET UNITYSDK_OFFSET(0x1AD69D0)
#define CONQUESTCONTENTOBJECT_GETOPERATABLETILEDBLIST_OFFSET UNITYSDK_OFFSET(0x1AD6A80)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1AD7060)
#define CONQUESTCONTENTOBJECT_SYNCSINGLECONQUESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1AD7070)
#define CONQUESTCONTENTOBJECT_TRYGETTILEDBBYUNITID_OFFSET UNITYSDK_OFFSET(0x1AD7230)
#define CONQUESTCONTENTOBJECT_SET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0x1AD72E0)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0x1AD72F0)
#define CONQUESTCONTENTOBJECT_DBNULLCHECK_OFFSET UNITYSDK_OFFSET(0x1AD6520)
#define CONQUESTCONTENTOBJECT_SET_ALARMPHASETOSHOW_OFFSET UNITYSDK_OFFSET(0x1AD7300)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTEDTILEDBS_OFFSET UNITYSDK_OFFSET(0x1AD7310)
#define CONQUESTCONTENTOBJECT_SET_TILECONQUERREWARD_OFFSET UNITYSDK_OFFSET(0x1AD7320)
#define CONQUESTCONTENTOBJECT_SYNCEVENTLOBBYCONQUESTCONTROLLERINFO_OFFSET UNITYSDK_OFFSET(0x1AD7330)
#define CONQUESTCONTENTOBJECT_GET_ISFIRSTENTER_OFFSET UNITYSDK_OFFSET(0x1AD73F0)
#define CONQUESTCONTENTOBJECT_TRYGETCONQUESTEROSIONDB_OFFSET UNITYSDK_OFFSET(0x1AD7400)
#define CONQUESTCONTENTOBJECT_CLEARCLIENTCACHE_OFFSET UNITYSDK_OFFSET(0x1AD6470)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0x1AD76A0)
#define CONQUESTCONTENTOBJECT_SET_CONQUESTEDTILEDBS_OFFSET UNITYSDK_OFFSET(0x1AD76B0)
#define CONQUESTCONTENTOBJECT_SET_DIFFICULTYSTEPDICT_OFFSET UNITYSDK_OFFSET(0x1AD76C0)
#define CONQUESTCONTENTOBJECT_SET_CONQUESTOBJECTDBS_OFFSET UNITYSDK_OFFSET(0x1AD76D0)
#define CONQUESTCONTENTOBJECT_SYNCMAINSTORYEVENTLOBBYCONQUESTCONTROLLERINFO_OFFSET UNITYSDK_OFFSET(0x1AD76E0)
#define CONQUESTCONTENTOBJECT_GET_TODAYOPERATIONRENTREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD79E0)
#define CONQUESTCONTENTOBJECT_CLEARFIRSTENTERINFO_OFFSET UNITYSDK_OFFSET(0x1AD7690)
#define CONQUESTCONTENTOBJECT_REMOVEEVENTOBJECTDB_OFFSET UNITYSDK_OFFSET(0x1AD79F0)
#define CONQUESTCONTENTOBJECT_REFRESHCONQUESTSUMMARYBYCONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0x1AD5BA0)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTECHELONDBS_OFFSET UNITYSDK_OFFSET(0x1AD7AD0)
#define CONQUESTCONTENTOBJECT_SET_CONQUESTDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1AD7AE0)
#define CONQUESTCONTENTOBJECT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1AD7AF0)
#define CONQUESTCONTENTOBJECT_ISUSEDINOTHEROPERATIONTILE_OFFSET UNITYSDK_OFFSET(0x1AD7CE0)
#define CONQUESTCONTENTOBJECT_GET_CONQUESTREWARDEVENTLOBBYREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD7EA0)
#define CONQUESTCONTENTOBJECT_SET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0x1AD7EB0)
#define CONQUESTCONTENTOBJECT_SYNCCONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0x1AD7EC0)
#define CONQUESTCONTENTOBJECT_ENTERCONQUESTBATTLE_OFFSET UNITYSDK_OFFSET(0x1AD7ED0)
#define CONQUESTCONTENTOBJECT_GET_TODAYCONQUESTRENTREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD8A60)
#define CONQUESTCONTENTOBJECT_GET_ALARMPHASETOSHOW_OFFSET UNITYSDK_OFFSET(0x1AD8B70)
#define CONQUESTCONTENTOBJECT_SET_ISFIRSTENTER_OFFSET UNITYSDK_OFFSET(0x1AD8B80)
#define CONQUESTCONTENTOBJECT_SYNCCONQUESTDB_OFFSET UNITYSDK_OFFSET(0x1AD8B90)
#define CONQUESTCONTENTOBJECT_GETECHELONOBJECTLISTFROMCONQUESTECHELONDBS_OFFSET UNITYSDK_OFFSET(0x1AD9590)
#define CONQUESTCONTENTOBJECT_GET_TILECONQUERREWARD_OFFSET UNITYSDK_OFFSET(0x1AD9800)
#define CONQUESTCONTENTOBJECT_CONQUESTBATTLERETRY_OFFSET UNITYSDK_OFFSET(0x1AD9810)
#define CONQUESTCONTENTOBJECT_GET_MAPDATACONTAINER_OFFSET UNITYSDK_OFFSET(0x1AD6FD0)
#define CONQUESTCONTENTOBJECT_GETTILEDB_OFFSET UNITYSDK_OFFSET(0x1AD9820)
#define CONQUESTCONTENTOBJECT_COSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1AD7C30)

	inline static constexpr unsigned int ConquestContentObject_TypeDefinitionIndex = 1449;

	class ConquestContentObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestInfoDB* _ConquestInfoDB_k__BackingField; // 0x10
		Il2CppObject* _ConquestedTileDBs_k__BackingField; // 0x18
		Il2CppObject* _ConquestObjectDBs_k__BackingField; // 0x20
		Il2CppObject* _ConquestEchelonDBs_k__BackingField; // 0x28
		::MX::GameLogic::DBModel::ConquestStageSaveDB* _ConquestStageSaveDB_k__BackingField; // 0x30
		Il2CppObject* _DifficultyStepDict_k__BackingField; // 0x38
		Il2CppObject* _ConquestDisplayInfos_k__BackingField; // 0x40
		Il2CppObject* _TileConquerReward_k__BackingField; // 0x48
		::System::Boolean _IsFirstEnter_k__BackingField; // 0x50
		::System::Boolean _ConquestRewardEventLobbyReddot_k__BackingField; // 0x51
		Il2CppObject* _AlarmPhaseToShow_k__BackingField; // 0x54
		::MX::GameLogic::DBModel::ConquestSummary* conquestSummary; // 0x60
		ConquestTileMapDataContainer* _mapDataContainer; // 0x68
		::MX::Data::Excel::ConquestTileExcel* CurrentTileExcelCache; // 0x70

		::System::Void set_ConquestRewardEventLobbyReddot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTREWARDEVENTLOBBYREDDOT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestSummary* GetConquestSummary(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ConquestSummary*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GETCONQUESTSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void SyncConquestDBs(::MX::GameLogic::DBModel::ConquestInfoDB* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::System::Boolean arg6, Il2CppObject* arg7)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCCONQUESTDBS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void set_ConquestEchelonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTECHELONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_DifficultyStepDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_DIFFICULTYSTEPDICT_OFFSET))(nullptr);
		}

		::System::Void SyncConquestEchelonDB(::MX::GameLogic::DBModel::ConquestEchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCCONQUESTECHELONDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStepSummary* _SyncMainstoryEventLobbyConquestControllerInfo_g__ConvertFromMainStorySummary|59_0(::MX::GameLogic::DBModel::ConquestMainStoryStepSummary* arg)
		{
			return ((::MX::GameLogic::DBModel::ConquestStepSummary*(*)(::MX::GameLogic::DBModel::ConquestMainStoryStepSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT__SYNCMAINSTORYEVENTLOBBYCONQUESTCONTROLLERINFO_G__CONVERTFROMMAINSTORYSUMMARY|59_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestObjectDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTOBJECTDBS_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetTileDBByUnitId_b__68_0(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT__TRYGETTILEDBBYUNITID_B__68_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOperatableTileDBList(::FlatData::StageDifficulty* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GETOPERATABLETILEDBLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestDisplayInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTDISPLAYINFOS_OFFSET))(nullptr);
		}

		::System::Void SyncSingleConquestObject(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCSINGLECONQUESTOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTileDBByUnitId(::System::Int64 arg, ::MX::GameLogic::DBModel::ConquestTileDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::ConquestTileDB&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_TRYGETTILEDBBYUNITID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ConquestInfoDB(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTINFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStageSaveDB* get_ConquestStageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTSTAGESAVEDB_OFFSET))(nullptr);
		}

		::System::Void DBNullCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_DBNULLCHECK_OFFSET))(nullptr);
		}

		::System::Void set_AlarmPhaseToShow(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_ALARMPHASETOSHOW_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestedTileDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTEDTILEDBS_OFFSET))(nullptr);
		}

		::System::Void set_TileConquerReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_TILECONQUERREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void SyncEventLobbyConquestControllerInfo(::MX::NetworkProtocol::ConquestCheckResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ConquestCheckResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCEVENTLOBBYCONQUESTCONTROLLERINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFirstEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_ISFIRSTENTER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetConquestErosionDB(::System::Int64 arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::ConquestErosionDB&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::ConquestErosionDB&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_TRYGETCONQUESTEROSIONDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ClearClientCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_CLEARCLIENTCACHE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* get_ConquestInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_ConquestedTileDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTEDTILEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DifficultyStepDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_DIFFICULTYSTEPDICT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestObjectDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTOBJECTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncMainstoryEventLobbyConquestControllerInfo(::MX::NetworkProtocol::ConquestMainStoryCheckResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ConquestMainStoryCheckResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCMAINSTORYEVENTLOBBYCONQUESTCONTROLLERINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TodayOperationRentRemainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_TODAYOPERATIONRENTREMAINCOUNT_OFFSET))(nullptr);
		}

		::System::Void ClearFirstEnterInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_CLEARFIRSTENTERINFO_OFFSET))(nullptr);
		}

		::System::Void RemoveEventObjectDB(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_REMOVEEVENTOBJECTDB_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshConquestSummaryByConquestInfoDB(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_REFRESHCONQUESTSUMMARYBYCONQUESTINFODB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestEchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTECHELONDBS_OFFSET))(nullptr);
		}

		::System::Void set_ConquestDisplayInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTDISPLAYINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void StartBattle(::MX::GameLogic::DBModel::ConquestStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_STARTBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUsedInOtherOperationTile(::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_ISUSEDINOTHEROPERATIONTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ConquestRewardEventLobbyReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_CONQUESTREWARDEVENTLOBBYREDDOT_OFFSET))(nullptr);
		}

		::System::Void set_ConquestStageSaveDB(::MX::GameLogic::DBModel::ConquestStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_CONQUESTSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void SyncConquestStageSaveDB(::MX::GameLogic::DBModel::ConquestStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCCONQUESTSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void EnterConquestBattle(UIBase* arg, UIConquest* arg2, ::MX::Conquest::ConquestTile* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(UIBase*, UIConquest*, ::MX::Conquest::ConquestTile*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_ENTERCONQUESTBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* get_TodayConquestRentRemainCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_TODAYCONQUESTRENTREMAINCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_AlarmPhaseToShow()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_ALARMPHASETOSHOW_OFFSET))(nullptr);
		}

		::System::Void set_IsFirstEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SET_ISFIRSTENTER_OFFSET))(arg, nullptr);
		}

		::System::Void SyncConquestDB(::MX::GameLogic::DBModel::ConquestInfoDB* arg, ::MX::GameLogic::DBModel::ConquestTileDB* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::MX::GameLogic::DBModel::ConquestTileDB*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_SYNCCONQUESTDB_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		Il2CppObject* GetEchelonObjectListFromConquestEchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GETECHELONOBJECTLISTFROMCONQUESTECHELONDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TileConquerReward()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_TILECONQUERREWARD_OFFSET))(nullptr);
		}

		::System::Void ConquestBattleRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_CONQUESTBATTLERETRY_OFFSET))(nullptr);
		}

		ConquestTileMapDataContainer* get_MapDataContainer()
		{
			return ((ConquestTileMapDataContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GET_MAPDATACONTAINER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestTileDB* GetTileDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ConquestTileDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_GETTILEDB_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoStartBattle(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::GameLogic::DBModel::AssistCharacterDB* arg4, ::System::Int64 arg5, ::System::Boolean arg6)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONTENTOBJECT_COSTARTBATTLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};

