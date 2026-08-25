#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class HideFlags; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_SPINEMESH_NEWSKELETONMESH_OFFSET UNITYSDK_OFFSET(0x961C9A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineMesh_TypeDefinitionIndex = 35360;

	class SpineMesh : public Il2CppObject
	{
	public:
		::UnityEngine::HideFlags* MeshHideflags; // 0x0

		::UnityEngine::Mesh* NewSkeletonMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEMESH_NEWSKELETONMESH_OFFSET))(nullptr);
		}

	};
}

