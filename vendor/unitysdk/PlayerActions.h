#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class DefaultInputActions; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputAction; }

#define PLAYERACTIONS_SETCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9F137D0)
#define PLAYERACTIONS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F14480)
#define PLAYERACTIONS_GET_OFFSET UNITYSDK_OFFSET(0x9F144A0)
#define PLAYERACTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F144C0)
#define PLAYERACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0x9F144D0)
#define PLAYERACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0x9F14500)
#define PLAYERACTIONS_GET_FIRE_OFFSET UNITYSDK_OFFSET(0x9F14460)
#define PLAYERACTIONS_GET_LOOK_OFFSET UNITYSDK_OFFSET(0x9F14440)
#define PLAYERACTIONS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9F14530)
#define PLAYERACTIONS_GET_MOVE_OFFSET UNITYSDK_OFFSET(0x9F14420)

	inline static constexpr unsigned int PlayerActions_TypeDefinitionIndex = 28553;

	class PlayerActions : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper; // 0x10

		::System::Void SetCallbacks(IPlayerActions* arg)
		{
			((::System::Void(*)(IPlayerActions*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_SETCALLBACKS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* op_Implicit(PlayerActions* arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(PlayerActions*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* Get()
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_GET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::DefaultInputActions* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::DefaultInputActions*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_DISABLE_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_ENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Fire()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_GET_FIRE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Look()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_GET_LOOK_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_GET_ENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Move()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERACTIONS_GET_MOVE_OFFSET))(nullptr);
		}

	};

