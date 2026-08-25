#pragma once
#include "unitysdk.h"

class UITexture;
class LabelScroll;
class UILabel;
class WidgetFloater;
namespace UnityEngine { class Transform; }
class UISlider;
namespace UnityEngine { class Color; }
class AnimationHPBar;
namespace UnityEngine { class Texture; }
class CharacterVisual;
class UIHPBar;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define BOSSHPBAR__INITIALIZE_B__13_0_OFFSET UNITYSDK_OFFSET(0x25CF7F0)
#define BOSSHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25CF820)
#define BOSSHPBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x25D0110)
#define BOSSHPBAR_ONHITPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x25CFD90)
#define BOSSHPBAR_SETSHIELDHPBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25D0120)
#define BOSSHPBAR_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25D0280)
#define BOSSHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D0310)

	inline static constexpr unsigned int BossHPBar_TypeDefinitionIndex = 6350;

	class BossHPBar : public Il2CppObject
	{
	public:
		UITexture* bossTexture; // 0xE0
		LabelScroll* nameLabel; // 0xE8
		UILabel* hpLabel; // 0xF0
		UILabel* abbreviationPrefixLabel; // 0xF8
		UILabel* abbreviationLabel; // 0x100
		WidgetFloater* championIcon; // 0x108
		::UnityEngine::Transform* transformBossShieldBar; // 0x110
		UISlider* bossShieldBarSlider; // 0x118
		::UnityEngine::Color* overHealHpColor; // 0x120
		AnimationHPBar* AniHpBar; // 0x130
		::System::Int32 cachedStep; // 0x138
		::System::Boolean isBoss; // 0x13C
		::System::Boolean isChamp; // 0x13D

		::System::Void _Initialize_b__13_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR__INITIALIZE_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnHitPointChanged(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR_ONHITPOINTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SetShieldHpBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR_SETSHIELDHPBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOSSHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

