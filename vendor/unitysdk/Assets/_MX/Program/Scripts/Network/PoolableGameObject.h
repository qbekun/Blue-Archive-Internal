#pragma once
#include "../../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class GameObjectLifecycle; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace Assets::_MX::Program::Scripts::Network { class PoolableGameObject; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2B4C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_SPAWN_OFFSET UNITYSDK_OFFSET(0xE2B500)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0xE2BA40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_GET_GO_OFFSET UNITYSDK_OFFSET(0xE2BB10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_DESPAWN_OFFSET UNITYSDK_OFFSET(0xE2BB20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE2B780)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_GET_LIFECYCLE_OFFSET UNITYSDK_OFFSET(0xE2BDE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_INITCHILD_OFFSET UNITYSDK_OFFSET(0xE2B850)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_SET_GO_OFFSET UNITYSDK_OFFSET(0xE2BDF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_RELEASE_OFFSET UNITYSDK_OFFSET(0xE2BE00)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int PoolableGameObject_TypeDefinitionIndex = 10429;

	class PoolableGameObject : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _go_k__BackingField; // 0x10
		::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* _lifeCycle_k__BackingField; // 0x18

		::System::Void .ctor(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Spawn(::UnityEngine::GameObject* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Quaternion* arg3, ::UnityEngine::Vector3* arg4)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_SPAWN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::PoolableGameObject* Create(::UnityEngine::GameObject* arg, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* arg2)
		{
			return ((::Assets::_MX::Program::Scripts::Network::PoolableGameObject*(*)(::UnityEngine::GameObject*, ::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* get_go()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_GET_GO_OFFSET))(nullptr);
		}

		::System::Void Despawn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_DESPAWN_OFFSET))(nullptr);
		}

		::System::Void InitTransform(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_INITTRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle* get_lifeCycle()
		{
			return ((::Assets::_MX::Program::Scripts::Network::GameObjectLifecycle*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_GET_LIFECYCLE_OFFSET))(nullptr);
		}

		::System::Void InitChild(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_INITCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_go(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_SET_GO_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLEGAMEOBJECT_RELEASE_OFFSET))(nullptr);
		}

	};
}

