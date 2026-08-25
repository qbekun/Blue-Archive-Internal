#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionReference; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x9E59EE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9E598B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_OFFSET UNITYSDK_OFFSET(0x9E59EF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_OFFSET UNITYSDK_OFFSET(0x9E5A190)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E5A010)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E5A480)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E5A3D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TODISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E5A820)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E5A860)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_CREATE_OFFSET UNITYSDK_OFFSET(0x9E5A870)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9E5A8D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E5A8E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionReference_TypeDefinitionIndex = 28411;

	class InputActionReference : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x18
		::System::String* m_ActionId; // 0x20
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x28

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return (return (::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ASSET_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Void Set(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SET_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void SetInternal(::UnityEngine::InputSystem::InputActionAsset* arg, ::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_SETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* GetDisplayName(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_GETDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* ToDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TODISPLAYNAME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* op_Implicit(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* Create(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* ToInputAction()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_TOINPUTACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREFERENCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

