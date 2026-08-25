#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class LoadSceneMode; }

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LoadSceneMode_TypeDefinitionIndex = 31314;

	class LoadSceneMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SceneManagement::LoadSceneMode* Single; // 0x0
		::UnityEngine::SceneManagement::LoadSceneMode* Additive; // 0x0

	};
}

