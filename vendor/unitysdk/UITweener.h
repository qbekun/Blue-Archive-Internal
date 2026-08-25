#pragma once
#include "unitysdk.h"

class UITweener;
class Method;
class Style;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace AnimationOrTween { class Direction; }
class Callback;
class EventDelegate;

#define UITWEENER_GET_AMOUNTPERDELTA_OFFSET UNITYSDK_OFFSET(0x21BF860)
#define UITWEENER_GET_TWEENFACTOR_OFFSET UNITYSDK_OFFSET(0x21BF8D0)
#define UITWEENER_SET_TWEENFACTOR_OFFSET UNITYSDK_OFFSET(0x21BF8E0)
#define UITWEENER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x21BF920)
#define UITWEENER_RESET_OFFSET UNITYSDK_OFFSET(0x21BF9A0)
#define UITWEENER_START_OFFSET UNITYSDK_OFFSET(0x21BF9E0)
#define UITWEENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x21BFF50)
#define UITWEENER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x21BFF60)
#define UITWEENER_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x21BF9F0)
#define UITWEENER_SETONFINISHED_OFFSET UNITYSDK_OFFSET(0x21BFF70)
#define UITWEENER_SETONFINISHED_OFFSET UNITYSDK_OFFSET(0x21BFFD0)
#define UITWEENER_ADDONFINISHED_OFFSET UNITYSDK_OFFSET(0x21C0030)
#define UITWEENER_ADDONFINISHED_OFFSET UNITYSDK_OFFSET(0x21C0090)
#define UITWEENER_REMOVEONFINISHED_OFFSET UNITYSDK_OFFSET(0x21C00F0)
#define UITWEENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21C0160)
#define UITWEENER_FINISH_OFFSET UNITYSDK_OFFSET(0x21C0170)
#define UITWEENER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x21BCBB0)
#define UITWEENER_BOUNCELOGIC_OFFSET UNITYSDK_OFFSET(0x21C01D0)
#define UITWEENER_PLAY_OFFSET UNITYSDK_OFFSET(0x21C0270)
#define UITWEENER_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x21C0290)
#define UITWEENER_PLAYREVERSE_OFFSET UNITYSDK_OFFSET(0x21C02B0)
#define UITWEENER_PLAY_OFFSET UNITYSDK_OFFSET(0x21C02D0)
#define UITWEENER_RESETTOBEGINNING_OFFSET UNITYSDK_OFFSET(0x21C03A0)
#define UITWEENER_TOGGLE_OFFSET UNITYSDK_OFFSET(0x21C0450)
#define UITWEENER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITWEENER_BEGIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UITWEENER_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21C0550)
#define UITWEENER_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21C0560)
#define UITWEENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21C0570)
#define UITWEENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BC730)

	inline static constexpr unsigned int UITweener_TypeDefinitionIndex = 180;

	class UITweener : public Il2CppObject
	{
	public:
		UITweener* current; // 0x0
		Method* method; // 0x18
		Style* style; // 0x1C
		::UnityEngine::AnimationCurve* animationCurve; // 0x20
		::System::Boolean ignoreTimeScale; // 0x28
		::System::Single delay; // 0x2C
		::System::Single duration; // 0x30
		::System::Boolean steeperCurves; // 0x34
		::System::Int32 tweenGroup; // 0x38
		::System::Boolean useFixedUpdate; // 0x3C
		Il2CppObject* onFinished; // 0x40
		::UnityEngine::GameObject* eventReceiver; // 0x48
		::System::String* callWhenFinished; // 0x50
		::System::Single timeScale; // 0x58
		::System::Boolean mStarted; // 0x5C
		::System::Single mStartTime; // 0x60
		::System::Single mDuration; // 0x64
		::System::Single mAmountPerDelta; // 0x68
		::System::Single mFactor; // 0x6C
		Il2CppObject* mTemp; // 0x70
		::System::Boolean ResetOnReEnable; // 0x78
		::System::Boolean isStyleOnceFinished; // 0x79

		::System::Single get_amountPerDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_GET_AMOUNTPERDELTA_OFFSET))(nullptr);
		}

		::System::Single get_tweenFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_GET_TWEENFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_tweenFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_SET_TWEENFACTOR_OFFSET))(arg, nullptr);
		}

		::AnimationOrTween::Direction* get_direction()
		{
			return ((::AnimationOrTween::Direction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_RESET_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void DoUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_DOUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetOnFinished(Callback* arg)
		{
			((::System::Void(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_SETONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnFinished(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_SETONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void AddOnFinished(Callback* arg)
		{
			((::System::Void(*)(Callback*, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_ADDONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void AddOnFinished(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_ADDONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveOnFinished(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_REMOVEONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_FINISH_OFFSET))(nullptr);
		}

		::System::Void Sample(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_SAMPLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single BounceLogic(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_BOUNCELOGIC_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_PLAY_OFFSET))(nullptr);
		}

		::System::Void PlayForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_PLAYFORWARD_OFFSET))(nullptr);
		}

		::System::Void PlayReverse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_PLAYREVERSE_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void ResetToBeginning()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_RESETTOBEGINNING_OFFSET))(nullptr);
		}

		::System::Void Toggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_TOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITWEENER_.CTOR_OFFSET))(nullptr);
		}

	};

