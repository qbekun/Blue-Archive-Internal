#pragma once
#include "unitysdk.h"

class UIButton;
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }
class UnscaledTimelinePlayInfo;
class TimelinePlayInfo;

#define UITIMELINEPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6CC60)
#define UITIMELINEPLAYER_INITWITHUNSCALED_OFFSET UNITYSDK_OFFSET(0xB6CD90)
#define UITIMELINEPLAYER_INITWITHUNSCALED_OFFSET UNITYSDK_OFFSET(0xB6CE40)
#define UITIMELINEPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6D3F0)
#define UITIMELINEPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6D4D0)
#define UITIMELINEPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0xB6CF10)
#define UITIMELINEPLAYER_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xB6D820)
#define UITIMELINEPLAYER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xB6DB60)
#define UITIMELINEPLAYER_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xB6DF60)
#define UITIMELINEPLAYER_ONCANNOTSKIP_OFFSET UNITYSDK_OFFSET(0xB6DF80)
#define UITIMELINEPLAYER_ONSKIPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xB6DC80)
#define UITIMELINEPLAYER_ONCLICKSKIPOK_OFFSET UNITYSDK_OFFSET(0xB6E070)
#define UITIMELINEPLAYER_ONCLICKSKIPCANCEL_OFFSET UNITYSDK_OFFSET(0xB6E270)
#define UITIMELINEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6E3B0)
#define UITIMELINEPLAYER__PLAY_B__15_0_OFFSET UNITYSDK_OFFSET(0xB6E430)
#define UITIMELINEPLAYER__PLAY_B__15_1_OFFSET UNITYSDK_OFFSET(0xB6E440)

	inline static constexpr unsigned int UITimelinePlayer_TypeDefinitionIndex = 8458;

	class UITimelinePlayer : public Il2CppObject
	{
	public:
		UIButton* skipButton; // 0xD8
		::UnityEngine::Playables::PlayableDirector* director; // 0xE0
		::System::Boolean canSkip; // 0xE8
		::System::Boolean pauseGame; // 0xE9
		::System::Boolean applyTimeScale; // 0xEA
		::System::Single timelineTimeScale; // 0xEC
		::System::Action* stoppedAction; // 0xF0
		Il2CppObject* timelines; // 0xF8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitWithUnscaled(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Action* arg6)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_INITWITHUNSCALED_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void InitWithUnscaled(UnscaledTimelinePlayInfo* arg)
		{
			((::System::Void(*)(UnscaledTimelinePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_INITWITHUNSCALED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Action* arg7, ::System::Action* arg8)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void Initialize(TimelinePlayInfo* arg)
		{
			((::System::Void(*)(TimelinePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Play(TimelinePlayInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(TimelinePlayInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnStopped()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONSTOPPED_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnCanNotSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONCANNOTSKIP_OFFSET))(nullptr);
		}

		::System::Void OnSkipButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONSKIPBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnClickSkipOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONCLICKSKIPOK_OFFSET))(nullptr);
		}

		::System::Void OnClickSkipCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_ONCLICKSKIPCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Play_b__15_0(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER__PLAY_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Play_b__15_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMELINEPLAYER__PLAY_B__15_1_OFFSET))(nullptr);
		}

	};

