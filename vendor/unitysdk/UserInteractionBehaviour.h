#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
class UserInteractionClip;
class InteractionState;
class UIUserInteractionBase;
class ITimelineProcess;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define USERINTERACTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x2051130)
#define USERINTERACTIONBEHAVIOUR_MOVETIME_OFFSET UNITYSDK_OFFSET(0x20517A0)
#define USERINTERACTIONBEHAVIOUR_CLOSEUIANDUNLINK_OFFSET UNITYSDK_OFFSET(0x20518C0)
#define USERINTERACTIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x2051990)
#define USERINTERACTIONBEHAVIOUR_SETSPEED_OFFSET UNITYSDK_OFFSET(0x2051BF0)
#define USERINTERACTIONBEHAVIOUR_UICALLBACK_OFFSET UNITYSDK_OFFSET(0x2052030)
#define USERINTERACTIONBEHAVIOUR_AFTERLOADUI_OFFSET UNITYSDK_OFFSET(0x20525D0)
#define USERINTERACTIONBEHAVIOUR_RESTORESPEED_OFFSET UNITYSDK_OFFSET(0x20523A0)
#define USERINTERACTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x2052790)
#define USERINTERACTIONBEHAVIOUR_SETTIMELIMITIFNEED_OFFSET UNITYSDK_OFFSET(0x20516B0)
#define USERINTERACTIONBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20528C0)
#define USERINTERACTIONBEHAVIOUR_FREETIMELIMITIFNEED_OFFSET UNITYSDK_OFFSET(0x20526B0)

	inline static constexpr unsigned int UserInteractionBehaviour_TypeDefinitionIndex = 3320;

	class UserInteractionBehaviour : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* Director; // 0x10
		UserInteractionClip* Clip; // 0x18
		::System::Double clipRestartTime; // 0x20
		::System::Double clipBeforeEndTime; // 0x28
		InteractionState* interactionState; // 0x30
		::System::Single successProgress; // 0x34
		UIUserInteractionBase* uiUserInteraction; // 0x38
		ITimelineProcess* iTimelineProcess; // 0x40
		::System::Single clipStartUnscaledTime; // 0x48

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_MOVETIME_OFFSET))(arg, nullptr);
		}

		::System::Void CloseUIAndUnlink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_CLOSEUIANDUNLINK_OFFSET))(nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_SETSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void UICallBack(UIUserInteractionBase* arg, InteractionState* arg2)
		{
			((::System::Void(*)(UIUserInteractionBase*, InteractionState*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_UICALLBACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AfterLoadUI(UIUserInteractionBase* arg)
		{
			((::System::Void(*)(UIUserInteractionBase*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_AFTERLOADUI_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreSpeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_RESTORESPEED_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTimeLimitIfNeed(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_SETTIMELIMITIFNEED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FreeTimeLimitIfNeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONBEHAVIOUR_FREETIMELIMITIFNEED_OFFSET))(nullptr);
		}

	};

