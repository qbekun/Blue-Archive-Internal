#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACCOUNTLEVELREWARDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1B50)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLEVELREWARDDB_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xFE1B60)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLEVELREWARDDB_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xFE1B70)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountLevelRewardDB_TypeDefinitionIndex = 12474;

	class AccountLevelRewardDB : public Il2CppObject
	{
	public:
		::System::Int64 _RewardId_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLEVELREWARDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLEVELREWARDDB_SET_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLEVELREWARDDB_GET_REWARDID_OFFSET))(nullptr);
		}

	};
}

