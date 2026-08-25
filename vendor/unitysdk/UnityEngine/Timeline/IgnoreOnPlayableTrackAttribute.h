#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_IGNOREONPLAYABLETRACKATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB7D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IgnoreOnPlayableTrackAttribute_TypeDefinitionIndex = 36322;

	class IgnoreOnPlayableTrackAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IGNOREONPLAYABLETRACKATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

