#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class CampaignState; }

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignState_TypeDefinitionIndex = 11408;

	class CampaignState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::NetworkProtocol::CampaignState* BeforeStart; // 0x0
		::MX::NetworkProtocol::CampaignState* BeginPlayerPhase; // 0x0
		::MX::NetworkProtocol::CampaignState* PlayerPhase; // 0x0
		::MX::NetworkProtocol::CampaignState* EndPlayerPhase; // 0x0
		::MX::NetworkProtocol::CampaignState* BeginEnemyPhase; // 0x0
		::MX::NetworkProtocol::CampaignState* EnemyPhase; // 0x0
		::MX::NetworkProtocol::CampaignState* EndEnemyPhase; // 0x0
		::MX::NetworkProtocol::CampaignState* Win; // 0x0
		::MX::NetworkProtocol::CampaignState* Lose; // 0x0
		::MX::NetworkProtocol::CampaignState* StrategySkip; // 0x0

	};
}

