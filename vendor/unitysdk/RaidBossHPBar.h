#pragma once
#include "unitysdk.h"

class GroggyGauge;
class UIGrid;
namespace MX::Logic::BattleEntities { class RaidBossCharacter; }
class MXBattleTask;
class CharacterVisual;
class UIHPBar;

#define RAIDBOSSHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25F1400)
#define RAIDBOSSHPBAR_UPDATEATG_OFFSET UNITYSDK_OFFSET(0x25F1590)
#define RAIDBOSSHPBAR_SETGROGGYBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25F16B0)
#define RAIDBOSSHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F1860)
#define RAIDBOSSHPBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F1880)

	inline static constexpr unsigned int RaidBossHPBar_TypeDefinitionIndex = 6423;

	class RaidBossHPBar : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* AtgSprites; // 0x140
		GroggyGauge* groggyBarSlider; // 0x148
		UIGrid* Grid; // 0x150
		::System::Single ScaleAniTime; // 0x158
		::MX::Logic::BattleEntities::RaidBossCharacter* raidBossCharacter; // 0x160
		::System::Single oneAtgGauege; // 0x168
		MXBattleTask* task; // 0x170

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSHPBAR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateATG()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSHPBAR_UPDATEATG_OFFSET))(nullptr);
		}

		::System::Void SetGroggyBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSHPBAR_SETGROGGYBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSHPBAR_UPDATE_OFFSET))(nullptr);
		}

	};

