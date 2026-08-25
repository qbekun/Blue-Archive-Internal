#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class ITimeControl; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A32E0)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA1AA060)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1AA110)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AA120)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA1AA130)
#define UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA1AA200)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeControlPlayable_TypeDefinitionIndex = 36312;

	class TimeControlPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::ITimeControl* m_timeControl; // 0x10
		::System::Boolean m_started; // 0x18

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Timeline::ITimeControl* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Timeline::ITimeControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Timeline::ITimeControl* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::ITimeControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

