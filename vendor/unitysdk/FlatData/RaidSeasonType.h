#pragma once
#include "../unitysdk.h"

namespace FlatData { class RaidSeasonType; }

namespace FlatData
{
	inline static constexpr unsigned int RaidSeasonType_TypeDefinitionIndex = 9465;

	class RaidSeasonType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RaidSeasonType* None; // 0x0
		::FlatData::RaidSeasonType* Open; // 0x0
		::FlatData::RaidSeasonType* Close; // 0x0
		::FlatData::RaidSeasonType* Settlement; // 0x0

	};
}

