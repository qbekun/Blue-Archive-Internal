#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_PLAYABLETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xA1AB5A0)
#define UNITYENGINE_TIMELINE_PLAYABLETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB650)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PlayableTrack_TypeDefinitionIndex = 36316;

	class PlayableTrack : public Il2CppObject
	{
	public:
		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PLAYABLETRACK_ONCREATECLIP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PLAYABLETRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

