#pragma once
#include "unitysdk.h"

class UISlider;
class ArmorTypeHPBarColor;
class GridScaler;
class UISprite;
class UIExSkillTargetHighlight;
namespace UnityEngine { class Transform; }
class CharacterVisual;
namespace MX::Logic::BattleEntities { class IObstacle; }
namespace MX::Core::Services { class Hash64; }
class UIHPBar;

#define CHARACTERHPBAR_GETUISEPARATEBOUNDARYLIST_OFFSET UNITYSDK_OFFSET(0x25DD6C0)
#define CHARACTERHPBAR_REFRESHHIGHLIGHTMARKERSETTING_OFFSET UNITYSDK_OFFSET(0x25DD6D0)
#define CHARACTERHPBAR_SETOBSTACLECOVERSTATUS_OFFSET UNITYSDK_OFFSET(0x25DD760)
#define CHARACTERHPBAR_CREATEHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x25DD9E0)
#define CHARACTERHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25DE200)
#define CHARACTERHPBAR_UPDATEWIDGET_OFFSET UNITYSDK_OFFSET(0x25DE330)
#define CHARACTERHPBAR_REMOVEHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x25DE9E0)
#define CHARACTERHPBAR_REMOVEALLHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x25DED00)
#define CHARACTERHPBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x25DF060)
#define CHARACTERHPBAR_INITPOSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x25DF0A0)
#define CHARACTERHPBAR_SETFORMATIONICON_OFFSET UNITYSDK_OFFSET(0x25DF270)
#define CHARACTERHPBAR_SETSHIELDHPBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25DE880)
#define CHARACTERHPBAR_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25DF3A0)
#define CHARACTERHPBAR_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x25DF3C0)
#define CHARACTERHPBAR_GETHPGAUGELOCALPOSITIONX_OFFSET UNITYSDK_OFFSET(0x25DE090)
#define CHARACTERHPBAR_SETHPBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25DE3B0)
#define CHARACTERHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25DF450)
#define CHARACTERHPBAR_SETHIGHLIGHTMARKER_OFFSET UNITYSDK_OFFSET(0x25DF6B0)

	inline static constexpr unsigned int CharacterHPBar_TypeDefinitionIndex = 6376;

	class CharacterHPBar : public Il2CppObject
	{
	public:
		::System::String* CombatIconShelter; // 0x0
		::System::String* CombatIconCover; // 0x0
		UISlider* hpBarSlider; // 0xE0
		UISlider* hpBarMaxHPCap; // 0xE8
		UISlider* temporaryHPSlider; // 0xF0
		UISlider* shieldBarSlider; // 0xF8
		ArmorTypeHPBarColor* hpBarColor; // 0x100
		GridScaler* hpBarLineScaler; // 0x108
		UISprite* eliteIcon; // 0x110
		UISprite* bossIcon; // 0x118
		UIExSkillTargetHighlight* exSkillTargetHighlight; // 0x120
		UISprite* obstacleStatusIcon; // 0x128
		::UnityEngine::Transform* transformShieldBar; // 0x130
		Il2CppObject* uiSeparateBoundaryOrigin; // 0x138
		Il2CppObject* uiSeparateBoundaryInstance; // 0x140
		Il2CppObject* uiSeparateBoundaryList; // 0x148
		::System::Single hpBarHeight; // 0x150

		Il2CppObject* GetUISeparateBoundaryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_GETUISEPARATEBOUNDARYLIST_OFFSET))(nullptr);
		}

		::System::Void RefreshHighlightMarkerSetting(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_REFRESHHIGHLIGHTMARKERSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetObstacleCoverStatus(::MX::Logic::BattleEntities::IObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::IObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_SETOBSTACLECOVERSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void CreateHPRatioBoundary(::MX::Core::Services::Hash64* arg, Il2CppObject* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_CREATEHPRATIOBOUNDARY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateWidget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_UPDATEWIDGET_OFFSET))(nullptr);
		}

		::System::Void RemoveHPRatioBoundary(::MX::Core::Services::Hash64* arg)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_REMOVEHPRATIOBOUNDARY_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAllHPRatioBoundary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_REMOVEALLHPRATIOBOUNDARY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitPositionSystem(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_INITPOSITIONSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetFormationIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_SETFORMATIONICON_OFFSET))(nullptr);
		}

		::System::Void SetShieldHpBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_SETSHIELDHPBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_UNLOAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitPosition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_INITPOSITION_OFFSET))(nullptr);
		}

		::System::Single GetHPGaugeLocalPositionX(::System::Single arg, ::UnityEngine::Transform&* arg2)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Transform&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_GETHPGAUGELOCALPOSITIONX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetHpBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_SETHPBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetHighlightMarker(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERHPBAR_SETHIGHLIGHTMARKER_OFFSET))(arg, nullptr);
		}

	};

