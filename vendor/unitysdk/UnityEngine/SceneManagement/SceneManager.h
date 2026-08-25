#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }
namespace UnityEngine::SceneManagement { class LoadSceneParameters; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine::SceneManagement { class Scene&; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET UNITYSDK_OFFSET(0xA24BFB0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0xA24BFF0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_OFFSET UNITYSDK_OFFSET(0xA24C0D0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET UNITYSDK_OFFSET(0xA24C1A0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24C280)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET UNITYSDK_OFFSET(0xA24C350)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_OFFSET UNITYSDK_OFFSET(0xA24C420)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADFIRSTSCENE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA24C4F0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET UNITYSDK_OFFSET(0xA24C570)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET UNITYSDK_OFFSET(0xA24C660)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0xA24C750)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0xA24C840)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0xA24C930)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0xA24CA20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0xA24CB10)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0xA24CB70)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0xA24CC90)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0xA24CD40)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0xA24CDA0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET UNITYSDK_OFFSET(0xA24CE80)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0xA24CF40)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0xA24D000)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA24D0C0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA24C090)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA24C160)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA24C240)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNCINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA24C310)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA24C4B0)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManager_TypeDefinitionIndex = 31313;

	class SceneManager : public Il2CppObject
	{
	public:
		::System::Boolean s_AllowLoadScene; // 0x0
		Il2CppObject* sceneLoaded; // 0x8
		Il2CppObject* sceneUnloaded; // 0x10
		Il2CppObject* activeSceneChanged; // 0x18

		::System::Int32 get_sceneCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GET_SCENECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::SceneManagement::Scene* GetActiveScene()
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_OFFSET))(nullptr);
		}

		::System::Boolean SetActiveScene(::UnityEngine::SceneManagement::Scene* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* GetSceneAt(::System::Int32 arg)
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNCINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::System::String* str, ::System::Int32 arg, ::UnityEngine::SceneManagement::LoadSceneParameters* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNCNAMEINDEXINTERNAL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void MoveGameObjectToScene(::UnityEngine::GameObject* arg, ::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* LoadFirstScene_Internal(::System::Boolean arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADFIRSTSCENE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_sceneLoaded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENELOADED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_sceneLoaded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENELOADED_OFFSET))(arg, nullptr);
		}

		::System::Void add_sceneUnloaded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_SCENEUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_sceneUnloaded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_SCENEUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void add_activeSceneChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_ADD_ACTIVESCENECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_activeSceneChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_REMOVE_ACTIVESCENECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void LoadScene(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET))(str, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* LoadScene(::System::String* str, ::UnityEngine::SceneManagement::LoadSceneParameters* arg)
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* LoadSceneAsync(::System::String* str)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET))(str, nullptr);
		}

		::UnityEngine::AsyncOperation* LoadSceneAsync(::System::String* str, ::UnityEngine::SceneManagement::LoadSceneParameters* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::UnityEngine::SceneManagement::LoadSceneParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_LOADSCENEASYNC_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_SCENEUNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_INTERNAL_ACTIVESCENECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetActiveScene_Injected(::UnityEngine::SceneManagement::Scene&* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETACTIVESCENE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetActiveScene_Injected(::UnityEngine::SceneManagement::Scene&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::SceneManagement::Scene&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_SETACTIVESCENE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSceneAt_Injected(::System::Int32 arg, ::UnityEngine::SceneManagement::Scene&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::SceneManagement::Scene&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_GETSCENEAT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(::UnityEngine::SceneManagement::Scene&* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::UnityEngine::SceneManagement::Scene&*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_UNLOADSCENEASYNCINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveGameObjectToScene_Injected(::UnityEngine::GameObject* arg, ::UnityEngine::SceneManagement::Scene&* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::SceneManagement::Scene&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGER_MOVEGAMEOBJECTTOSCENE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

