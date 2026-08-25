#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace Mx::Timeline { class TimelineEnvironment; }
namespace UnityEngine { class Coroutine; }

#define TIMELINEPROCESS_REMOVE_LOOPEDACTION_OFFSET UNITYSDK_OFFSET(0x204F890)
#define TIMELINEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x204E4F0)
#define TIMELINEPROCESS_PAUSE_OFFSET UNITYSDK_OFFSET(0x204F9A0)
#define TIMELINEPROCESS_GET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x204F9B0)
#define TIMELINEPROCESS_SET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x204F9C0)
#define TIMELINEPROCESS_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x204F9D0)
#define TIMELINEPROCESS_REMOVE_STOPPEDACTION_OFFSET UNITYSDK_OFFSET(0x204F9E0)
#define TIMELINEPROCESS_RESUME_OFFSET UNITYSDK_OFFSET(0x204FA80)
#define TIMELINEPROCESS_CLEAR_OFFSET UNITYSDK_OFFSET(0x204FA90)
#define TIMELINEPROCESS_ADD_LASTFRAMEACTION_OFFSET UNITYSDK_OFFSET(0x204FBE0)
#define TIMELINEPROCESS_GET_STOPPED_OFFSET UNITYSDK_OFFSET(0x204FC80)
#define TIMELINEPROCESS_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x204FC90)
#define TIMELINEPROCESS_SET_PAUSED_OFFSET UNITYSDK_OFFSET(0x204FCA0)
#define TIMELINEPROCESS_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x204FCB0)
#define TIMELINEPROCESS_GET_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x204FCC0)
#define TIMELINEPROCESS_SET_STOPPED_OFFSET UNITYSDK_OFFSET(0x204FCE0)
#define TIMELINEPROCESS_COPLAY_OFFSET UNITYSDK_OFFSET(0x204F930)
#define TIMELINEPROCESS_SETELAPSEDTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x204FD10)
#define TIMELINEPROCESS_ADD_STOPPEDACTION_OFFSET UNITYSDK_OFFSET(0x204FD30)
#define TIMELINEPROCESS_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x204FDD0)
#define TIMELINEPROCESS_ADD_LOOPEDACTION_OFFSET UNITYSDK_OFFSET(0x204FDE0)
#define TIMELINEPROCESS_REMOVE_LASTFRAMEACTION_OFFSET UNITYSDK_OFFSET(0x204FE80)
#define TIMELINEPROCESS_STOP_OFFSET UNITYSDK_OFFSET(0x204FF20)

	inline static constexpr unsigned int TimelineProcess_TypeDefinitionIndex = 3310;

	class TimelineProcess : public Il2CppObject
	{
	public:
		::System::Single timelineFrameTime; // 0x0
		::System::Action* loopedAction; // 0x10
		::System::Action* stoppedAction; // 0x18
		::System::Action* lastFrameAction; // 0x20
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x28
		::UnityEngine::Playables::PlayableAsset* playableAsset; // 0x30
		::Mx::Timeline::TimelineEnvironment* environment; // 0x38
		::System::Boolean loop; // 0x40
		::System::Boolean forceEnablePostProcessing; // 0x41
		::System::Boolean isCutIn; // 0x42
		::System::Single elapsedTime; // 0x44
		::UnityEngine::Coroutine* playCoroutine; // 0x48
		::System::Single _ElapsedTime_k__BackingField; // 0x50
		::System::Single elapsedTimeLimit; // 0x54
		::System::Single _TimeScale_k__BackingField; // 0x58
		::System::Boolean _Paused_k__BackingField; // 0x5C
		::System::Boolean _Stopped_k__BackingField; // 0x5D
		::System::Single duration; // 0x60

		::System::Void remove_loopedAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_REMOVE_LOOPEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Single arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Action* arg6, ::System::Action* arg7, ::System::Action* arg8, ::System::Boolean arg9, ::System::Boolean arg10)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_PAUSE_OFFSET))(nullptr);
		}

		::Mx::Timeline::TimelineEnvironment* get_Environment()
		{
			return ((::Mx::Timeline::TimelineEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_GET_ENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Void set_ElapsedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_SET_ELAPSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_TimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_SET_TIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_stoppedAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_REMOVE_STOPPEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_RESUME_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void add_lastFrameAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_ADD_LASTFRAMEACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Stopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_GET_STOPPED_OFFSET))(nullptr);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Void set_Paused(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_SET_PAUSED_OFFSET))(arg, nullptr);
		}

		::System::Single get_ElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_GET_ELAPSEDTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_ChangeCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_GET_CHANGECAMERA_OFFSET))(nullptr);
		}

		::System::Void set_Stopped(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_SET_STOPPED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_COPLAY_OFFSET))(nullptr);
		}

		::System::Void SetElapsedTimeLimit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_SETELAPSEDTIMELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void add_stoppedAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_ADD_STOPPEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Paused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_GET_PAUSED_OFFSET))(nullptr);
		}

		::System::Void add_loopedAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_ADD_LOOPEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_lastFrameAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_REMOVE_LASTFRAMEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEPROCESS_STOP_OFFSET))(nullptr);
		}

	};

