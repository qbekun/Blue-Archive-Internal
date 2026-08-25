#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionType; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem { class InputControlScheme; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E5A8F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E5AAB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E5AD40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E5AEC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTION_OFFSET UNITYSDK_OFFSET(0x9E5AFD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0x9E5B5D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0x9E5B9E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5B4C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5BC00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5BAF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5BF70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C260)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C380)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C110)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C450)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E5BD60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C730)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C7F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5CAA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_OFFSET UNITYSDK_OFFSET(0x9E5CBC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_OFFSET UNITYSDK_OFFSET(0x9E5CCD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHGROUP_OFFSET UNITYSDK_OFFSET(0x9E5CE30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHPATH_OFFSET UNITYSDK_OFFSET(0x9E5CF40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5C8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGECOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9E5D050)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_RENAME_OFFSET UNITYSDK_OFFSET(0x9E5D310)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9E5D5D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9E5D8F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9E5DAC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x9E5DBF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5DF10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E110)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E1D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E2A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x9E5E3B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions_TypeDefinitionIndex = 28416;

	class InputActionSetupExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionMap* AddActionMap(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddActionMap(::UnityEngine::InputSystem::InputActionAsset* arg, ::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* arg, ::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* AddAction(::UnityEngine::InputSystem::InputActionMap* arg, ::System::String* str, ::UnityEngine::InputSystem::InputActionType* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::UnityEngine::InputSystem::InputActionType*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTION_OFFSET))(arg, str, arg, str, str, str, str, str, nullptr);
		}

		::System::Void RemoveAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAction(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_OFFSET))(arg, str, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, str, str, str, str, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputAction* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, arg, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputAction* arg, ::UnityEngine::InputSystem::InputBinding* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, arg, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputActionMap* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, str, str, str, str, str, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputActionMap* arg, ::System::String* str, ::UnityEngine::InputSystem::InputAction* arg, ::System::String* str, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, str, arg, str, str, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputActionMap* arg, ::System::String* str, ::System::Guid* arg, ::System::String* str, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::System::Guid*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, str, arg, str, str, nullptr);
		}

		BindingSyntax* AddBinding(::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputBinding* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(arg, arg, nullptr);
		}

		CompositeSyntax* AddCompositeBinding(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (CompositeSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCOMPOSITEBINDING_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Int32 AddBindingInternal(::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputBinding* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDINGINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		BindingSyntax* ChangeBinding(::UnityEngine::InputSystem::InputAction* arg, ::System::Int32 arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET))(arg, arg, nullptr);
		}

		BindingSyntax* ChangeBinding(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET))(arg, str, nullptr);
		}

		BindingSyntax* ChangeBinding(::UnityEngine::InputSystem::InputActionMap* arg, ::System::Int32 arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET))(arg, arg, nullptr);
		}

		BindingSyntax* ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_OFFSET))(arg, str, nullptr);
		}

		BindingSyntax* ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* arg, ::System::Guid* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_OFFSET))(arg, arg, nullptr);
		}

		BindingSyntax* ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHGROUP_OFFSET))(arg, str, nullptr);
		}

		BindingSyntax* ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHPATH_OFFSET))(arg, str, nullptr);
		}

		BindingSyntax* ChangeBinding(::UnityEngine::InputSystem::InputAction* arg, ::UnityEngine::InputSystem::InputBinding* arg)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET))(arg, arg, nullptr);
		}

		BindingSyntax* ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str)
		{
			return (return (BindingSyntax*(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGECOMPOSITEBINDING_OFFSET))(arg, str, nullptr);
		}

		::System::Void Rename(::UnityEngine::InputSystem::InputAction* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_RENAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* arg, ::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_OFFSET))(arg, arg, nullptr);
		}

		ControlSchemeSyntax* AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::String* str)
		{
			return (return (ControlSchemeSyntax*(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_OFFSET))(arg, str, nullptr);
		}

		::System::Void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVECONTROLSCHEME_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHBINDINGGROUP_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* WithDevice(::UnityEngine::InputSystem::InputControlScheme* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHDEVICE_OFFSET))(arg, str, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHREQUIREDDEVICE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHOPTIONALDEVICE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHREQUIREDDEVICE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::InputSystem::InputControlScheme* OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme* arg, ::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHOPTIONALDEVICE_OFFSET))(arg, str, nullptr);
		}

	};
}

