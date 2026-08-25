#pragma once
#include "../../../unitysdk.h"

namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skeleton; }

#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x95E3870)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E3990)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95E39B0)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET UNITYSDK_OFFSET(0x95E3900)
#define SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x95E39E0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SkeletonAnimationPlayableHandle_TypeDefinitionIndex = 37932;

	class SkeletonAnimationPlayableHandle : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonAnimation* skeletonAnimation; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return (return (::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETONDATA_OFFSET))(nullptr);
		}

		::System::Void InitializeReference()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_INITIALIZEREFERENCE_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SKELETONANIMATIONPLAYABLEHANDLE_GET_SKELETON_OFFSET))(nullptr);
		}

	};
}

