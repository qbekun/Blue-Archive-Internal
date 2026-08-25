#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTileMapCommandType; }

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileMapCommandType_TypeDefinitionIndex = 14892;

	class HexaTileMapCommandType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Campaign::HexaTileMapCommandType* PlayScenario; // 0x0
		::MX::Campaign::HexaTileMapCommandType* SpawnUnitInTile; // 0x0
		::MX::Campaign::HexaTileMapCommandType* SpawnStrategyObjectInTile; // 0x0

	};
}

