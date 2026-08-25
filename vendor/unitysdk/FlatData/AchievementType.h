#pragma once
#include "../unitysdk.h"

namespace FlatData { class AchievementType; }

namespace FlatData
{
	inline static constexpr unsigned int AchievementType_TypeDefinitionIndex = 9585;

	class AchievementType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AchievementType* Unlock; // 0x0
		::FlatData::AchievementType* Step; // 0x0

	};
}

