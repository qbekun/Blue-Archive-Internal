#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class SceneManagerAPI; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::SceneManagement { class LoadSceneParameters; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_GET_ACTIVEAPI_OFFSET UNITYSDK_OFFSET(0xA24BD80)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_GET_OVERRIDEAPI_OFFSET UNITYSDK_OFFSET(0xA24BE70)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24BEC0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_LOADSCENEASYNCBYNAMEORINDEX_OFFSET UNITYSDK_OFFSET(0xA24BED0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_LOADFIRSTSCENE_OFFSET UNITYSDK_OFFSET(0xA24BF20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA24BF30)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int SceneManagerAPI_TypeDefinitionIndex = 31312;

	class SceneManagerAPI : public Il2CppObject
	{
	public:
		::UnityEngine::SceneManagement::SceneManagerAPI* s_DefaultAPI; // 0x0
		::UnityEngine::SceneManagement::SceneManagerAPI* _overrideAPI_k__BackingField; // 0x8

		::UnityEngine::SceneManagement::SceneManagerAPI* get_ActiveAPI()
		{
			return (return (::UnityEngine::SceneManagement::SceneManagerAPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_GET_ACTIVEAPI_OFFSET))(nullptr);
		}

		::UnityEngine::SceneManagement::SceneManagerAPI* get_overrideAPI()
		{
			return (return (::UnityEngine::SceneManagement::SceneManagerAPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_GET_OVERRIDEAPI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AsyncOperation* LoadSceneAsyncByNameOrIndex(::System::String* str, ::System::Int32 arg, ::UnityEngine::SceneManagement::LoadSceneParameters* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_LOADSCENEASYNCBYNAMEORINDEX_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::UnityEngine::AsyncOperation* LoadFirstScene(::System::Boolean arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_LOADFIRSTSCENE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENEMANAGERAPI_.CCTOR_OFFSET))(nullptr);
		}

	};
}

