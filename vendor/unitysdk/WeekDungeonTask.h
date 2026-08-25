#pragma once
#include "unitysdk.h"

namespace MX::Data { class WeekDungeonData; }
namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
namespace FlatData { class WeekDungeonType; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Logic::Battles { class Battle; }

#define WEEKDUNGEONTASK_FINDHISTORY_OFFSET UNITYSDK_OFFSET(0x2043A70)
#define WEEKDUNGEONTASK_HASHISTORYDB_OFFSET UNITYSDK_OFFSET(0x2043AF0)
#define WEEKDUNGEONTASK_GET_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x2043B40)
#define WEEKDUNGEONTASK_SET_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x2043B50)
#define WEEKDUNGEONTASK_GET_DUNGEONDATA_OFFSET UNITYSDK_OFFSET(0x2043B60)
#define WEEKDUNGEONTASK_GET_ADDITIONALSTAGESYNCTIME_OFFSET UNITYSDK_OFFSET(0x2043BF0)
#define WEEKDUNGEONTASK_SET_ADDITIONALSTAGESYNCTIME_OFFSET UNITYSDK_OFFSET(0x2043C00)
#define WEEKDUNGEONTASK_GET_SEED_OFFSET UNITYSDK_OFFSET(0x2043C10)
#define WEEKDUNGEONTASK_SET_SEED_OFFSET UNITYSDK_OFFSET(0x2043C20)
#define WEEKDUNGEONTASK_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x2043C30)
#define WEEKDUNGEONTASK_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x2043C40)
#define WEEKDUNGEONTASK_GET_MODULEREWARDS_OFFSET UNITYSDK_OFFSET(0x2043C50)
#define WEEKDUNGEONTASK_SET_MODULEREWARDS_OFFSET UNITYSDK_OFFSET(0x2043C60)
#define WEEKDUNGEONTASK_ADDADDITIONALSTAGES_OFFSET UNITYSDK_OFFSET(0x2043C70)
#define WEEKDUNGEONTASK_ISOPENFORSHORTCUT_OFFSET UNITYSDK_OFFSET(0x2043FA0)
#define WEEKDUNGEONTASK_ISOPENFORSHORTCUT_OFFSET UNITYSDK_OFFSET(0x20442B0)
#define WEEKDUNGEONTASK_ISADDITIONALOPEN_OFFSET UNITYSDK_OFFSET(0x2044260)
#define WEEKDUNGEONTASK_CANPLAYSTAGE_OFFSET UNITYSDK_OFFSET(0x2044460)
#define WEEKDUNGEONTASK_ISSTAGEOPEN_OFFSET UNITYSDK_OFFSET(0x2044A10)
#define WEEKDUNGEONTASK_ISSTAGEOPEN_OFFSET UNITYSDK_OFFSET(0x2044540)
#define WEEKDUNGEONTASK_ISCOSTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x20447F0)
#define WEEKDUNGEONTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2044AD0)
#define WEEKDUNGEONTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2044B80)
#define WEEKDUNGEONTASK_SYNCHISTORIES_OFFSET UNITYSDK_OFFSET(0x2044BE0)
#define WEEKDUNGEONTASK_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x2044CD0)
#define WEEKDUNGEONTASK_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x2044EC0)
#define WEEKDUNGEONTASK_COSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x2044FC0)
#define WEEKDUNGEONTASK_PICKMODULEREWARDEFFECT_OFFSET UNITYSDK_OFFSET(0x2045080)
#define WEEKDUNGEONTASK_GETCHARACTERTEXTURESFORCHASER_OFFSET UNITYSDK_OFFSET(0x2045350)
#define WEEKDUNGEONTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2045A80)

	inline static constexpr unsigned int WeekDungeonTask_TypeDefinitionIndex = 3264;

	class WeekDungeonTask : public Il2CppObject
	{
	public:
		Il2CppObject* histories; // 0x10
		::System::Boolean _NeedToSync_k__BackingField; // 0x18
		::MX::Data::WeekDungeonData* dungeonData; // 0x20
		Il2CppObject* additionalStages; // 0x28
		::System::DateTime* _additionalStageSyncTime_k__BackingField; // 0x30
		Il2CppObject* additionalTypes; // 0x38
		::System::Int32 _Seed_k__BackingField; // 0x40
		::System::Int32 _Sequence_k__BackingField; // 0x44
		Il2CppObject* _ModuleRewards_k__BackingField; // 0x48
		::System::Int64 LatestClearStageId; // 0x50

		::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* FindHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_FINDHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasHistoryDB(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_HASHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedToSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GET_NEEDTOSYNC_OFFSET))(nullptr);
		}

		::System::Void set_NeedToSync(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SET_NEEDTOSYNC_OFFSET))(arg, nullptr);
		}

		::MX::Data::WeekDungeonData* get_DungeonData()
		{
			return ((::MX::Data::WeekDungeonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GET_DUNGEONDATA_OFFSET))(nullptr);
		}

		::System::DateTime* get_additionalStageSyncTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GET_ADDITIONALSTAGESYNCTIME_OFFSET))(nullptr);
		}

		::System::Void set_additionalStageSyncTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SET_ADDITIONALSTAGESYNCTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Sequence()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_Sequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SET_SEQUENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ModuleRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GET_MODULEREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_ModuleRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SET_MODULEREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void AddAdditionalStages(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ADDADDITIONALSTAGES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpenForShortcut(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ISOPENFORSHORTCUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpenForShortcut(::FlatData::WeekDungeonType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ISOPENFORSHORTCUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAdditionalOpen(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ISADDITIONALOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanPlayStage(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_CANPLAYSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStageOpen(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ISSTAGEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStageOpen(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ISSTAGEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCostAvailable(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_ISCOSTAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void SyncHistories(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SYNCHISTORIES_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHistory(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_SYNCHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void StartBattle(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_STARTBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoStartBattle(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_COSTARTBATTLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* PickModuleRewardEffect(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_PICKMODULEREWARDEFFECT_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetCharacterTexturesForChaser(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_GETCHARACTERTEXTURESFORCHASER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTASK_.CTOR_OFFSET))(nullptr);
		}

	};

