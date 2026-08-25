#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine { class AsyncOperation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_GET_SCENE_OFFSET UNITYSDK_OFFSET(0xA0EB060)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_SET_SCENE_OFFSET UNITYSDK_OFFSET(0xA0EB070)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xA0EB080)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_ACTIVATEASYNC_OFFSET UNITYSDK_OFFSET(0xA0EB0B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0EB0E0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0EB180)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int SceneInstance_TypeDefinitionIndex = 36402;

	class SceneInstance : public Il2CppObject
	{
	public:
		::UnityEngine::SceneManagement::Scene* m_Scene; // 0x10
		::UnityEngine::AsyncOperation* m_Operation; // 0x18

		::UnityEngine::SceneManagement::Scene* get_Scene()
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_GET_SCENE_OFFSET))(nullptr);
		}

		::System::Void set_Scene(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_SET_SCENE_OFFSET))(arg, nullptr);
		}

		::System::Void Activate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_ACTIVATE_OFFSET))(nullptr);
		}

		::UnityEngine::AsyncOperation* ActivateAsync()
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_ACTIVATEASYNC_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEINSTANCE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

