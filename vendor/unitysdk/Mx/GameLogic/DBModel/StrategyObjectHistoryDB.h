#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_STRATEGYOBJECTHISTORYDB_SET_STRATEGYOBJECTID_OFFSET UNITYSDK_OFFSET(0x100F5C0)
#define MX_GAMELOGIC_DBMODEL_STRATEGYOBJECTHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100F5D0)
#define MX_GAMELOGIC_DBMODEL_STRATEGYOBJECTHISTORYDB_GET_STRATEGYOBJECTID_OFFSET UNITYSDK_OFFSET(0x100F5E0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int StrategyObjectHistoryDB_TypeDefinitionIndex = 12735;

	class StrategyObjectHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _StrategyObjectId_k__BackingField; // 0x10

		::System::Void set_StrategyObjectId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STRATEGYOBJECTHISTORYDB_SET_STRATEGYOBJECTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STRATEGYOBJECTHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StrategyObjectId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_STRATEGYOBJECTHISTORYDB_GET_STRATEGYOBJECTID_OFFSET))(nullptr);
		}

	};
}

