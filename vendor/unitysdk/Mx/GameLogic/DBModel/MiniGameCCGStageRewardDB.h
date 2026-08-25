#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStageRewardType; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1002000)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_GET_REWARDINDEX_OFFSET UNITYSDK_OFFSET(0x1002010)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1002020)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_GET_REWARDIDS_OFFSET UNITYSDK_OFFSET(0x1002030)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1002040)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_SET_REWARDINDEX_OFFSET UNITYSDK_OFFSET(0x1002050)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_SET_REWARDIDS_OFFSET UNITYSDK_OFFSET(0x1002060)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGStageRewardDB_TypeDefinitionIndex = 12648;

	class MiniGameCCGStageRewardDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* _Type_k__BackingField; // 0x10
		::System::Int32 _RewardIndex_k__BackingField; // 0x14
		::Il2CppArray<::System::Object*>* _RewardIds_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_GET_REWARDINDEX_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* get_Type()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStageRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_GET_TYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RewardIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_GET_REWARDIDS_OFFSET))(nullptr);
		}

		::System::Void set_Type(::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStageRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_SET_REWARDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSTAGEREWARDDB_SET_REWARDIDS_OFFSET))(arg, nullptr);
		}

	};
}

