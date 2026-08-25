#pragma once
#include "../../../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class GameObjectLifecycle; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace Assets::_MX::Program::Scripts::Network { class PrefabPool; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_GET_OBJECTPOOLROOT_OFFSET UNITYSDK_OFFSET(0xE2BDB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_START_OFFSET UNITYSDK_OFFSET(0xE2D820)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CREATEPREFABPOOL_OFFSET UNITYSDK_OFFSET(0xE2D960)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWN_OFFSET UNITYSDK_OFFSET(0xE2D970)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWNWITHPREFABSETTING_OFFSET UNITYSDK_OFFSET(0xE2DB40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_PRESPAWN_OFFSET UNITYSDK_OFFSET(0xE2DD10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CREATEPREFABPOOL_OFFSET UNITYSDK_OFFSET(0xE2D8B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWN_OFFSET UNITYSDK_OFFSET(0xE2DA50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_PRESPAWN_OFFSET UNITYSDK_OFFSET(0xE2DDF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWNWITHPREFABSETTING_OFFSET UNITYSDK_OFFSET(0xE2DC20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWN_OFFSET UNITYSDK_OFFSET(0xE2E000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_DESPAWN_OFFSET UNITYSDK_OFFSET(0xE2E170)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_FINDPOOL_OFFSET UNITYSDK_OFFSET(0xE2E260)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CONTAINSGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE2E420)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_RELEASEALL_OFFSET UNITYSDK_OFFSET(0xE2E5E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_RELEASEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE2EEA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_RELEASEINACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE2F040)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CLEANUPALLPOOL_OFFSET UNITYSDK_OFFSET(0xE2F1D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2F3B0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int PrefabPoolingSingletonComponent_TypeDefinitionIndex = 10435;

	class PrefabPoolingSingletonComponent : public ::ToyWebViewShared::Messages::RequestCustomScheme
	{
	public:
		Il2CppObject* _prefabsToPreSpawn; // 0x20
		Il2CppObject* pathToPrefabMap; // 0x28
		Il2CppObject* prefabToPoolMap; // 0x30

		::UnityEngine::Transform* get_ObjectPoolRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_GET_OBJECTPOOLROOT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_START_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* CreatePrefabPool(::System::String* str)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CREATEPREFABPOOL_OFFSET))(str, nullptr);
		}

		::UnityEngine::GameObject* Spawn(::System::String* str, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWN_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::GameObject* SpawnWithPrefabSetting(::System::String* str, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWNWITHPREFABSETTING_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::GameObject* Prespawn(::System::String* str, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_PRESPAWN_OFFSET))(str, arg, nullptr);
		}

		::System::Void CreatePrefabPool(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CREATEPREFABPOOL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* Spawn(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWN_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* Prespawn(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_PRESPAWN_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* SpawnWithPrefabSetting(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWNWITHPREFABSETTING_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* Spawn(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Quaternion* arg4, ::UnityEngine::Vector3* arg5)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_SPAWN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean Despawn(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_DESPAWN_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::PrefabPool* FindPool(::UnityEngine::GameObject* arg)
		{
			return ((::Assets::_MX::Program::Scripts::Network::PrefabPool*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_FINDPOOL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsGameObject(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CONTAINSGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseAll(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_RELEASEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseGameObject(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_RELEASEGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseInactiveGameObject(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_RELEASEINACTIVEGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void CleanupAllPool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_CLEANUPALLPOOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOLINGSINGLETONCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

