#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputBindingResolver; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputActionPhase; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class IInputInteraction; }
namespace UnityEngine::InputSystem { class InputBinding&; }
namespace UnityEngine::InputSystem::Utilities { class ISavedState; }
namespace UnityEngine::InputSystem { class InputActionChange; }
namespace UnityEngine::InputSystem { class InputDeviceChange; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCOMPOSITECOUNT_OFFSET UNITYSDK_OFFSET(0x9E60B00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9E60B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E60B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALBINDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x9E60B30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9E60B40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x9E60B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_MAPINDICES_OFFSET UNITYSDK_OFFSET(0x9E60B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ACTIONSTATES_OFFSET UNITYSDK_OFFSET(0x9E60B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_BINDINGSTATES_OFFSET UNITYSDK_OFFSET(0x9E60B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_INTERACTIONSTATES_OFFSET UNITYSDK_OFFSET(0x9E60B90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLINDEXTOBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E60BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLGROUPINGANDCOMPLEXITY_OFFSET UNITYSDK_OFFSET(0x9E60BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLMAGNITUDES_OFFSET UNITYSDK_OFFSET(0x9E60BC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ENABLEDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9E60BD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ISPROCESSINGCONTROLSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9E60BE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E60BF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPUTECONTROLGROUPINGIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9E60F20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLAIMDATAFROM_OFFSET UNITYSDK_OFFSET(0x9E60DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9E61150)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E61440)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x9E61270)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x9E61760)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9E61BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISUSINGDEVICE_OFFSET UNITYSDK_OFFSET(0x9E61BC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CANUSEDEVICE_OFFSET UNITYSDK_OFFSET(0x9E61D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HASENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x9E61FB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINISHBINDINGCOMPOSITESETUPS_OFFSET UNITYSDK_OFFSET(0x9E62030)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PREPAREFORBINDINGRERESOLUTION_OFFSET UNITYSDK_OFFSET(0x9E62170)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINISHBINDINGRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9E63160)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESTOREACTIONSTATESAFTERRERESOLVINGBINDINGS_OFFSET UNITYSDK_OFFSET(0x9E63240)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTIVECONTROL_OFFSET UNITYSDK_OFFSET(0x9E646D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINDCONTROLINDEXONBINDING_OFFSET UNITYSDK_OFFSET(0x9E64030)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATESDRIVENBY_OFFSET UNITYSDK_OFFSET(0x9E647A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTIONBOUNDTOCONTROLFROMDEVICE_OFFSET UNITYSDK_OFFSET(0x9E649C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9E62E80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9E64E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHMAPINDICES_OFFSET UNITYSDK_OFFSET(0x9E64E70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x9E64EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E65110)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLESINGLEACTION_OFFSET UNITYSDK_OFFSET(0x9E65160)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E65240)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x9E62A00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E63030)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLESINGLEACTION_OFFSET UNITYSDK_OFFSET(0x9E65300)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E653E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E63E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x9E61450)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETINITIALSTATECHECKPENDING_OFFSET UNITYSDK_OFFSET(0x9E65570)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETINITIALSTATECHECKPENDING_OFFSET UNITYSDK_OFFSET(0x9E654F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x9E654A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETCONTROLENABLED_OFFSET UNITYSDK_OFFSET(0x9E65540)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HOOKONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9E644F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNHOOKONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9E65660)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONBEFOREINITIALUPDATE_OFFSET UNITYSDK_OFFSET(0x9E656E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9E65A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x9E66260)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_TOCOMBINEDMAPANDCONTROLANDBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E654C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SPLITUPMAPANDCONTROLANDBINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E65AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCOMPLEXITYFROMMONITORINDEX_OFFSET UNITYSDK_OFFSET(0x9E66650)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSCONTROLSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9E65AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x9E66DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SHOULDIGNOREINPUTONCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9E666B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONFLICTINGINPUT_OFFSET UNITYSDK_OFFSET(0x9E66920)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONBINDINGSTARTINDEXANDCOUNT_OFFSET UNITYSDK_OFFSET(0x9E64AA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSDEFAULTINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E66FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9E66700)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E662A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETTOTALTIMEOUTCOMPLETIONTIME_OFFSET UNITYSDK_OFFSET(0x9E67560)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STARTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E64360)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STOPTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E675A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E676B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTION_OFFSET UNITYSDK_OFFSET(0x9E64B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E67B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CALLACTIONLISTENERS_OFFSET UNITYSDK_OFFSET(0x9E67E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNONESTRING_OFFSET UNITYSDK_OFFSET(0x9E68080)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_OFFSET UNITYSDK_OFFSET(0x9E68170)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_OFFSET UNITYSDK_OFFSET(0x9E680D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x9E68210)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETINTERACTIONORNULL_OFFSET UNITYSDK_OFFSET(0x9E68250)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINMAP_OFFSET UNITYSDK_OFFSET(0x9E68290)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINSTATE_OFFSET UNITYSDK_OFFSET(0x9E682D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGSTATE_OFFSET UNITYSDK_OFFSET(0x9E68300)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDING_OFFSET UNITYSDK_OFFSET(0x9E68310)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONMAP_OFFSET UNITYSDK_OFFSET(0x9E68390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATEANDCANCELIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9E64AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9E62D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9E683D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9E68480)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTUATED_OFFSET UNITYSDK_OFFSET(0x9E67490)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E68530)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_APPLYPROCESSORS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_EVALUATECOMPOSITEPARTMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E68720)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCOMPOSITEPARTPRESSTIME_OFFSET UNITYSDK_OFFSET(0x9E68820)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUE_OFFSET UNITYSDK_OFFSET(0x9E688D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E68AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E68CC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASBUTTON_OFFSET UNITYSDK_OFFSET(0x9E68E80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SAVEANDRESETSTATE_OFFSET UNITYSDK_OFFSET(0x9E68FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ADDTOGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x9E60EB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_REMOVEMAPFROMGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x9E61610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPACTGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x9E69230)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_NOTIFYLISTENERSOFACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E63080)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_NOTIFYLISTENERSOFACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E64600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETGLOBALS_OFFSET UNITYSDK_OFFSET(0x9E693C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINDALLENABLEDACTIONS_OFFSET UNITYSDK_OFFSET(0x9E69680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9E69A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DEFERREDRESOLUTIONOFBINDINGS_OFFSET UNITYSDK_OFFSET(0x9E59340)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_OFFSET UNITYSDK_OFFSET(0x9E69E10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROYALLACTIONMAPSTATES_OFFSET UNITYSDK_OFFSET(0x9E694E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E61910)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_TypeDefinitionIndex = 28427;

	class InputActionState : public Il2CppObject
	{
	public:
		::System::Int32 kInvalidIndex; // 0x0
		::Il2CppArray<::System::Object*>* maps; // 0x10
		::Il2CppArray<::System::Object*>* controls; // 0x18
		::Il2CppArray<::System::Object*>* interactions; // 0x20
		::Il2CppArray<::System::Object*>* processors; // 0x28
		::Il2CppArray<::System::Object*>* composites; // 0x30
		::System::Int32 totalProcessorCount; // 0x38
		UnmanagedMemory* memory; // 0x40
		::System::Boolean m_OnBeforeUpdateHooked; // 0xC0
		::System::Boolean m_OnAfterUpdateHooked; // 0xC1
		::System::Boolean m_InProcessControlStateChange; // 0xC2
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* m_CurrentlyProcessingThisEvent; // 0xC8
		::System::Action* m_OnBeforeUpdateDelegate; // 0xD0
		::System::Action* m_OnAfterUpdateDelegate; // 0xD8
		GlobalState* s_GlobalState; // 0x0

		::System::Int32 get_totalCompositeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCOMPOSITECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_totalMapCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALMAPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_totalActionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALACTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_totalBindingCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALBINDINGCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_totalInteractionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALINTERACTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_totalControlCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_TOTALCONTROLCOUNT_OFFSET))(nullptr);
		}

		::System::Object** get_mapIndices()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_MAPINDICES_OFFSET))(nullptr);
		}

		::System::Object** get_actionStates()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ACTIONSTATES_OFFSET))(nullptr);
		}

		::System::Object** get_bindingStates()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_BINDINGSTATES_OFFSET))(nullptr);
		}

		::System::Object** get_interactionStates()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_INTERACTIONSTATES_OFFSET))(nullptr);
		}

		::System::Object** get_controlIndexToBindingIndex()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLINDEXTOBINDINGINDEX_OFFSET))(nullptr);
		}

		::System::Object** get_controlGroupingAndComplexity()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLGROUPINGANDCOMPLEXITY_OFFSET))(nullptr);
		}

		::System::Object** get_controlMagnitudes()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_CONTROLMAGNITUDES_OFFSET))(nullptr);
		}

		::System::Object** get_enabledControls()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ENABLEDCONTROLS_OFFSET))(nullptr);
		}

		::System::Boolean get_isProcessingControlStateChange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GET_ISPROCESSINGCONTROLSTATECHANGE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::InputSystem::InputBindingResolver* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingResolver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeControlGroupingIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPUTECONTROLGROUPINGIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingResolver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLAIMDATAFROM_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Destroy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionState* Clone()
		{
			return (return (::UnityEngine::InputSystem::InputActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CLONE_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean IsUsingDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISUSINGDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CANUSEDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasEnabledActions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HASENABLEDACTIONS_OFFSET))(nullptr);
		}

		::System::Void FinishBindingCompositeSetups()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINISHBINDINGCOMPOSITESETUPS_OFFSET))(nullptr);
		}

		::System::Void PrepareForBindingReResolution(::System::Boolean arg, Il2CppObject&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PREPAREFORBINDINGRERESOLUTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FinishBindingResolution(::System::Boolean arg, UnmanagedMemory* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, UnmanagedMemory*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINISHBINDINGRESOLUTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RestoreActionStatesAfterReResolvingBindings(UnmanagedMemory* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(UnmanagedMemory*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESTOREACTIONSTATESAFTERRERESOLVINGBINDINGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsActiveControl(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTIVECONTROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindControlIndexOnBinding(::System::Int32 arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINDCONTROLINDEXONBINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATESDRIVENBY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTIONBOUNDTOCONTROLFROMDEVICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetActionState(::System::Int32 arg, ::UnityEngine::InputSystem::InputActionPhase* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputActionPhase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETACTIONSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		TriggerState&* FetchActionState(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (TriggerState&*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHACTIONSTATE_OFFSET))(arg, nullptr);
		}

		ActionMapIndices* FetchMapIndices(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			return (return (ActionMapIndices*(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FETCHMAPINDICES_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAllActions(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLEALLACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void EnableControls(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET))(arg, nullptr);
		}

		::System::Void EnableSingleAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLESINGLEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void EnableControls(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET))(arg, nullptr);
		}

		::System::Void DisableAllActions(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void DisableControls(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET))(arg, nullptr);
		}

		::System::Void DisableSingleAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLESINGLEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void DisableControls(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET))(arg, nullptr);
		}

		::System::Void EnableControls(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ENABLECONTROLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DisableControls(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLECONTROLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetInitialStateCheckPending(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETINITIALSTATECHECKPENDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInitialStateCheckPending(::System::Object** arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETINITIALSTATECHECKPENDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsControlEnabled(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONTROLENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SetControlEnabled(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETCONTROLENABLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HookOnBeforeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_HOOKONBEFOREUPDATE_OFFSET))(nullptr);
		}

		::System::Void UnhookOnBeforeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNHOOKONBEFOREUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeInitialUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONBEFOREINITIALUPDATE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYCONTROLSTATECHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYTIMEREXPIRED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 ToCombinedMapAndControlAndBindingIndex(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_TOCOMBINEDMAPANDCONTROLANDBINDINGINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SplitUpMapAndControlAndBindingIndex(::System::Int64 arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int64, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SPLITUPMAPANDCONTROLANDBINDINGINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetComplexityFromMonitorIndex(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCOMPLEXITYFROMMONITORINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessControlStateChange(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSCONTROLSTATECHANGE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessButtonState(TriggerState&* arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(TriggerState&*, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSBUTTONSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldIgnoreInputOnCompositeBinding(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SHOULDIGNOREINPUTONCOMPOSITEBINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsConflictingInput(TriggerState&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(TriggerState&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISCONFLICTINGINPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt16 GetActionBindingStartIndexAndCount(::System::Int32 arg, uint16_t&* arg)
		{
			return (return (::System::UInt16(*)(::System::Int32, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONBINDINGSTARTINDEXANDCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessDefaultInteraction(TriggerState&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(TriggerState&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSDEFAULTINTERACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessInteractions(TriggerState&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(TriggerState&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSINTERACTIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessTimeout(::System::Double arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Double, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_PROCESSTIMEOUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetTotalTimeoutCompletionTime(::System::Single arg, TriggerState&* arg)
		{
			((::System::Void(*)(::System::Single, TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SETTOTALTIMEOUTCOMPLETIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTimeout(::System::Single arg, TriggerState&* arg)
		{
			((::System::Void(*)(::System::Single, TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STARTTIMEOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StopTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_STOPTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Void ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase* arg, TriggerState&* arg, ::UnityEngine::InputSystem::InputActionPhase* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionPhase*, TriggerState&*, ::UnityEngine::InputSystem::InputActionPhase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFINTERACTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase* arg, TriggerState&* arg, ::UnityEngine::InputSystem::InputActionPhase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputActionPhase*, TriggerState&*, ::UnityEngine::InputSystem::InputActionPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ChangePhaseOfActionInternal(::System::Int32 arg, ::System::Object** arg, ::UnityEngine::InputSystem::InputActionPhase* arg, TriggerState&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::UnityEngine::InputSystem::InputActionPhase*, TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CHANGEPHASEOFACTIONINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CallActionListeners(::System::Int32 arg, ::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputActionPhase* arg, Il2CppObject&* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputActionPhase*, Il2CppObject&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_CALLACTIONLISTENERS_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Object* GetActionOrNoneString(TriggerState&* arg)
		{
			return (return (::System::Object*(*)(TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNONESTRING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* GetActionOrNull(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* GetActionOrNull(TriggerState&* arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONORNULL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* GetControl(TriggerState&* arg)
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCONTROL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::IInputInteraction* GetInteractionOrNull(TriggerState&* arg)
		{
			return (return (::UnityEngine::InputSystem::IInputInteraction*(*)(TriggerState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETINTERACTIONORNULL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBindingIndexInMap(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINMAP_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBindingIndexInState(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGINDEXINSTATE_OFFSET))(arg, arg, nullptr);
		}

		BindingState&* GetBindingState(::System::Int32 arg)
		{
			return (return (BindingState&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDINGSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputBinding&* GetBinding(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputBinding&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETBINDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* GetActionMap(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETACTIONMAP_OFFSET))(arg, nullptr);
		}

		::System::Void ResetInteractionStateAndCancelIfNecessary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATEANDCANCELIFNECESSARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ResetInteractionState(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETINTERACTIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetValueSizeInBytes(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUESIZEINBYTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetValueType(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETVALUETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsActuated(TriggerState&* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(TriggerState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ISACTUATED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadValue(::System::Int32 arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadValue(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ApplyProcessors(::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_APPLYPROCESSORS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single EvaluateCompositePartMagnitude(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_EVALUATECOMPOSITEPARTMAGNITUDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetCompositePartPressTime(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_GETCOMPOSITEPARTPRESSTIME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadCompositePartValue(::System::Int32 arg, ::System::Int32 arg, ::System::Object** arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::System::Object**, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReadCompositePartValue(::System::Int32 arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ReadCompositePartValueAsObject(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READCOMPOSITEPARTVALUEASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValueAsObject(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReadValueAsButton(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_READVALUEASBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState()
		{
			return (return (::UnityEngine::InputSystem::Utilities::ISavedState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_SAVEANDRESETSTATE_OFFSET))(nullptr);
		}

		::System::Void AddToGlobalList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ADDTOGLOBALLIST_OFFSET))(nullptr);
		}

		::System::Void RemoveMapFromGlobalList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_REMOVEMAPFROMGLOBALLIST_OFFSET))(nullptr);
		}

		::System::Void CompactGlobalList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_COMPACTGLOBALLIST_OFFSET))(nullptr);
		}

		::System::Void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_NOTIFYLISTENERSOFACTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionChange*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_NOTIFYLISTENERSOFACTIONCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetGlobals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_RESETGLOBALS_OFFSET))(nullptr);
		}

		::System::Int32 FindAllEnabledActions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_FINDALLENABLEDACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDeviceChange* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_ONDEVICECHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DeferredResolutionOfBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DEFERREDRESOLUTIONOFBINDINGS_OFFSET))(nullptr);
		}

		::System::Void DisableAllActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DISABLEALLACTIONS_OFFSET))(nullptr);
		}

		::System::Void DestroyAllActionMapStates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_DESTROYALLACTIONMAPSTATES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

