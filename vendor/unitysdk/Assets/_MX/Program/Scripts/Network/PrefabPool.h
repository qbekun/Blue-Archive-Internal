#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class GameObjectLifecycle; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_GET_ALLGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0xE2BED0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_RELEASEINACTIVE_OFFSET UNITYSDK_OFFSET(0xE2C2B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_ROLLCALL_OFFSET UNITYSDK_OFFSET(0xE2C460)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_PRESPAWN_OFFSET UNITYSDK_OFFSET(0xE2C6C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_RELEASEALL_OFFSET UNITYSDK_OFFSET(0xE2C990)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0xE2CE40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_DESPAWN_OFFSET UNITYSDK_OFFSET(0xE2D140)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_SPAWN_OFFSET UNITYSDK_OFFSET(0xE2C730)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_SPAWNANDACTIVATE_OFFSET UNITYSDK_OFFSET(0xE2D340)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE2D3B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_REMOVEINVALIDOBJECTS_OFFSET UNITYSDK_OFFSET(0xE2CC50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2D400)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_CONTAINS_OFFSET UNITYSDK_OFFSET(0xE2D4B0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int PrefabPool_TypeDefinitionIndex = 10433;

	class PrefabPool : public Il2CppObject
	{
	public:
		Il2CppObject* activeList; // 0x10
		Il2CppObject* inactiveList; // 0x18

		Il2CppObject* get_AllGameObjects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_GET_ALLGAMEOBJECTS_OFFSET))(nullptr);
		}

		::System::Void ReleaseInactive(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_RELEASEINACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void RollCall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_ROLLCALL_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* Prespawn(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Quaternion* arg4, ::UnityEngine::Vector3* arg5)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_PRESPAWN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ReleaseAll(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_RELEASEALL_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean Despawn(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_DESPAWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* Spawn(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Quaternion* arg4, ::UnityEngine::Vector3* arg5, ::System::Boolean arg6)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_SPAWN_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::UnityEngine::GameObject* SpawnAndActivate(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Quaternion* arg4, ::UnityEngine::Vector3* arg5)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_SPAWNANDACTIVATE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void RemoveInvalidObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_REMOVEINVALIDOBJECTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_PREFABPOOL_CONTAINS_OFFSET))(arg, nullptr);
		}

	};
}

