#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class ClipCaps; }

#define UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ITimelineClipAsset_TypeDefinitionIndex = 36328;

	class ITimelineClipAsset : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};
}

