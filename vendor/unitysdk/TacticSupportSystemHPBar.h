#pragma once
#include "unitysdk.h"

class UISlider;
class ArmorTypeHPBarColor;
class GridScaler;
namespace UnityEngine { class Transform; }
class UIExSkillTargetHighlight;
class TSSVisual;
namespace MX::Logic::BattleEntities { class TSSCharacter; }
class CharacterVisual;
class UIHPBar;

#define TACTICSUPPORTSYSTEMHPBAR_SETHIGHLIGHTMARKER_OFFSET UNITYSDK_OFFSET(0x25F2E00)
#define TACTICSUPPORTSYSTEMHPBAR_UPDATETIMEBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25F2EA0)
#define TACTICSUPPORTSYSTEMHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F2F40)
#define TACTICSUPPORTSYSTEMHPBAR_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25F2F50)
#define TACTICSUPPORTSYSTEMHPBAR_UPDATEHPBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25F2FB0)
#define TACTICSUPPORTSYSTEMHPBAR_INITPOSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x25F3460)
#define TACTICSUPPORTSYSTEMHPBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x25F3610)
#define TACTICSUPPORTSYSTEMHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25F3620)
#define TACTICSUPPORTSYSTEMHPBAR_UPDATEWIDGET_OFFSET UNITYSDK_OFFSET(0x25F3A40)
#define TACTICSUPPORTSYSTEMHPBAR_REFRESHHIGHLIGHTMARKERSETTING_OFFSET UNITYSDK_OFFSET(0x25F3D20)
#define TACTICSUPPORTSYSTEMHPBAR_SETSHIELDHPBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25F3BC0)

	inline static constexpr unsigned int TacticSupportSystemHPBar_TypeDefinitionIndex = 6431;

	class TacticSupportSystemHPBar : public Il2CppObject
	{
	public:
		UISlider* hpBarSlider; // 0xE0
		UISlider* hpBarMaxHPCap; // 0xE8
		UISlider* temporaryHPSlider; // 0xF0
		UISlider* timeBarSlider; // 0xF8
		UISlider* shieldBarSlider; // 0x100
		ArmorTypeHPBarColor* hpBarColor; // 0x108
		GridScaler* hpBarLineScaler; // 0x110
		::UnityEngine::Transform* transformShieldBar; // 0x118
		UIExSkillTargetHighlight* exSkillTargetHighlight; // 0x120
		TSSVisual* tssVisual; // 0x128
		::MX::Logic::BattleEntities::TSSCharacter* tss; // 0x130
		::System::Single hpBarHeight; // 0x138

		::System::Void SetHighlightMarker(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_SETHIGHLIGHTMARKER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTimeBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_UPDATETIMEBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void UpdateHpBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_UPDATEHPBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void InitPositionSystem(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_INITPOSITIONSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateWidget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_UPDATEWIDGET_OFFSET))(nullptr);
		}

		::System::Void RefreshHighlightMarkerSetting(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_REFRESHHIGHLIGHTMARKERSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetShieldHpBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICSUPPORTSYSTEMHPBAR_SETSHIELDHPBARSLIDER_OFFSET))(nullptr);
		}

	};

