#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputControlScheme&; }
namespace UnityEngine::InputSystem { class InputControlScheme; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E92380)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_BINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x9E92390)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SET_BINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x9E923A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_DEVICEREQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x9E923B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E92400)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SETNAMEANDBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x9E92520)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_FINDCONTROLSCHEMEFORDEVICES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_FINDCONTROLSCHEMEFORDEVICES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_FINDCONTROLSCHEMEFORDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SUPPORTSDEVICE_OFFSET UNITYSDK_OFFSET(0x9E925E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_PICKDEVICESFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E92740)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E92920)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E929B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E92A30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E92BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E92BE0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_TypeDefinitionIndex = 28450;

	class InputControlScheme : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::String* m_BindingGroup; // 0x18
		::Il2CppArray<::System::Object*>* m_DeviceRequirements; // 0x20

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_bindingGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_BINDINGGROUP_OFFSET))(nullptr);
		}

		::System::Void set_bindingGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SET_BINDINGGROUP_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_deviceRequirements()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GET_DEVICEREQUIREMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_.CTOR_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void SetNameAndBindingGroup(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SETNAMEANDBINDINGGROUP_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* FindControlSchemeForDevices(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_FINDCONTROLSCHEMEFORDEVICES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FindControlSchemeForDevices(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::InputSystem::InputControlScheme&* arg, MatchResult&* arg, ::UnityEngine::InputSystem::InputDevice* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::InputSystem::InputControlScheme&*, MatchResult&*, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_FINDCONTROLSCHEMEFORDEVICES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_FINDCONTROLSCHEMEFORDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SupportsDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SUPPORTSDEVICE_OFFSET))(arg, nullptr);
		}

		MatchResult* PickDevicesFrom(Il2CppObject* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (MatchResult*(*)(Il2CppObject*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_PICKDEVICESFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::InputControlScheme* arg, ::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme*, ::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::InputControlScheme* arg, ::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControlScheme*, ::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

