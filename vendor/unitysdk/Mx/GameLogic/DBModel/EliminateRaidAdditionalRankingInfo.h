#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDADDITIONALRANKINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x10097F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EliminateRaidAdditionalRankingInfo_TypeDefinitionIndex = 12699;

	class EliminateRaidAdditionalRankingInfo : public Il2CppObject
	{
	public:
		Il2CppObject* BossGroupToScore; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDADDITIONALRANKINGINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

