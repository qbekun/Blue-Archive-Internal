#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_SET_REWARDRECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1013820)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013830)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_GET_REWARDRECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1013840)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013850)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1013860)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1013870)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013880)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidClearHistoryDB_TypeDefinitionIndex = 12756;

	class WorldRaidClearHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::DateTime* _RewardReceiveDate_k__BackingField; // 0x20

		::System::Void set_RewardReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_SET_REWARDRECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_RewardReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_GET_REWARDRECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDCLEARHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

