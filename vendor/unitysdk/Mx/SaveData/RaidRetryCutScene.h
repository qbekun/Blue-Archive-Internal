#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class RaidRetryCutScene; }

namespace MX::SaveData
{
	inline static constexpr unsigned int RaidRetryCutScene_TypeDefinitionIndex = 20022;

	class RaidRetryCutScene : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::RaidRetryCutScene* Always; // 0x0
		::MX::SaveData::RaidRetryCutScene* Never; // 0x0

	};
}

