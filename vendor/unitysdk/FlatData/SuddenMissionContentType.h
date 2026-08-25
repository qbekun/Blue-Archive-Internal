#pragma once
#include "../unitysdk.h"

namespace FlatData { class SuddenMissionContentType; }

namespace FlatData
{
	inline static constexpr unsigned int SuddenMissionContentType_TypeDefinitionIndex = 9474;

	class SuddenMissionContentType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SuddenMissionContentType* OrdinaryState; // 0x0
		::FlatData::SuddenMissionContentType* CampaignNormalStage; // 0x0
		::FlatData::SuddenMissionContentType* CampaignHardStage; // 0x0
		::FlatData::SuddenMissionContentType* EventStage; // 0x0
		::FlatData::SuddenMissionContentType* WeekDungeon; // 0x0
		::FlatData::SuddenMissionContentType* Chaser; // 0x0
		::FlatData::SuddenMissionContentType* SchoolDungeon; // 0x0
		::FlatData::SuddenMissionContentType* TimeAttackDungeon; // 0x0
		::FlatData::SuddenMissionContentType* Raid; // 0x0

	};
}

