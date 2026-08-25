#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class StageEntryBase;
namespace Mx::Sweep { class SweepBase; }

	inline static constexpr unsigned int StageInfoPopupSettings_TypeDefinitionIndex = 7207;

	class StageInfoPopupSettings : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* StageInfo; // 0x10
		Il2CppObject* StarGoals; // 0x18
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* HistoryDB; // 0x20
		StageEntryBase* StageEntry; // 0x28
		::Mx::Sweep::SweepBase* Sweeper; // 0x30
		Il2CppObject* RequestEnterAction; // 0x38

	};

