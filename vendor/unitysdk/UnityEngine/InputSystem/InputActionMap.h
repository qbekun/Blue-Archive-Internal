#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem { class InputAction&; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E48A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x9E48A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ID_OFFSET UNITYSDK_OFFSET(0x9E48A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_IDDONTGENERATE_OFFSET UNITYSDK_OFFSET(0x9E45340)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9E43AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x9E489A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9E48B40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_UNITYENGINE.INPUTSYSTEM.IINPUTACTIONCOLLECTION2.GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9E48B90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x9E48C10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E48CD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E48D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9E42660)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x9E48EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E48F70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ADD_ACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9E49060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_REMOVE_ACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9E490B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E42500)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E49100)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E49140)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E49160)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPACTIONLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x9E49390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARACTIONLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x9E49520)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E49570)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET UNITYSDK_OFFSET(0x9E44CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET UNITYSDK_OFFSET(0x9E45530)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ISUSABLEWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x9E45930)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ENABLE_OFFSET UNITYSDK_OFFSET(0x9E45C80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISABLE_OFFSET UNITYSDK_OFFSET(0x9E45ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLONE_OFFSET UNITYSDK_OFFSET(0x9E49680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9E49960)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E49970)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E499A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E49A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E49B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NEEDTORESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x9E49B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_NEEDTORESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x9E49B30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET UNITYSDK_OFFSET(0x9E49B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET UNITYSDK_OFFSET(0x9E49B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E49B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E49B90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E49BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E49BC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETBINDINGSFORSINGLEACTION_OFFSET UNITYSDK_OFFSET(0x9E40F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETCONTROLSFORSINGLEACTION_OFFSET UNITYSDK_OFFSET(0x9E410B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPPERACTIONCONTROLANDBINDINGARRAYS_OFFSET UNITYSDK_OFFSET(0x9E49BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONWANTTOCHANGESETUP_OFFSET UNITYSDK_OFFSET(0x9E46100)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONSETUPCHANGED_OFFSET UNITYSDK_OFFSET(0x9E46460)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBINDINGMODIFIED_OFFSET UNITYSDK_OFFSET(0x9E4A5F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARCACHEDACTIONDATA_OFFSET UNITYSDK_OFFSET(0x9E4A580)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GENERATEID_OFFSET UNITYSDK_OFFSET(0x9E48AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_LAZYRESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x9E40DC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGSIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9E41070)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x9E4A6C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x9E44F00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDINGRELATIVETOMAP_OFFSET UNITYSDK_OFFSET(0x9E4B850)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9E4B910)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_OFFSET UNITYSDK_OFFSET(0x9E4B9C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_OFFSET UNITYSDK_OFFSET(0x9E4BA70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9E4BB70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9E4BB80)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_TypeDefinitionIndex = 28398;

	class InputActionMap : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::String* m_Id; // 0x18
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x20
		::Il2CppArray<::System::Object*>* m_Actions; // 0x28
		::Il2CppArray<::System::Object*>* m_Bindings; // 0x30
		::Il2CppArray<::System::Object*>* m_BindingsForEachAction; // 0x38
		::Il2CppArray<::System::Object*>* m_ControlsForEachAction; // 0x40
		::System::Int32 m_EnabledActionsCount; // 0x48
		::UnityEngine::InputSystem::InputAction* m_SingletonAction; // 0x50
		::System::Int32 m_MapIndexInState; // 0x58
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x60
		Il2CppObject* m_BindingMask; // 0x68
		Flags* m_Flags; // 0xC8
		::System::Int32 m_ParameterOverridesCount; // 0xCC
		::Il2CppArray<::System::Object*>* m_ParameterOverrides; // 0xD0
		DeviceArray* m_Devices; // 0xD8
		Il2CppObject* m_ActionCallbacks; // 0xE8
		Il2CppObject* m_ActionIndexByNameOrId; // 0x138
		::System::Int32 s_DeferBindingResolution; // 0x0

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return (return (::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ASSET_OFFSET))(nullptr);
		}

		::System::Guid* get_id()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ID_OFFSET))(nullptr);
		}

		::System::Guid* get_idDontGenerate()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_IDDONTGENERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ENABLED_OFFSET))(nullptr);
		}

		Il2CppObject* get_actions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ACTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGS_OFFSET))(nullptr);
		}

		Il2CppObject* UnityEngine.InputSystem.IInputActionCollection2.get_bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_UNITYENGINE.INPUTSYSTEM.IINPUTACTIONCOLLECTION2.GET_BINDINGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_controlSchemes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSCHEMES_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindingMask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGMASK_OFFSET))(nullptr);
		}

		::System::Void set_bindingMask(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGMASK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_devices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_DEVICES_OFFSET))(nullptr);
		}

		::System::Void set_devices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_DEVICES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Item(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void add_actionTriggered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ADD_ACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_actionTriggered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_REMOVE_ACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 FindActionIndex(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET))(str, nullptr);
		}

		::System::Void SetUpActionLookupTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPACTIONLOOKUPTABLE_OFFSET))(nullptr);
		}

		::System::Void ClearActionLookupTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARACTIONLOOKUPTABLE_OFFSET))(nullptr);
		}

		::System::Int32 FindActionIndex(::System::Guid* arg)
		{
			return (return (::System::Int32(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid* arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ISUSABLEWITHDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ENABLE_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* Clone()
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLONE_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_needToResolveBindings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NEEDTORESOLVEBINDINGS_OFFSET))(nullptr);
		}

		::System::Void set_needToResolveBindings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_NEEDTORESOLVEBINDINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bindingResolutionNeedsFullReResolve()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET))(nullptr);
		}

		::System::Void set_bindingResolutionNeedsFullReResolve(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_controlsForEachActionInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_controlsForEachActionInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bindingsForEachActionInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_bindingsForEachActionInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETBINDINGSFORSINGLEACTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETCONTROLSFORSINGLEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetUpPerActionControlAndBindingArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPPERACTIONCONTROLANDBINDINGARRAYS_OFFSET))(nullptr);
		}

		::System::Void OnWantToChangeSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONWANTTOCHANGESETUP_OFFSET))(nullptr);
		}

		::System::Void OnSetupChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONSETUPCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnBindingModified()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBINDINGMODIFIED_OFFSET))(nullptr);
		}

		::System::Void ClearCachedActionData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARCACHEDACTIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GENERATEID_OFFSET))(nullptr);
		}

		::System::Boolean LazyResolveBindings(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_LAZYRESOLVEBINDINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ResolveBindingsIfNecessary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGSIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void ResolveBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGS_OFFSET))(nullptr);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding* arg, ::UnityEngine::InputSystem::InputAction&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputBinding*, ::UnityEngine::InputSystem::InputAction&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputBinding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDINGRELATIVETOMAP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromJson(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FROMJSON_OFFSET))(str, nullptr);
		}

		::System::String* ToJson(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_OFFSET))(arg, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

	};
}

