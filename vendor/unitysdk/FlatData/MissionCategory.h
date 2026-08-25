#pragma once
#include "../unitysdk.h"

namespace FlatData { class MissionCategory; }

namespace FlatData
{
	inline static constexpr unsigned int MissionCategory_TypeDefinitionIndex = 9574;

	class MissionCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MissionCategory* Challenge; // 0x0
		::FlatData::MissionCategory* Daily; // 0x0
		::FlatData::MissionCategory* Weekly; // 0x0
		::FlatData::MissionCategory* Achievement; // 0x0
		::FlatData::MissionCategory* GuideMission; // 0x0
		::FlatData::MissionCategory* All; // 0x0
		::FlatData::MissionCategory* MiniGameScore; // 0x0
		::FlatData::MissionCategory* MiniGameEvent; // 0x0
		::FlatData::MissionCategory* EventAchievement; // 0x0
		::FlatData::MissionCategory* DailySudden; // 0x0
		::FlatData::MissionCategory* DailyFixed; // 0x0
		::FlatData::MissionCategory* EventFixed; // 0x0
		::FlatData::MissionCategory* WelcomeMission; // 0x0

	};
}

