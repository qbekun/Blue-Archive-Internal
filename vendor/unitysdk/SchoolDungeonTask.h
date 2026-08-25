#pragma once
#include "unitysdk.h"

namespace MX::Data { class SchoolDungeonData; }
namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }

#define SCHOOLDUNGEONTASK_FINDHISTORY_OFFSET UNITYSDK_OFFSET(0x2035780)
#define SCHOOLDUNGEONTASK_HASHISTORYDB_OFFSET UNITYSDK_OFFSET(0x2035800)
#define SCHOOLDUNGEONTASK_GET_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x2035850)
#define SCHOOLDUNGEONTASK_SET_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x2035860)
#define SCHOOLDUNGEONTASK_GET_DUNGEONDATA_OFFSET UNITYSDK_OFFSET(0x2035870)
#define SCHOOLDUNGEONTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2035900)
#define SCHOOLDUNGEONTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x20359B0)
#define SCHOOLDUNGEONTASK_SYNCHISTORIES_OFFSET UNITYSDK_OFFSET(0x2035A10)
#define SCHOOLDUNGEONTASK_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x2035B00)
#define SCHOOLDUNGEONTASK_ISSTAGEOPEN_OFFSET UNITYSDK_OFFSET(0x2035D00)
#define SCHOOLDUNGEONTASK_ISSTAGEOPEN_OFFSET UNITYSDK_OFFSET(0x2035DC0)
#define SCHOOLDUNGEONTASK_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x2035F60)
#define SCHOOLDUNGEONTASK_COSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x2036050)
#define SCHOOLDUNGEONTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2036100)

	inline static constexpr unsigned int SchoolDungeonTask_TypeDefinitionIndex = 3235;

	class SchoolDungeonTask : public Il2CppObject
	{
	public:
		Il2CppObject* histories; // 0x10
		::System::Boolean _NeedToSync_k__BackingField; // 0x18
		::System::Int64 LatestClearStageId; // 0x20
		::MX::Data::SchoolDungeonData* dungeonData; // 0x28

		::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* FindHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_FINDHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasHistoryDB(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_HASHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NeedToSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_GET_NEEDTOSYNC_OFFSET))(nullptr);
		}

		::System::Void set_NeedToSync(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_SET_NEEDTOSYNC_OFFSET))(arg, nullptr);
		}

		::MX::Data::SchoolDungeonData* get_DungeonData()
		{
			return ((::MX::Data::SchoolDungeonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_GET_DUNGEONDATA_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void SyncHistories(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_SYNCHISTORIES_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHistory(::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_SYNCHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStageOpen(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_ISSTAGEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStageOpen(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_ISSTAGEOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void StartBattle(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_STARTBATTLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoStartBattle(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_COSTARTBATTLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONTASK_.CTOR_OFFSET))(nullptr);
		}

	};

