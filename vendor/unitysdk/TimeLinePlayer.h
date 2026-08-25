#pragma once
#include "unitysdk.h"

class ITimelineProcess;
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }

#define TIMELINEPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x204DC60)
#define TIMELINEPLAYER_GET_ISCAMERACHANGED_OFFSET UNITYSDK_OFFSET(0x204DCB0)
#define TIMELINEPLAYER_GETTIMELINEPROCESS_OFFSET UNITYSDK_OFFSET(0x204DE20)
#define TIMELINEPLAYER_PLAYUNSCALED_OFFSET UNITYSDK_OFFSET(0x204DE90)
#define TIMELINEPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x204E1E0)
#define TIMELINEPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x204E210)
#define TIMELINEPLAYER_PLAYLOOP_OFFSET UNITYSDK_OFFSET(0x204E4A0)
#define TIMELINEPLAYER_CREATEPROCESS_OFFSET UNITYSDK_OFFSET(0x204E380)
#define TIMELINEPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x204E880)
#define TIMELINEPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x204E980)
#define TIMELINEPLAYER_RESUME_OFFSET UNITYSDK_OFFSET(0x204EA80)
#define TIMELINEPLAYER_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x204CE00)
#define TIMELINEPLAYER_CLEAR_OFFSET UNITYSDK_OFFSET(0x204EB80)
#define TIMELINEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204EDA0)

	inline static constexpr unsigned int TimeLinePlayer_TypeDefinitionIndex = 3312;

	class TimeLinePlayer : public ::ToyWebViewShared::Messages::RequestLoadHtml
	{
	public:
		Il2CppObject* timelineProcessTable; // 0x20

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCameraChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_GET_ISCAMERACHANGED_OFFSET))(nullptr);
		}

		ITimelineProcess* GetTimelineProcess(::UnityEngine::Playables::PlayableDirector* arg)
		{
			return ((ITimelineProcess*(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_GETTIMELINEPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void PlayUnscaled(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_PLAYUNSCALED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Boolean arg3, ::System::Action* arg4, ::System::Action* arg5)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_PLAY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Single arg3, ::System::Boolean arg4, ::System::Action* arg5, ::System::Action* arg6, ::System::Boolean arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Single, ::System::Boolean, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_PLAY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void PlayLoop(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Single arg3, ::System::Boolean arg4, ::System::Action* arg5, ::System::Action* arg6, ::System::Action* arg7)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Single, ::System::Boolean, ::System::Action*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_PLAYLOOP_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void CreateProcess(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Single arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Action* arg6, ::System::Action* arg7, ::System::Action* arg8, ::System::Boolean arg9, ::System::Boolean arg10)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_CREATEPROCESS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void Stop(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void Pause(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void Resume(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_RESUME_OFFSET))(arg, nullptr);
		}

		::System::Single GetTimeScale(::UnityEngine::Playables::PlayableDirector* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_GETTIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};

