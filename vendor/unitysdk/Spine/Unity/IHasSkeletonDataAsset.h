#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonDataAsset; }

#define SPINE_UNITY_IHASSKELETONDATAASSET_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int IHasSkeletonDataAsset_TypeDefinitionIndex = 35347;

	class IHasSkeletonDataAsset : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_IHASSKELETONDATAASSET_GET_SKELETONDATAASSET_OFFSET))(nullptr);
		}

	};
}

