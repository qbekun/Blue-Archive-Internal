#pragma once
#include "../unitysdk.h"

namespace FlatData { class GrowthCategory; }

namespace FlatData
{
	inline static constexpr unsigned int GrowthCategory_TypeDefinitionIndex = 9427;

	class GrowthCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::GrowthCategory* None; // 0x0
		::FlatData::GrowthCategory* LevelUp; // 0x0
		::FlatData::GrowthCategory* Transcend; // 0x0
		::FlatData::GrowthCategory* SkillLevelUp; // 0x0

	};
}

