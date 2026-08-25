#pragma once
#include "../unitysdk.h"

namespace FlatData { class EmblemCategory; }

namespace FlatData
{
	inline static constexpr unsigned int EmblemCategory_TypeDefinitionIndex = 9512;

	class EmblemCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EmblemCategory* None; // 0x0
		::FlatData::EmblemCategory* Default; // 0x0
		::FlatData::EmblemCategory* Mission; // 0x0
		::FlatData::EmblemCategory* GroupStory; // 0x0
		::FlatData::EmblemCategory* Event; // 0x0
		::FlatData::EmblemCategory* MainStory; // 0x0
		::FlatData::EmblemCategory* Favor; // 0x0
		::FlatData::EmblemCategory* Boss; // 0x0
		::FlatData::EmblemCategory* Etc; // 0x0
		::FlatData::EmblemCategory* Etc_Anniversary; // 0x0
		::FlatData::EmblemCategory* MultiFloorRaid; // 0x0
		::FlatData::EmblemCategory* Potential; // 0x0
		::FlatData::EmblemCategory* BattlePass; // 0x0

	};
}

