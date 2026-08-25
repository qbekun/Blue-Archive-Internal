#pragma once
#include "../unitysdk.h"

namespace FlatData { class WorldRaidMapType; }

namespace FlatData
{
	inline static constexpr unsigned int WorldRaidMapType_TypeDefinitionIndex = 9523;

	class WorldRaidMapType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::WorldRaidMapType* None; // 0x0
		::FlatData::WorldRaidMapType* Carrier; // 0x0
		::FlatData::WorldRaidMapType* WorldMap; // 0x0

	};
}

