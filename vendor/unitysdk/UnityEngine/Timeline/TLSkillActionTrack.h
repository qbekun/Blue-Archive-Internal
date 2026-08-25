#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TLSKILLACTIONTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE01D0)
#define UNITYENGINE_TIMELINE_TLSKILLACTIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xDE0220)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TLSkillActionTrack_TypeDefinitionIndex = 10128;

	class TLSkillActionTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TLSKILLACTIONTRACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TLSKILLACTIONTRACK_ONCREATECLIP_OFFSET))(arg, nullptr);
		}

	};
}

