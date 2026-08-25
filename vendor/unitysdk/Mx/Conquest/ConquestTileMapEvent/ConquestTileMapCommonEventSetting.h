#pragma once
#include "../../../unitysdk.h"

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x142EEF0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestTileMapCommonEventSetting_TypeDefinitionIndex = 14879;

	class ConquestTileMapCommonEventSetting : public Il2CppObject
	{
	public:
		::System::Boolean TileConquer; // 0x10
		::System::Int32 TileConquerDisplayOrder; // 0x14
		::System::Boolean TileUpgrade; // 0x18
		::System::Int32 TileUpgradeDisplayOrder; // 0x1C
		::System::Boolean BossOpen; // 0x20
		::System::Int32 BossOpenDisplayOrder; // 0x24
		::System::Boolean StepComplete; // 0x28
		::System::Int32 StepCompleteDisplayOrder; // 0x2C
		::System::Boolean MassErosion; // 0x30
		::System::Int32 MassErosionDisplayOrder; // 0x34
		::System::Boolean Erosion; // 0x38
		::System::Int32 ErosionDisplayOrder; // 0x3C
		::System::Boolean ErosionRemove; // 0x40
		::System::Int32 ErosionRemoveDisplayOrder; // 0x44
		::System::Boolean UnexpectedEvent; // 0x48
		::System::Int32 UnexpectedEventDisplayOrder; // 0x4C
		::System::Boolean TileConquerReward; // 0x50
		::System::Int32 TileConquerRewardDisplayOrder; // 0x54

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPCOMMONEVENTSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

