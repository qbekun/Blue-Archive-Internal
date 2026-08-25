#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_IPROPERTYPREVIEW_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IPropertyPreview_TypeDefinitionIndex = 36335;

	class IPropertyPreview : public Il2CppObject
	{
	public:
		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYPREVIEW_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

