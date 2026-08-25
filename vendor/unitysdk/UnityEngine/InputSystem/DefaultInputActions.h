#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputControlScheme; }
namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem { class InputAction&; }

#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_GAMEPADSCHEME_OFFSET UNITYSDK_OFFSET(0x9F12D20)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_XRSCHEME_OFFSET UNITYSDK_OFFSET(0x9F12DD0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F12E80)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x9F12ED0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9F12EF0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9F12F30)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x9F12F50)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_UI_OFFSET UNITYSDK_OFFSET(0x9F12F60)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0x9F12F80)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9F12FA0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_TOUCHSCHEME_OFFSET UNITYSDK_OFFSET(0x9F12FC0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9F13070)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_JOYSTICKSCHEME_OFFSET UNITYSDK_OFFSET(0x9F130C0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0x9F13170)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9F13190)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_KEYBOARDMOUSESCHEME_OFFSET UNITYSDK_OFFSET(0x9F13200)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F132B0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9F132D0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F13300)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F13700)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x9F13720)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDACTION_OFFSET UNITYSDK_OFFSET(0x9F13780)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x9F137A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DefaultInputActions_TypeDefinitionIndex = 28557;

	class DefaultInputActions : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionAsset* _asset_k__BackingField; // 0x10
		::UnityEngine::InputSystem::InputActionMap* m_Player; // 0x18
		IPlayerActions* m_PlayerActionsCallbackInterface; // 0x20
		::UnityEngine::InputSystem::InputAction* m_Player_Move; // 0x28
		::UnityEngine::InputSystem::InputAction* m_Player_Look; // 0x30
		::UnityEngine::InputSystem::InputAction* m_Player_Fire; // 0x38
		::UnityEngine::InputSystem::InputActionMap* m_UI; // 0x40
		IUIActions* m_UIActionsCallbackInterface; // 0x48
		::UnityEngine::InputSystem::InputAction* m_UI_Navigate; // 0x50
		::UnityEngine::InputSystem::InputAction* m_UI_Submit; // 0x58
		::UnityEngine::InputSystem::InputAction* m_UI_Cancel; // 0x60
		::UnityEngine::InputSystem::InputAction* m_UI_Point; // 0x68
		::UnityEngine::InputSystem::InputAction* m_UI_Click; // 0x70
		::UnityEngine::InputSystem::InputAction* m_UI_ScrollWheel; // 0x78
		::UnityEngine::InputSystem::InputAction* m_UI_MiddleClick; // 0x80
		::UnityEngine::InputSystem::InputAction* m_UI_RightClick; // 0x88
		::UnityEngine::InputSystem::InputAction* m_UI_TrackedDevicePosition; // 0x90
		::UnityEngine::InputSystem::InputAction* m_UI_TrackedDeviceOrientation; // 0x98
		::System::Int32 m_KeyboardMouseSchemeIndex; // 0xA0
		::System::Int32 m_GamepadSchemeIndex; // 0xA4
		::System::Int32 m_TouchSchemeIndex; // 0xA8
		::System::Int32 m_JoystickSchemeIndex; // 0xAC
		::System::Int32 m_XRSchemeIndex; // 0xB0

		::UnityEngine::InputSystem::InputControlScheme* get_GamepadScheme()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_GAMEPADSCHEME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* get_XRScheme()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_XRSCHEME_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISPOSE_OFFSET))(nullptr);
		}

		PlayerActions* get_Player()
		{
			return (return (PlayerActions*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Void set_devices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_DEVICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return (return (::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_ASSET_OFFSET))(nullptr);
		}

		UIActions* get_UI()
		{
			return (return (UIActions*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_UI_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISABLE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_CONTAINS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* get_TouchScheme()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_TOUCHSCHEME_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindingMask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGMASK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* get_JoystickScheme()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_JOYSTICKSCHEME_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_ENABLE_OFFSET))(nullptr);
		}

		::System::Void set_bindingMask(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_BINDINGMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* get_KeyboardMouseScheme()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_KEYBOARDMOUSESCHEME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_DEVICES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding* arg, ::UnityEngine::InputSystem::InputAction&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputBinding*, ::UnityEngine::InputSystem::InputAction&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDBINDING_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDACTION_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_controlSchemes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_CONTROLSCHEMES_OFFSET))(nullptr);
		}

	};
}

