#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidUserDB; }

#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDUSERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1008790)
#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDUSERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1008A80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EliminateRaidUserDB_TypeDefinitionIndex = 12696;

	class EliminateRaidUserDB : public Il2CppObject
	{
	public:
		Il2CppObject* BossGroupToRankingPoint; // 0x60

		::MX::GameLogic::DBModel::RaidUserDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDUSERDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDUSERDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

