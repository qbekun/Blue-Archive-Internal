#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int UnloadSceneOptions_TypeDefinitionIndex = 31317;

	class UnloadSceneOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SceneManagement::UnloadSceneOptions* None; // 0x0
		::UnityEngine::SceneManagement::UnloadSceneOptions* UnloadAllEmbeddedSceneObjects; // 0x0

	};
}

