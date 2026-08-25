#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine { class Skeleton; }

#define SPINE_UNITY_ISKELETONCOMPONENT_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ISKELETONCOMPONENT_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int ISkeletonComponent_TypeDefinitionIndex = 35348;

	class ISkeletonComponent : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONCOMPONENT_GET_SKELETONDATAASSET_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISKELETONCOMPONENT_GET_SKELETON_OFFSET))(nullptr);
		}

	};
}

