#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E66D0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x95E6720)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x95E67E0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineSkeletonFlipTrack_TypeDefinitionIndex = 37942;

	class SpineSkeletonFlipTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_CREATETRACKMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

