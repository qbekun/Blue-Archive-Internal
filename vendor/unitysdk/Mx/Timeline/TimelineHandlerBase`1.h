#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace Mx::Timeline { class TimelineHandleMessage; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_TIMELINE_TIMELINEHANDLERBASE`1_SET_ONPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_SET_ONSTOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1__ONSTOPPED_G__RELEASE|18_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_SET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_PLAYTIMELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_ONTIMELINESKIPPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_GET_ONPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_GET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_GET_ONSTOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_TIMELINE_TIMELINEHANDLERBASE`1_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineHandlerBase`1_TypeDefinitionIndex = 10376;

	class TimelineHandlerBase`1 : public Il2CppObject
	{
	public:
		Il2CppObject* timelineHandleMessage; // 0x0
		::UnityEngine::Playables::PlayableDirector* _Director_k__BackingField; // 0x0
		Il2CppObject* _OnPlayTimeline_k__BackingField; // 0x0
		Il2CppObject* _OnStopTimeline_k__BackingField; // 0x0

		::System::Void set_OnPlayTimeline(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_SET_ONPLAYTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnStopTimeline(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_SET_ONSTOPTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnStopped_g__Release|18_0(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1__ONSTOPPED_G__RELEASE|18_0_OFFSET))(str, nullptr);
		}

		::System::Void set_Director(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_SET_DIRECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTimelineInternal(::Mx::Timeline::TimelineHandleMessage* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineHandleMessage*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_PLAYTIMELINEINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean OnTimelineSkipped(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_ONTIMELINESKIPPED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_ONDISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnPlayTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_GET_ONPLAYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void OnStopped()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_ONSTOPPED_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_Director()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_GET_DIRECTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_ONDESTROY_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnStopTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_GET_ONSTOPTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean PlayTimeline(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEHANDLERBASE`1_PLAYTIMELINE_OFFSET))(arg, nullptr);
		}

	};
}

