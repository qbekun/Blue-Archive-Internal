#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class NavMeshBuildSourceShape; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildSourceShape_TypeDefinitionIndex = 37505;

	class NavMeshBuildSourceShape : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::NavMeshBuildSourceShape* Mesh; // 0x0
		::UnityEngine::AI::NavMeshBuildSourceShape* Terrain; // 0x0
		::UnityEngine::AI::NavMeshBuildSourceShape* Box; // 0x0
		::UnityEngine::AI::NavMeshBuildSourceShape* Sphere; // 0x0
		::UnityEngine::AI::NavMeshBuildSourceShape* Capsule; // 0x0
		::UnityEngine::AI::NavMeshBuildSourceShape* ModifierBox; // 0x0

	};
}

