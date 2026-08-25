#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }

#define SPINE_UNITY_IHASSKELETONRENDERER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int IHasSkeletonRenderer_TypeDefinitionIndex = 35350;

	class IHasSkeletonRenderer : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return (return (::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_IHASSKELETONRENDERER_GET_SKELETONRENDERER_OFFSET))(nullptr);
		}

	};
}

