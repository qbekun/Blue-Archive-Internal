#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }

#define MX_LOGIC_BATTLEENTITIES_IHEROSUMMARIZABLE_GET_SUMMARYDETAIL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int IHeroSummarizable_TypeDefinitionIndex = 13094;

	class IHeroSummarizable : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* get_SummaryDetail()
		{
			return ((::MX::Logic::BattleEntities::HeroSummaryDetailFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IHEROSUMMARIZABLE_GET_SUMMARYDETAIL_OFFSET))(nullptr);
		}

	};
}

