#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIWidget;
class UILabel;
class UISlider;
class ShaderGaugeController;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }

#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_SETHPENABLE_OFFSET UNITYSDK_OFFSET(0xC0CD00)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0E390)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_COLERPINCREMENTGAUGE_OFFSET UNITYSDK_OFFSET(0xC0E400)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0E4A0)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC0E520)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0E5F0)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_PLAYHPENTERANI_OFFSET UNITYSDK_OFFSET(0xC0CBD0)
#define UIWORLDRAIDZONEBALLOON_HPCONTROLLER_SETHP_OFFSET UNITYSDK_OFFSET(0xC0C880)

	inline static constexpr unsigned int UIWorldRaidZoneBalloon_HpController_TypeDefinitionIndex = 8819;

	class UIWorldRaidZoneBalloon_HpController : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* HpSet; // 0x18
		UIWidget* HPSetWidget; // 0x20
		UILabel* HPRateLabel; // 0x28
		UISlider* SliderGauge; // 0x30
		ShaderGaugeController* GaugeController; // 0x38
		::UnityEngine::GameObject* GaugeObject; // 0x40
		::UnityEngine::GameObject* GaugeHandle; // 0x48
		::UnityEngine::AnimationCurve* LerpAnimationCurve; // 0x50
		::System::Single LerpAnimationDuration_EnterLobby; // 0x58
		::System::Single LerpAnimationDuration_HpDecrease; // 0x5C
		::System::Single GaugeHandleDisableBorderAngle_Left; // 0x60
		::System::Single GaugeHandleDisableBorderAngle_Right; // 0x64
		::System::Single gaugeHandleMaxLotationValue; // 0x0
		::System::Single errorRangeValue; // 0x0
		::System::Single fromFillAmount; // 0x68
		::System::Single toFillAmount; // 0x6C
		::UnityEngine::Coroutine* hpLerpCoroutine; // 0x70

		::System::Void SetHpEnable(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_SETHPENABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLerpIncrementGauge(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_COLERPINCREMENTGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayHpEnterAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_PLAYHPENTERANI_OFFSET))(nullptr);
		}

		::System::Void SetHp(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDZONEBALLOON_HPCONTROLLER_SETHP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

