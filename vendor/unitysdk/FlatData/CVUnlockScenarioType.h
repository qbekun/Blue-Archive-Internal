#pragma once
#include "../unitysdk.h"

namespace FlatData { class CVUnlockScenarioType; }

namespace FlatData
{
	inline static constexpr unsigned int CVUnlockScenarioType_TypeDefinitionIndex = 9519;

	class CVUnlockScenarioType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CVUnlockScenarioType* Main; // 0x0
		::FlatData::CVUnlockScenarioType* Event; // 0x0
		::FlatData::CVUnlockScenarioType* SpecialOperation; // 0x0

	};
}

