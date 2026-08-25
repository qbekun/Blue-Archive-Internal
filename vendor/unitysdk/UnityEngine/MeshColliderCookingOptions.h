#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MeshColliderCookingOptions; }

namespace UnityEngine
{
	inline static constexpr unsigned int MeshColliderCookingOptions_TypeDefinitionIndex = 37323;

	class MeshColliderCookingOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::MeshColliderCookingOptions* None; // 0x0
		::UnityEngine::MeshColliderCookingOptions* InflateConvexMesh; // 0x0
		::UnityEngine::MeshColliderCookingOptions* CookForFasterSimulation; // 0x0
		::UnityEngine::MeshColliderCookingOptions* EnableMeshCleaning; // 0x0
		::UnityEngine::MeshColliderCookingOptions* WeldColocatedVertices; // 0x0
		::UnityEngine::MeshColliderCookingOptions* UseFastMidphase; // 0x0

	};
}

