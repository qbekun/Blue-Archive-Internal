#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace Mx::Timeline { class TimelineEnvironment; }

#define UNSCALEDTIMELINEPROCESS__.CTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x204EE50)
#define UNSCALEDTIMELINEPROCESS_PAUSE_OFFSET UNITYSDK_OFFSET(0x204EE80)
#define UNSCALEDTIMELINEPROCESS_GET_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x204EF40)
#define UNSCALEDTIMELINEPROCESS_CLEAR_OFFSET UNITYSDK_OFFSET(0x204EF50)
#define UNSCALEDTIMELINEPROCESS_LOCKBYTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x204F090)
#define UNSCALEDTIMELINEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x204DF20)
#define UNSCALEDTIMELINEPROCESS_SET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x204F360)
#define UNSCALEDTIMELINEPROCESS_RESUME_OFFSET UNITYSDK_OFFSET(0x204F370)
#define UNSCALEDTIMELINEPROCESS_SET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x204F450)
#define UNSCALEDTIMELINEPROCESS_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x204F1D0)
#define UNSCALEDTIMELINEPROCESS_GET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x204F480)
#define UNSCALEDTIMELINEPROCESS_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x204F0C0)
#define UNSCALEDTIMELINEPROCESS_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x204F490)
#define UNSCALEDTIMELINEPROCESS_COPLAY_OFFSET UNITYSDK_OFFSET(0x204F2F0)
#define UNSCALEDTIMELINEPROCESS_SETELAPSEDTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x204F4E0)
#define UNSCALEDTIMELINEPROCESS_STOP_OFFSET UNITYSDK_OFFSET(0x204F550)
#define UNSCALEDTIMELINEPROCESS__.CTOR_B__19_1_OFFSET UNITYSDK_OFFSET(0x204F570)

	inline static constexpr unsigned int UnscaledTimelineProcess_TypeDefinitionIndex = 3308;

	class UnscaledTimelineProcess : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x10
		::UnityEngine::Playables::PlayableAsset* playableAsset; // 0x18
		::Mx::Timeline::TimelineEnvironment* _Environment_k__BackingField; // 0x20
		::System::Single elapsedTimeLimit; // 0x28
		::System::Boolean isTimeLockedByTimeLimit; // 0x2C
		::System::Single lockedTimeScaleByTimeLimit; // 0x30
		::System::Double lastLogTime; // 0x38
		::System::Single innerTimeScale; // 0x40

		::System::Void _.ctor_b__19_0(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS__.CTOR_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_PAUSE_OFFSET))(nullptr);
		}

		::System::Boolean get_ChangeCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_GET_CHANGECAMERA_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void LockByTimeLimit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_LOCKBYTIMELIMIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Environment(::Mx::Timeline::TimelineEnvironment* arg)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_SET_ENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_RESUME_OFFSET))(nullptr);
		}

		::System::Void set_ElapsedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_SET_ELAPSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_TimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_SET_TIMESCALE_OFFSET))(arg, nullptr);
		}

		::Mx::Timeline::TimelineEnvironment* get_Environment()
		{
			return ((::Mx::Timeline::TimelineEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_GET_ENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Single get_ElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_GET_ELAPSEDTIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_COPLAY_OFFSET))(nullptr);
		}

		::System::Void SetElapsedTimeLimit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_SETELAPSEDTIMELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS_STOP_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__19_1(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPROCESS__.CTOR_B__19_1_OFFSET))(arg, nullptr);
		}

	};

