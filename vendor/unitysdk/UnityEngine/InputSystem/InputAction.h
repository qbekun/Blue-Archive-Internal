#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionType; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionPhase; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputAction; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E407E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9E407F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ID_OFFSET UNITYSDK_OFFSET(0x9E40800)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_IDDONTGENERATE_OFFSET UNITYSDK_OFFSET(0x9E408D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_EXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x9E40920)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_EXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x9E40930)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x9E40940)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9E40950)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E40960)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E409A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E409E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9E40E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x9E40FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9E41140)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E41200)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9E41250)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0x9E412A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0x9E412F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_CANCELED_OFFSET UNITYSDK_OFFSET(0x9E41340)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_CANCELED_OFFSET UNITYSDK_OFFSET(0x9E41390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_PERFORMED_OFFSET UNITYSDK_OFFSET(0x9E413E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_PERFORMED_OFFSET UNITYSDK_OFFSET(0x9E41430)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TRIGGERED_OFFSET UNITYSDK_OFFSET(0x9E41480)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIVECONTROL_OFFSET UNITYSDK_OFFSET(0x9E415C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x9E41650)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x9E41660)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E41680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E416E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E41970)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E41990)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x9E41C70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x9E41D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_CLONE_OFFSET UNITYSDK_OFFSET(0x9E41D90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9E41EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E41EB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_RESET_OFFSET UNITYSDK_OFFSET(0x9E41F60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x9E42000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E42070)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x9E420E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASRELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x9E42180)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPERFORMEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x9E41520)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETTIMEOUTCOMPLETIONPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9E42220)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ISSINGLETONACTION_OFFSET UNITYSDK_OFFSET(0x9E40980)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x9E41190)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_MAKESUREIDISINPLACE_OFFSET UNITYSDK_OFFSET(0x9E40870)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GENERATEID_OFFSET UNITYSDK_OFFSET(0x9E42390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETORCREATEACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E40D90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_CREATEINTERNALACTIONMAPFORSINGLETONACTION_OFFSET UNITYSDK_OFFSET(0x9E423E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REQUESTINITIALSTATECHECKONENABLEDACTION_OFFSET UNITYSDK_OFFSET(0x9E42510)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ACTIVECONTROLISVALID_OFFSET UNITYSDK_OFFSET(0x9E42560)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_FINDEFFECTIVEBINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E42880)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONACTIONTOBINDINGINDEXONMAP_OFFSET UNITYSDK_OFFSET(0x9E42970)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONMAPTOBINDINGINDEXONACTION_OFFSET UNITYSDK_OFFSET(0x9E42B10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputAction_TypeDefinitionIndex = 28380;

	class InputAction : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::UnityEngine::InputSystem::InputActionType* m_Type; // 0x18
		::System::String* m_ExpectedControlType; // 0x20
		::System::String* m_Id; // 0x28
		::System::String* m_Processors; // 0x30
		::System::String* m_Interactions; // 0x38
		::Il2CppArray<::System::Object*>* m_SingletonActionBindings; // 0x40
		ActionFlags* m_Flags; // 0x48
		Il2CppObject* m_BindingMask; // 0x50
		::System::Int32 m_BindingsStartIndex; // 0xB0
		::System::Int32 m_BindingsCount; // 0xB4
		::System::Int32 m_ControlStartIndex; // 0xB8
		::System::Int32 m_ControlCount; // 0xBC
		::System::Int32 m_ActionIndexInState; // 0xC0
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0xC8
		Il2CppObject* m_OnStarted; // 0xD0
		Il2CppObject* m_OnCanceled; // 0x120
		Il2CppObject* m_OnPerformed; // 0x170

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionType* get_type()
		{
			return (return (::UnityEngine::InputSystem::InputActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Guid* get_id()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ID_OFFSET))(nullptr);
		}

		::System::Guid* get_idDontGenerate()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_IDDONTGENERATE_OFFSET))(nullptr);
		}

		::System::String* get_expectedControlType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_EXPECTEDCONTROLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_expectedControlType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_EXPECTEDCONTROLTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_processors()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PROCESSORS_OFFSET))(nullptr);
		}

		::System::String* get_interactions()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INTERACTIONS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* get_actionMap()
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIONMAP_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindingMask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGMASK_OFFSET))(nullptr);
		}

		::System::Void set_bindingMask(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_BINDINGMASK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_controls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CONTROLS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionPhase* get_phase()
		{
			return (return (::UnityEngine::InputSystem::InputActionPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Boolean get_inProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void add_started(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_STARTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_started(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_STARTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_canceled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_CANCELED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_canceled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_CANCELED_OFFSET))(arg, nullptr);
		}

		::System::Void add_performed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_PERFORMED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_performed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_PERFORMED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_triggered()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TRIGGERED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_activeControl()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIVECONTROL_OFFSET))(nullptr);
		}

		::System::Boolean get_wantsInitialStateCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_WANTSINITIALSTATECHECK_OFFSET))(nullptr);
		}

		::System::Void set_wantsInitialStateCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_WANTSINITIALSTATECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::InputSystem::InputActionType* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::InputActionType*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_.CTOR_OFFSET))(str, arg, str, str, str, str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ENABLE_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* Clone()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_CLONE_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_READVALUE_OFFSET))(nullptr);
		}

		::System::Object* ReadValueAsObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_READVALUEASOBJECT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_RESET_OFFSET))(nullptr);
		}

		::System::Boolean IsPressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISPRESSED_OFFSET))(nullptr);
		}

		::System::Boolean IsInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean WasPressedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPRESSEDTHISFRAME_OFFSET))(nullptr);
		}

		::System::Boolean WasReleasedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASRELEASEDTHISFRAME_OFFSET))(nullptr);
		}

		::System::Boolean WasPerformedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPERFORMEDTHISFRAME_OFFSET))(nullptr);
		}

		::System::Single GetTimeoutCompletionPercentage()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETTIMEOUTCOMPLETIONPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_isSingletonAction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ISSINGLETONACTION_OFFSET))(nullptr);
		}

		TriggerState* get_currentState()
		{
			return (return (TriggerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::String* MakeSureIdIsInPlace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_MAKESUREIDISINPLACE_OFFSET))(nullptr);
		}

		::System::Void GenerateId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GENERATEID_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* GetOrCreateActionMap()
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETORCREATEACTIONMAP_OFFSET))(nullptr);
		}

		::System::Void CreateInternalActionMapForSingletonAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_CREATEINTERNALACTIONMAPFORSINGLETONACTION_OFFSET))(nullptr);
		}

		::System::Void RequestInitialStateCheckOnEnabledAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REQUESTINITIALSTATECHECKONENABLEDACTION_OFFSET))(nullptr);
		}

		::System::Boolean ActiveControlIsValid(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ACTIVECONTROLISVALID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindEffectiveBindingMask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_FINDEFFECTIVEBINDINGMASK_OFFSET))(nullptr);
		}

		::System::Int32 BindingIndexOnActionToBindingIndexOnMap(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONACTIONTOBINDINGINDEXONMAP_OFFSET))(arg, nullptr);
		}

		::System::Int32 BindingIndexOnMapToBindingIndexOnAction(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONMAPTOBINDINGINDEXONACTION_OFFSET))(arg, nullptr);
		}

	};
}

