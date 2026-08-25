#pragma once
#include "unitysdk.h"

#define UICOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343B70)

	inline static constexpr unsigned int UIColor_TypeDefinitionIndex = 4980;

	class UIColor : public Il2CppObject
	{
	public:
		Il2CppObject* BulletTypeForSkillCardBG; // 0x18
		Il2CppObject* BulletTypesForCostBg; // 0x20
		Il2CppObject* ArmorTypesForArmorTypeBg; // 0x28
		Il2CppObject* ArmorTypesForArmorTypeBrightBg; // 0x30
		Il2CppObject* DamageAttributeForAdvantage; // 0x38
		Il2CppObject* RaidBossDifficultyLabelColor; // 0x40
		Il2CppObject* LocationRankColor; // 0x48
		Il2CppObject* LongNoteLineColor; // 0x50
		Il2CppObject* MiniGameDifficultyColor; // 0x58
		Il2CppObject* TrophyModelDisableColor; // 0x60
		Il2CppObject* SpineScenarioFilterPreset; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOLOR_.CTOR_OFFSET))(nullptr);
		}

	};

