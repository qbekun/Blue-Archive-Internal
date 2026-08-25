#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }

#define TIMELINEPLAYINFO_SET_LASTFRAMEACTION_OFFSET UNITYSDK_OFFSET(0xB6E450)
#define TIMELINEPLAYINFO_SET_STOPPEDACTION_OFFSET UNITYSDK_OFFSET(0xB6E460)
#define TIMELINEPLAYINFO_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xB6E470)
#define TIMELINEPLAYINFO_SET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0xB6E480)
#define TIMELINEPLAYINFO_GET_APPLYTIMESCALE_OFFSET UNITYSDK_OFFSET(0xB6E490)
#define TIMELINEPLAYINFO_GET_STOPPEDACTION_OFFSET UNITYSDK_OFFSET(0xB6E4A0)
#define TIMELINEPLAYINFO_SET_CANSKIP_OFFSET UNITYSDK_OFFSET(0xB6E4B0)
#define TIMELINEPLAYINFO_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xB6E4C0)
#define TIMELINEPLAYINFO_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xB6E4D0)
#define TIMELINEPLAYINFO_GET_LASTFRAMEACTION_OFFSET UNITYSDK_OFFSET(0xB6E4E0)
#define TIMELINEPLAYINFO_SET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0xB6E4F0)
#define TIMELINEPLAYINFO_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0xB6E500)
#define TIMELINEPLAYINFO_GET_DESTROYAFTERPLAYING_OFFSET UNITYSDK_OFFSET(0xB6E510)
#define TIMELINEPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6E520)
#define TIMELINEPLAYINFO_SET_DESTROYAFTERPLAYING_OFFSET UNITYSDK_OFFSET(0xB6E5E0)
#define TIMELINEPLAYINFO_GET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0xB6E5F0)
#define TIMELINEPLAYINFO_SET_APPLYTIMESCALE_OFFSET UNITYSDK_OFFSET(0xB6E600)

	inline static constexpr unsigned int TimelinePlayInfo_TypeDefinitionIndex = 8455;

	class TimelinePlayInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _Director_k__BackingField; // 0x10
		::UnityEngine::Playables::PlayableAsset* _Playable_k__BackingField; // 0x18
		::System::Boolean _CanSkip_k__BackingField; // 0x20
		::System::Boolean _DestroyAfterPlaying_k__BackingField; // 0x21
		::System::Boolean _PauseGame_k__BackingField; // 0x22
		::System::Boolean _ApplyTimeScale_k__BackingField; // 0x23
		::System::Action* _StoppedAction_k__BackingField; // 0x28
		::System::Action* _LastFrameAction_k__BackingField; // 0x30

		::System::Void set_LastFrameAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_LASTFRAMEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_StoppedAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_STOPPEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_CANSKIP_OFFSET))(nullptr);
		}

		::System::Void set_Playable(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_PLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_APPLYTIMESCALE_OFFSET))(nullptr);
		}

		::System::Action* get_StoppedAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_STOPPEDACTION_OFFSET))(nullptr);
		}

		::System::Void set_CanSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_CANSKIP_OFFSET))(arg, nullptr);
		}

		::System::Void set_PauseGame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_PAUSEGAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PauseGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_PAUSEGAME_OFFSET))(nullptr);
		}

		::System::Action* get_LastFrameAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_LASTFRAMEACTION_OFFSET))(nullptr);
		}

		::System::Void set_Director(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_DIRECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableAsset* get_Playable()
		{
			return ((::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_DestroyAfterPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_DESTROYAFTERPLAYING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Action* arg7, ::System::Action* arg8)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void set_DestroyAfterPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_DESTROYAFTERPLAYING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_Director()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_GET_DIRECTOR_OFFSET))(nullptr);
		}

		::System::Void set_ApplyTimeScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPLAYINFO_SET_APPLYTIMESCALE_OFFSET))(arg, nullptr);
		}

	};

