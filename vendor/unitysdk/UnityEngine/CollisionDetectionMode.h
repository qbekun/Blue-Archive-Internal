#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CollisionDetectionMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int CollisionDetectionMode_TypeDefinitionIndex = 37329;

	class CollisionDetectionMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CollisionDetectionMode* Discrete; // 0x0
		::UnityEngine::CollisionDetectionMode* Continuous; // 0x0
		::UnityEngine::CollisionDetectionMode* ContinuousDynamic; // 0x0
		::UnityEngine::CollisionDetectionMode* ContinuousSpeculative; // 0x0

	};
}

