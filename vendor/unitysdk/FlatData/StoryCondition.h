#pragma once
#include "../unitysdk.h"

namespace FlatData { class StoryCondition; }

namespace FlatData
{
	inline static constexpr unsigned int StoryCondition_TypeDefinitionIndex = 9612;

	class StoryCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StoryCondition* Open; // 0x0
		::FlatData::StoryCondition* Locked; // 0x0
		::FlatData::StoryCondition* ComingSoon; // 0x0
		::FlatData::StoryCondition* Hide; // 0x0

	};
}

