#pragma once
#include "../unitysdk.h"

namespace FlatData { class MissionToastDisplayConditionType; }

namespace FlatData
{
	inline static constexpr unsigned int MissionToastDisplayConditionType_TypeDefinitionIndex = 9578;

	class MissionToastDisplayConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MissionToastDisplayConditionType* Always; // 0x0
		::FlatData::MissionToastDisplayConditionType* Complete; // 0x0
		::FlatData::MissionToastDisplayConditionType* Never; // 0x0

	};
}

