#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTileMapCommonEventSetting; }

#define CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_SAVE_OFFSET UNITYSDK_OFFSET(0x1BE4180)
#define CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_LOAD_OFFSET UNITYSDK_OFFSET(0x1BE4230)
#define CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BE4290)
#define CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4790)

	inline static constexpr unsigned int ConquestTileMapCommonEventSettingVisual_TypeDefinitionIndex = 1525;

	class ConquestTileMapCommonEventSettingVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestTileMapCommonEventSetting* ConquestTileMapCommonEventSetting; // 0x18
		::System::Boolean TileConquer; // 0x20
		::System::Boolean TileUpgrade; // 0x21
		::System::Boolean BossOpen; // 0x22
		::System::Boolean StepComplete; // 0x23
		::System::Boolean MassErosion; // 0x24
		::System::Boolean Erosion; // 0x25
		::System::Boolean ErosionRemove; // 0x26
		::System::Boolean UnexpectedEvent; // 0x27
		::System::Boolean TileConquerReward; // 0x28

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_SAVE_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_LOAD_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEMAPCOMMONEVENTSETTINGVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

