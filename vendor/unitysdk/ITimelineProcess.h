#pragma once
#include "unitysdk.h"

namespace Mx::Timeline { class TimelineEnvironment; }

#define ITIMELINEPROCESS_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_RESUME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_GET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_GET_CHANGECAMERA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_PAUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_SET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_STOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_SETELAPSEDTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITIMELINEPROCESS_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ITimelineProcess_TypeDefinitionIndex = 3306;

	class ITimelineProcess : public Il2CppObject
	{
	public:
		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_RESUME_OFFSET))(nullptr);
		}

		::Mx::Timeline::TimelineEnvironment* get_Environment()
		{
			return ((::Mx::Timeline::TimelineEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_GET_ENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_ChangeCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_GET_CHANGECAMERA_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_PAUSE_OFFSET))(nullptr);
		}

		::System::Void set_ElapsedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_SET_ELAPSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_STOP_OFFSET))(nullptr);
		}

		::System::Void set_TimeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_SET_TIMESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void SetElapsedTimeLimit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_SETELAPSEDTIMELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_ElapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ITIMELINEPROCESS_GET_ELAPSEDTIME_OFFSET))(nullptr);
		}

	};

