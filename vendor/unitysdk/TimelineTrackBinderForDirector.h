#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
class TimelineTrackBinderForScene;

#define TIMELINETRACKBINDERFORDIRECTOR_APPLYTRACKBINDINGS_OFFSET UNITYSDK_OFFSET(0x20C4910)
#define TIMELINETRACKBINDERFORDIRECTOR_GETSCENEBINDER_OFFSET UNITYSDK_OFFSET(0x20C4B20)
#define TIMELINETRACKBINDERFORDIRECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C4CB0)
#define TIMELINETRACKBINDERFORDIRECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x20C4CC0)

	inline static constexpr unsigned int TimelineTrackBinderForDirector_TypeDefinitionIndex = 3661;

	class TimelineTrackBinderForDirector : public Il2CppObject
	{
	public:
		Il2CppObject* trackBindings; // 0x18
		::UnityEngine::Playables::PlayableDirector* director; // 0x20

		::System::Void ApplyTrackBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINETRACKBINDERFORDIRECTOR_APPLYTRACKBINDINGS_OFFSET))(nullptr);
		}

		TimelineTrackBinderForScene* GetSceneBinder()
		{
			return ((TimelineTrackBinderForScene*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINETRACKBINDERFORDIRECTOR_GETSCENEBINDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINETRACKBINDERFORDIRECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINETRACKBINDERFORDIRECTOR_AWAKE_OFFSET))(nullptr);
		}

	};

