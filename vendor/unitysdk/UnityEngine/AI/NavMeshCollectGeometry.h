#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class NavMeshCollectGeometry; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshCollectGeometry_TypeDefinitionIndex = 37506;

	class NavMeshCollectGeometry : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::NavMeshCollectGeometry* RenderMeshes; // 0x0
		::UnityEngine::AI::NavMeshCollectGeometry* PhysicsColliders; // 0x0

	};
}

