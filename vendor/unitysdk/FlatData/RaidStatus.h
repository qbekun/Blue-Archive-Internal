#pragma once
#include "../unitysdk.h"

namespace FlatData { class RaidStatus; }

namespace FlatData
{
	inline static constexpr unsigned int RaidStatus_TypeDefinitionIndex = 9505;

	class RaidStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RaidStatus* None; // 0x0
		::FlatData::RaidStatus* Playing; // 0x0
		::FlatData::RaidStatus* Clear; // 0x0
		::FlatData::RaidStatus* Close; // 0x0

	};
}

