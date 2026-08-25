#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaSpawnerData; }
namespace MX::Logic::Data { class SkillEntitySpawnerData; }

#define MX_LOGIC_DATA_LEVELBATTLEITEMENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAF00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelBattleItemEntityData_TypeDefinitionIndex = 13680;

	class LevelBattleItemEntityData : public Il2CppObject
	{
	public:
		::System::Int64 RecognitionRadius; // 0x180
		::System::Int64 EffectRadius; // 0x188
		::System::Int32 TargetCount; // 0x190
		::System::Int32 ActiveDelayInFrame; // 0x194
		Il2CppObject* LogicEffectGroupIds; // 0x198
		Il2CppObject* Abilities; // 0x1A0
		Il2CppObject* AbilitiesInOrderOfInteraction; // 0x1A8
		::MX::Logic::Data::AreaSpawnerData* InEffectRadiusAreaSpawnerEntity; // 0x1B0
		::MX::Logic::Data::SkillEntitySpawnerData* InEffectRadiusSkillEntitySpawnerEntity; // 0x1B8
		::System::Boolean ApplyMovingAreaBeforeActivation; // 0x1C0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELBATTLEITEMENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

