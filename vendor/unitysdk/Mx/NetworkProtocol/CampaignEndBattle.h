#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class CampaignEndBattle; }

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEndBattle_TypeDefinitionIndex = 11409;

	class CampaignEndBattle : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::NetworkProtocol::CampaignEndBattle* None; // 0x0
		::MX::NetworkProtocol::CampaignEndBattle* Win; // 0x0
		::MX::NetworkProtocol::CampaignEndBattle* Lose; // 0x0

	};
}

