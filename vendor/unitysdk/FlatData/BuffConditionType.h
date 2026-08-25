#pragma once
#include "../unitysdk.h"

namespace FlatData { class BuffConditionType; }

namespace FlatData
{
	inline static constexpr unsigned int BuffConditionType_TypeDefinitionIndex = 9466;

	class BuffConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BuffConditionType* All; // 0x0
		::FlatData::BuffConditionType* Character; // 0x0
		::FlatData::BuffConditionType* School; // 0x0
		::FlatData::BuffConditionType* Weapon; // 0x0

	};
}

