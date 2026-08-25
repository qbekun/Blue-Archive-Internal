#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine::SceneManagement { class LocalPhysicsMode; }

#define UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS_SET_LOADSCENEMODE_OFFSET UNITYSDK_OFFSET(0xA24D100)
#define UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24CB60)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int LoadSceneParameters_TypeDefinitionIndex = 31316;

	class LoadSceneParameters : public Il2CppObject
	{
	public:
		::UnityEngine::SceneManagement::LoadSceneMode* m_LoadSceneMode; // 0x10
		::UnityEngine::SceneManagement::LocalPhysicsMode* m_LocalPhysicsMode; // 0x14

		::System::Void set_loadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS_SET_LOADSCENEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_LOADSCENEPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

