#pragma once
#include "unitysdk.h"

class UISprite;
namespace UnityEngine { class Animation; }
class UITweener;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Logic::Skills::LogicEffects { class ExSkillCardRedrawGaugeEffect; }
class SliderModifier;
class ManageUIWidgets;

#define EXSKILLCARDREDRAWGAUGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25E7610)
#define EXSKILLCARDREDRAWGAUGE_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x25E7AC0)
#define EXSKILLCARDREDRAWGAUGE_SETNEXTGAUGEFILL_OFFSET UNITYSDK_OFFSET(0x25E8340)
#define EXSKILLCARDREDRAWGAUGE_ONEXSKILLCARDREDRAWGAUGEEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x25E7D60)
#define EXSKILLCARDREDRAWGAUGE_CLOSE_OFFSET UNITYSDK_OFFSET(0x25E8500)
#define EXSKILLCARDREDRAWGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E8610)
#define EXSKILLCARDREDRAWGAUGE_CO_CLOSE_OFFSET UNITYSDK_OFFSET(0x25E85A0)
#define EXSKILLCARDREDRAWGAUGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25E86C0)
#define EXSKILLCARDREDRAWGAUGE_CHANGEGAUGE_OFFSET UNITYSDK_OFFSET(0x25E87B0)
#define EXSKILLCARDREDRAWGAUGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x25E8830)
#define EXSKILLCARDREDRAWGAUGE_PLAYGAUGEFULLEFFECT_OFFSET UNITYSDK_OFFSET(0x25E9030)
#define EXSKILLCARDREDRAWGAUGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25E9200)
#define EXSKILLCARDREDRAWGAUGE_OPEN_OFFSET UNITYSDK_OFFSET(0x25E9340)
#define EXSKILLCARDREDRAWGAUGE_INITIALIZEDEPTHMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x25E9420)
#define EXSKILLCARDREDRAWGAUGE_RESETGAUGEFILL_OFFSET UNITYSDK_OFFSET(0x25E7F20)
#define EXSKILLCARDREDRAWGAUGE_PLAYGAUGEFILLANIMATION_OFFSET UNITYSDK_OFFSET(0x25E88B0)

	inline static constexpr unsigned int ExSkillCardRedrawGauge_TypeDefinitionIndex = 6398;

	class ExSkillCardRedrawGauge : public Il2CppObject
	{
	public:
		UISprite* GaugeMain; // 0x18
		UISprite* GaugeSub; // 0x20
		::UnityEngine::Animation* ActivateAnimation; // 0x28
		::System::String* OpenAnimationName; // 0x30
		::System::String* CloseAnimationName; // 0x38
		::System::String* CountChangeAnimationName; // 0x40
		::System::String* CountFullAnimationName; // 0x48
		UITweener* OpenTweener; // 0x50
		::UnityEngine::GameObject* gaugeMaxObject; // 0x58
		::UnityEngine::GameObject* gaugeFullEffectPrefab; // 0x60
		::System::Single fillDuration; // 0x68
		UILabel* currentStackCount; // 0x70
		::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* redrawEffect; // 0x78
		SliderModifier* sliderModifier; // 0x80
		::System::Int64 maxGaugeValue; // 0x88
		::System::Int64 currentGaugeValueWithStackCount; // 0x90
		::System::Int64 targetGaugeValueWithStackCount; // 0x98
		::System::Int64 maxStackCountValue; // 0xA0
		::System::Int64 currentStackCountValue; // 0xA8
		::System::Int64 targetStackCountValue; // 0xB0
		::System::Boolean isPlaying; // 0xB8
		::System::Single elapsedTime; // 0xBC
		Il2CppObject* nextGaugeValue; // 0xC0
		ManageUIWidgets* addToWidgetList; // 0xC8
		ManageUIWidgets* removeFromWidgetList; // 0xD0

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnExSkillCardRedrawGaugeEffectHit(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextGaugeFill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_SETNEXTGAUGEFILL_OFFSET))(nullptr);
		}

		::System::Void OnExSkillCardRedrawGaugeEffectExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_ONEXSKILLCARDREDRAWGAUGEEFFECTEXPIRED_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Close()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_CO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ChangeGauge(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_CHANGEGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void PlayGaugeFullEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_PLAYGAUGEFULLEFFECT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_OPEN_OFFSET))(nullptr);
		}

		::System::Void InitializeDepthManagement(ManageUIWidgets* arg, ManageUIWidgets* arg2)
		{
			((::System::Void(*)(ManageUIWidgets*, ManageUIWidgets*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_INITIALIZEDEPTHMANAGEMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetGaugeFill(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_RESETGAUGEFILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayGaugeFillAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGE_PLAYGAUGEFILLANIMATION_OFFSET))(nullptr);
		}

	};

