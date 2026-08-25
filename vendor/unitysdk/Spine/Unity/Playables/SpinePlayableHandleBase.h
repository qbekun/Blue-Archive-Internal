#pragma once
#include "../../../unitysdk.h"

namespace Spine::Unity::Playables { class SpineEventDelegate; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skeleton; }

#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x95E3CA0)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_REMOVE_ANIMATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x95E3D20)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_ADD_ANIMATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x95E3DC0)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E39A0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpinePlayableHandleBase_TypeDefinitionIndex = 37935;

	class SpinePlayableHandleBase : public Il2CppObject
	{
	public:
		::Spine::Unity::Playables::SpineEventDelegate* AnimationEvents; // 0x18

		::System::Void HandleEvents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_HANDLEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void remove_AnimationEvents(::Spine::Unity::Playables::SpineEventDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::Playables::SpineEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_REMOVE_ANIMATIONEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void add_AnimationEvents(::Spine::Unity::Playables::SpineEventDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::Playables::SpineEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_ADD_ANIMATIONEVENTS_OFFSET))(arg, nullptr);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return (return (::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_GET_SKELETONDATA_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_GET_SKELETON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

