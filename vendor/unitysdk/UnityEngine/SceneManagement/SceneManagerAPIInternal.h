#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::SceneManagement { class LoadSceneParameters; }
namespace UnityEngine::SceneManagement { class LoadSceneParameters&; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24BCE0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA24BD30)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManagerAPIInternal_TypeDefinitionIndex = 31311;

	class SceneManagerAPIInternal : public Il2CppObject
	{
	public:
		::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::System::String* str, ::System::Int32 arg, ::UnityEngine::SceneManagement::LoadSceneParameters* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal_Injected(::System::String* str, ::System::Int32 arg, ::UnityEngine::SceneManagement::LoadSceneParameters&* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPIINTERNAL_LOADSCENEASYNCNAMEINDEXINTERNAL_INJECTED_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

