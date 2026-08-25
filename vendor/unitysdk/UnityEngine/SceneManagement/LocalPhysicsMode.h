#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class LocalPhysicsMode; }

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LocalPhysicsMode_TypeDefinitionIndex = 31315;

	class LocalPhysicsMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SceneManagement::LocalPhysicsMode* None; // 0x0
		::UnityEngine::SceneManagement::LocalPhysicsMode* Physics2D; // 0x0
		::UnityEngine::SceneManagement::LocalPhysicsMode* Physics3D; // 0x0

	};
}

