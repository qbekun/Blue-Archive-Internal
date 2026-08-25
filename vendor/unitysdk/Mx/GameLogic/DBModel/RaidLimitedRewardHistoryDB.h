#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1009C60)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1009C70)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1009C80)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1009C90)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0x1009CA0)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009CB0)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1009CC0)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1009CD0)
#define MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1009CE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidLimitedRewardHistoryDB_TypeDefinitionIndex = 12704;

	class RaidLimitedRewardHistoryDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::Int64 _RewardId_k__BackingField; // 0x20
		::System::DateTime* _ReceiveDate_k__BackingField; // 0x28

		::System::Void set_RewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_REWARDID_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::DateTime* get_ReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_RECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_RECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDLIMITEDREWARDHISTORYDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

