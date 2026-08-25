#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem { class InputAction&; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9E43890)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ACTIONMAPS_OFFSET UNITYSDK_OFFSET(0x9E43A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x9E43AE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9E43B30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E43BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E43C20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9E43E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9E43FD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E44190)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_TOJSON_OFFSET UNITYSDK_OFFSET(0x9E44600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x9E44AA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9E44C40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_OFFSET UNITYSDK_OFFSET(0x9E44220)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x9E44E10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E45100)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E45390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_OFFSET UNITYSDK_OFFSET(0x9E45470)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEMEINDEX_OFFSET UNITYSDK_OFFSET(0x9E45590)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x9E45670)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ISUSABLEWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x9E457A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ENABLE_OFFSET UNITYSDK_OFFSET(0x9E45A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_DISABLE_OFFSET UNITYSDK_OFFSET(0x9E45CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E45F00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E45F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E46010)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_MARKASDIRTY_OFFSET UNITYSDK_OFFSET(0x9E46080)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONWANTTOCHANGESETUP_OFFSET UNITYSDK_OFFSET(0x9E46090)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONSETUPCHANGED_OFFSET UNITYSDK_OFFSET(0x9E463E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_RERESOLVEIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9E43D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_RESOLVEBINDINGSIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9E46750)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9E467F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E46830)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset_TypeDefinitionIndex = 28385;

	class InputActionAsset : public Il2CppObject
	{
	public:
		::System::String* Extension; // 0x0
		::Il2CppArray<::System::Object*>* m_ActionMaps; // 0x18
		::Il2CppArray<::System::Object*>* m_ControlSchemes; // 0x20
		::UnityEngine::InputSystem::InputActionState* m_SharedStateForAllMaps; // 0x28
		Il2CppObject* m_BindingMask; // 0x30
		::System::Int32 m_ParameterOverridesCount; // 0x90
		::Il2CppArray<::System::Object*>* m_ParameterOverrides; // 0x98
		DeviceArray* m_Devices; // 0xA0

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ENABLED_OFFSET))(nullptr);
		}

		Il2CppObject* get_actionMaps()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ACTIONMAPS_OFFSET))(nullptr);
		}

		Il2CppObject* get_controlSchemes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_CONTROLSCHEMES_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindingMask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGMASK_OFFSET))(nullptr);
		}

		::System::Void set_bindingMask(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_BINDINGMASK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_DEVICES_OFFSET))(nullptr);
		}

		::System::Void set_devices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_DEVICES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Item(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_TOJSON_OFFSET))(nullptr);
		}

		::System::Void LoadFromJson(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_LOADFROMJSON_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputActionAsset* FromJson(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputActionAsset*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FROMJSON_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding* arg, ::UnityEngine::InputSystem::InputAction&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputBinding*, ::UnityEngine::InputSystem::InputAction&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDBINDING_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::Guid* arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid* arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindControlSchemeIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEMEINDEX_OFFSET))(str, nullptr);
		}

		Il2CppObject* FindControlScheme(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ISUSABLEWITHDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ENABLE_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_DISABLE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_CONTAINS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void MarkAsDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_MARKASDIRTY_OFFSET))(nullptr);
		}

		::System::Void OnWantToChangeSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONWANTTOCHANGESETUP_OFFSET))(nullptr);
		}

		::System::Void OnSetupChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONSETUPCHANGED_OFFSET))(nullptr);
		}

		::System::Void ReResolveIfNecessary(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_RERESOLVEIFNECESSARY_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveBindingsIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_RESOLVEBINDINGSIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

