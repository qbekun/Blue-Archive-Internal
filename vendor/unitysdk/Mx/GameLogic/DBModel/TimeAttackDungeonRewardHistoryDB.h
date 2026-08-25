#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }

#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GET_DATE_OFFSET UNITYSDK_OFFSET(0x10102F0)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1010300)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GET_ISSWEEP_OFFSET UNITYSDK_OFFSET(0x1010310)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_SET_DATE_OFFSET UNITYSDK_OFFSET(0x1010320)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GENERATEFROMROOMDBS_OFFSET UNITYSDK_OFFSET(0x1010330)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GET_ROOMDB_OFFSET UNITYSDK_OFFSET(0x1010C20)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_SET_ROOMDB_OFFSET UNITYSDK_OFFSET(0x1010C30)
#define MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_SET_ISSWEEP_OFFSET UNITYSDK_OFFSET(0x1010C40)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int TimeAttackDungeonRewardHistoryDB_TypeDefinitionIndex = 12741;

	class TimeAttackDungeonRewardHistoryDB : public Il2CppObject
	{
	public:
		::System::DateTime* _Date_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _RoomDB_k__BackingField; // 0x18
		::System::Boolean _IsSweep_k__BackingField; // 0x20

		::System::DateTime* get_Date()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSweep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GET_ISSWEEP_OFFSET))(nullptr);
		}

		::System::Void set_Date(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_SET_DATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GenerateFromRoomDBs(Il2CppObject* arg, ::System::DateTime* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GENERATEFROMROOMDBS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_RoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_GET_ROOMDB_OFFSET))(nullptr);
		}

		::System::Void set_RoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_SET_ROOMDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSweep(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TIMEATTACKDUNGEONREWARDHISTORYDB_SET_ISSWEEP_OFFSET))(arg, nullptr);
		}

	};
}

