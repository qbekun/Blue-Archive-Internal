#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class ISkeletonComponent; }

#define SPINE_UNITY_IHASSKELETONCOMPONENT_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int IHasSkeletonComponent_TypeDefinitionIndex = 35351;

	class IHasSkeletonComponent : public Il2CppObject
	{
	public:
		::Spine::Unity::ISkeletonComponent* get_SkeletonComponent()
		{
			return (return (::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_IHASSKELETONCOMPONENT_GET_SKELETONCOMPONENT_OFFSET))(nullptr);
		}

	};
}

