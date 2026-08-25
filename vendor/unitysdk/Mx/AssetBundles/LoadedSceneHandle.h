#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::SceneManagement { class Scene; }

#define MX_ASSETBUNDLES_LOADEDSCENEHANDLE_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x14464D0)
#define MX_ASSETBUNDLES_LOADEDSCENEHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14464E0)
#define MX_ASSETBUNDLES_LOADEDSCENEHANDLE_GET_ADDRESSABLEHANDLE_OFFSET UNITYSDK_OFFSET(0x1446510)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int LoadedSceneHandle_TypeDefinitionIndex = 14954;

	class LoadedSceneHandle : public Il2CppObject
	{
	public:
		::UnityEngine::SceneManagement::Scene* _Scene_k__BackingField; // 0x10
		Il2CppObject* _AddressableHandle_k__BackingField; // 0x18

		::UnityEngine::SceneManagement::Scene* get_Scene()
		{
			return ((::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_LOADEDSCENEHANDLE_GET_SCENE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::SceneManagement::Scene* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_LOADEDSCENEHANDLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_AddressableHandle()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_LOADEDSCENEHANDLE_GET_ADDRESSABLEHANDLE_OFFSET))(nullptr);
		}

	};
}

