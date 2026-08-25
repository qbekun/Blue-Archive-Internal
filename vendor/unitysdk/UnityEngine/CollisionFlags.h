#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CollisionFlags; }

namespace UnityEngine
{
	inline static constexpr unsigned int CollisionFlags_TypeDefinitionIndex = 37327;

	class CollisionFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CollisionFlags* None; // 0x0
		::UnityEngine::CollisionFlags* Sides; // 0x0
		::UnityEngine::CollisionFlags* Above; // 0x0
		::UnityEngine::CollisionFlags* Below; // 0x0
		::UnityEngine::CollisionFlags* CollidedSides; // 0x0
		::UnityEngine::CollisionFlags* CollidedAbove; // 0x0
		::UnityEngine::CollisionFlags* CollidedBelow; // 0x0

	};
}

