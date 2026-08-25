#pragma once
#include "unitysdk.h"

class UIPlayAnimation;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace AnimationOrTween { class Trigger; }
namespace AnimationOrTween { class Direction; }
namespace AnimationOrTween { class EnableCondition; }
namespace AnimationOrTween { class DisableCondition; }
namespace UnityEngine { class GameObject; }

#define UIPLAYANIMATION_GET_DUALSTATE_OFFSET UNITYSDK_OFFSET(0xA09830)
#define UIPLAYANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xA09840)
#define UIPLAYANIMATION_START_OFFSET UNITYSDK_OFFSET(0xA09960)
#define UIPLAYANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA09B20)
#define UIPLAYANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA09E30)
#define UIPLAYANIMATION_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA09DD0)
#define UIPLAYANIMATION_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA0A220)
#define UIPLAYANIMATION_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA0A310)
#define UIPLAYANIMATION_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0xA0A3F0)
#define UIPLAYANIMATION_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA0A4D0)
#define UIPLAYANIMATION_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0xA0A530)
#define UIPLAYANIMATION_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0xA0A6B0)
#define UIPLAYANIMATION_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0xA0A7A0)
#define UIPLAYANIMATION_ONDROP_OFFSET UNITYSDK_OFFSET(0xA0A860)
#define UIPLAYANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA0A940)
#define UIPLAYANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA09F30)
#define UIPLAYANIMATION_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0xA0A950)
#define UIPLAYANIMATION_PLAYREVERSE_OFFSET UNITYSDK_OFFSET(0xA0A960)
#define UIPLAYANIMATION_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xA0A970)
#define UIPLAYANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0AAE0)

	inline static constexpr unsigned int UIPlayAnimation_TypeDefinitionIndex = 51;

	class UIPlayAnimation : public Il2CppObject
	{
	public:
		UIPlayAnimation* current; // 0x0
		::UnityEngine::Animation* target; // 0x18
		::UnityEngine::Animator* animator; // 0x20
		::System::String* clipName; // 0x28
		::AnimationOrTween::Trigger* trigger; // 0x30
		::AnimationOrTween::Direction* playDirection; // 0x34
		::System::Boolean resetOnPlay; // 0x38
		::System::Boolean clearSelection; // 0x39
		::AnimationOrTween::EnableCondition* ifDisabledOnPlay; // 0x3C
		::AnimationOrTween::DisableCondition* disableWhenFinished; // 0x40
		Il2CppObject* onFinished; // 0x48
		::UnityEngine::GameObject* eventReceiver; // 0x50
		::System::String* callWhenFinished; // 0x58
		::System::Boolean mStarted; // 0x60
		::System::Boolean mActivated; // 0x61
		::System::Boolean dragHighlight; // 0x62

		::System::Boolean get_dualState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_GET_DUALSTATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONTOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONDRAGOVER_OFFSET))(nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void OnDrop(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_PLAYFORWARD_OFFSET))(nullptr);
		}

		::System::Void PlayReverse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_PLAYREVERSE_OFFSET))(nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYANIMATION_.CTOR_OFFSET))(nullptr);
		}

	};

