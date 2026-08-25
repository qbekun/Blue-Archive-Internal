#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSEXTRAPOLATION_OFFSET UNITYSDK_OFFSET(0xA1A03C0)
#define UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASANY_OFFSET UNITYSDK_OFFSET(0xA190F50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineClipCapsExtensions_TypeDefinitionIndex = 36276;

	class TimelineClipCapsExtensions : public Il2CppObject
	{
	public:
		::System::Boolean SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_SUPPORTSEXTRAPOLATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasAny(::UnityEngine::Timeline::ClipCaps* arg, ::UnityEngine::Timeline::ClipCaps* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::ClipCaps*, ::UnityEngine::Timeline::ClipCaps*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECLIPCAPSEXTENSIONS_HASANY_OFFSET))(arg, arg, nullptr);
		}

	};
}

