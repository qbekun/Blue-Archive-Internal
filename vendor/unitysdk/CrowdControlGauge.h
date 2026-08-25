#pragma once
#include "unitysdk.h"

class UISprite;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace MX::Logic::Skills::LogicEffects { class CrowdControlGaugeEffect; }
class ManageUIWidgets;

#define CROWDCONTROLGAUGE_PLAYGAUGEFULLEFFECT_OFFSET UNITYSDK_OFFSET(0x25E0AA0)
#define CROWDCONTROLGAUGE_ADDGAUGE_OFFSET UNITYSDK_OFFSET(0x25E0C00)
#define CROWDCONTROLGAUGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25E0D20)
#define CROWDCONTROLGAUGE_CLOSE_OFFSET UNITYSDK_OFFSET(0x25E0EF0)
#define CROWDCONTROLGAUGE_RESETGAUGEFILL_OFFSET UNITYSDK_OFFSET(0x25E0E40)
#define CROWDCONTROLGAUGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25E0FE0)
#define CROWDCONTROLGAUGE_OPEN_OFFSET UNITYSDK_OFFSET(0x25E10E0)
#define CROWDCONTROLGAUGE_SETNEXTGAUGEFILL_OFFSET UNITYSDK_OFFSET(0x25E0C70)
#define CROWDCONTROLGAUGE_INITIALIZEDEPTHMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x25E1110)
#define CROWDCONTROLGAUGE_CO_CLOSE_OFFSET UNITYSDK_OFFSET(0x25E0F70)
#define CROWDCONTROLGAUGE_SETINSTANTGAUGE_OFFSET UNITYSDK_OFFSET(0x25E1170)
#define CROWDCONTROLGAUGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25E1230)
#define CROWDCONTROLGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E1320)
#define CROWDCONTROLGAUGE_PLAYGAUGEFILLANIMATION_OFFSET UNITYSDK_OFFSET(0x25E13B0)
#define CROWDCONTROLGAUGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x25E1500)
#define CROWDCONTROLGAUGE_ONCROWDCONTROLGAUGEEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x25E1580)
#define CROWDCONTROLGAUGE_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x25E1740)

	inline static constexpr unsigned int CrowdControlGauge_TypeDefinitionIndex = 6381;

	class CrowdControlGauge : public Il2CppObject
	{
	public:
		UISprite* GaugeMain; // 0x18
		UISprite* GaugeSub; // 0x20
		::UnityEngine::Animation* ActivateAnimation; // 0x28
		::System::String* OpenAnimationName; // 0x30
		::System::String* CloseAnimationName; // 0x38
		::UnityEngine::GameObject* gaugeFullEffectPrefab; // 0x40
		::System::Single fillDuration; // 0x48
		::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect* crowdControlGaugeEffect; // 0x50
		::System::Int32 maxGaugeValue; // 0x58
		::System::Int32 currentGaugeValue; // 0x5C
		::System::Int32 targetGaugeValue; // 0x60
		::System::Boolean isPlaying; // 0x64
		::System::Single elapsedTime; // 0x68
		Il2CppObject* addedValues; // 0x70
		::System::Int32 instantAddedValue; // 0x78
		ManageUIWidgets* addToWidgetList; // 0x80
		ManageUIWidgets* removeFromWidgetList; // 0x88

		::System::Void PlayGaugeFullEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_PLAYGAUGEFULLEFFECT_OFFSET))(nullptr);
		}

		::System::Void AddGauge(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_ADDGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void ResetGaugeFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_RESETGAUGEFILL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_OPEN_OFFSET))(nullptr);
		}

		::System::Void SetNextGaugeFill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_SETNEXTGAUGEFILL_OFFSET))(nullptr);
		}

		::System::Void InitializeDepthManagement(ManageUIWidgets* arg, ManageUIWidgets* arg2)
		{
			((::System::Void(*)(ManageUIWidgets*, ManageUIWidgets*, ::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_INITIALIZEDEPTHMANAGEMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_Close()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_CO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SetInstantGauge()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_SETINSTANTGAUGE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayGaugeFillAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_PLAYGAUGEFILLANIMATION_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnCrowdControlGaugeEffectExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_ONCROWDCONTROLGAUGEEFFECTEXPIRED_OFFSET))(nullptr);
		}

		::System::Void OnCrowdControlGaugeEffectHit(::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + CROWDCONTROLGAUGE_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET))(arg, nullptr);
		}

	};

