#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define REBINDINGOPERATION_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9E564E0)
#define REBINDINGOPERATION_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E564F0)
#define REBINDINGOPERATION_GET_CANDIDATES_OFFSET UNITYSDK_OFFSET(0x9E56530)
#define REBINDINGOPERATION_GET_SCORES_OFFSET UNITYSDK_OFFSET(0x9E56550)
#define REBINDINGOPERATION_GET_MAGNITUDES_OFFSET UNITYSDK_OFFSET(0x9E565C0)
#define REBINDINGOPERATION_GET_SELECTEDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E56630)
#define REBINDINGOPERATION_GET_STARTED_OFFSET UNITYSDK_OFFSET(0x9E566A0)
#define REBINDINGOPERATION_GET_COMPLETED_OFFSET UNITYSDK_OFFSET(0x9E566B0)
#define REBINDINGOPERATION_GET_CANCELED_OFFSET UNITYSDK_OFFSET(0x9E566C0)
#define REBINDINGOPERATION_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9E566D0)
#define REBINDINGOPERATION_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E566E0)
#define REBINDINGOPERATION_GET_EXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x9E54580)
#define REBINDINGOPERATION_WITHACTION_OFFSET UNITYSDK_OFFSET(0x9E541A0)
#define REBINDINGOPERATION_WITHMATCHINGEVENTSBEINGSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E544F0)
#define REBINDINGOPERATION_WITHCANCELINGTHROUGH_OFFSET UNITYSDK_OFFSET(0x9E545B0)
#define REBINDINGOPERATION_WITHCANCELINGTHROUGH_OFFSET UNITYSDK_OFFSET(0x9E56800)
#define REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x9E56760)
#define REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x9E568E0)
#define REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define REBINDINGOPERATION_WITHTARGETBINDING_OFFSET UNITYSDK_OFFSET(0x9E54630)
#define REBINDINGOPERATION_WITHBINDINGMASK_OFFSET UNITYSDK_OFFSET(0x9E56C30)
#define REBINDINGOPERATION_WITHBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x9E56C80)
#define REBINDINGOPERATION_WITHOUTGENERALIZINGPATHOFSELECTEDCONTROL_OFFSET UNITYSDK_OFFSET(0x9E56DF0)
#define REBINDINGOPERATION_WITHREBINDADDINGNEWBINDING_OFFSET UNITYSDK_OFFSET(0x9E56E00)
#define REBINDINGOPERATION_WITHMAGNITUDEHAVINGTOBEGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x9E56E30)
#define REBINDINGOPERATION_WITHOUTIGNORINGNOISYCONTROLS_OFFSET UNITYSDK_OFFSET(0x9E56F40)
#define REBINDINGOPERATION_WITHCONTROLSHAVINGTOMATCHPATH_OFFSET UNITYSDK_OFFSET(0x9E56AB0)
#define REBINDINGOPERATION_WITHCONTROLSEXCLUDING_OFFSET UNITYSDK_OFFSET(0x9E54370)
#define REBINDINGOPERATION_WITHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9E56FC0)
#define REBINDINGOPERATION_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9E56FD0)
#define REBINDINGOPERATION_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9E57000)
#define REBINDINGOPERATION_ONPOTENTIALMATCH_OFFSET UNITYSDK_OFFSET(0x9E57030)
#define REBINDINGOPERATION_ONGENERATEPATH_OFFSET UNITYSDK_OFFSET(0x9E57060)
#define REBINDINGOPERATION_ONCOMPUTESCORE_OFFSET UNITYSDK_OFFSET(0x9E57090)
#define REBINDINGOPERATION_ONAPPLYBINDING_OFFSET UNITYSDK_OFFSET(0x9E570C0)
#define REBINDINGOPERATION_ONMATCHWAITFORANOTHER_OFFSET UNITYSDK_OFFSET(0x9E54360)
#define REBINDINGOPERATION_START_OFFSET UNITYSDK_OFFSET(0x9E570F0)
#define REBINDINGOPERATION_CANCEL_OFFSET UNITYSDK_OFFSET(0x9E57470)
#define REBINDINGOPERATION_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9E57500)
#define REBINDINGOPERATION_ADDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x9E57900)
#define REBINDINGOPERATION_REMOVECANDIDATE_OFFSET UNITYSDK_OFFSET(0x9E57BD0)
#define REBINDINGOPERATION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E57CE0)
#define REBINDINGOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9E57F10)
#define REBINDINGOPERATION_RESET_OFFSET UNITYSDK_OFFSET(0x9E57FD0)
#define REBINDINGOPERATION_HOOKONEVENT_OFFSET UNITYSDK_OFFSET(0x9E57370)
#define REBINDINGOPERATION_UNHOOKONEVENT_OFFSET UNITYSDK_OFFSET(0x9E57E20)
#define REBINDINGOPERATION_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9E58110)
#define REBINDINGOPERATION_SORTCANDIDATESBYSCORE_OFFSET UNITYSDK_OFFSET(0x9E57AA0)
#define REBINDINGOPERATION_HAVEPATHMATCH_OFFSET UNITYSDK_OFFSET(0x9E58E90)
#define REBINDINGOPERATION_HOOKONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9E57280)
#define REBINDINGOPERATION_UNHOOKONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9E57EA0)
#define REBINDINGOPERATION_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x9E58F00)
#define REBINDINGOPERATION_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9E57510)
#define REBINDINGOPERATION_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9E574C0)
#define REBINDINGOPERATION_RESETAFTERMATCHCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9E59110)
#define REBINDINGOPERATION_THROWIFREBINDINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E566F0)
#define REBINDINGOPERATION_GENERATEPATHFORCONTROL_OFFSET UNITYSDK_OFFSET(0x9E58FE0)
#define REBINDINGOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E54100)

	inline static constexpr unsigned int RebindingOperation_TypeDefinitionIndex = 28405;

	class RebindingOperation : public Il2CppObject
	{
	public:
		::System::Single kDefaultMagnitudeThreshold; // 0x0
		::UnityEngine::InputSystem::InputAction* m_ActionToRebind; // 0x10
		Il2CppObject* m_BindingMask; // 0x18
		::System::Type* m_ControlType; // 0x78
		::UnityEngine::InputSystem::Utilities::InternedString* m_ExpectedLayout; // 0x80
		::System::Int32 m_IncludePathCount; // 0x90
		::Il2CppArray<::System::Object*>* m_IncludePaths; // 0x98
		::System::Int32 m_ExcludePathCount; // 0xA0
		::Il2CppArray<::System::Object*>* m_ExcludePaths; // 0xA8
		::System::Int32 m_TargetBindingIndex; // 0xB0
		::System::String* m_BindingGroupForNewBinding; // 0xB8
		::System::String* m_CancelBinding; // 0xC0
		::System::Single m_MagnitudeThreshold; // 0xC8
		::Il2CppArray<::System::Object*>* m_Scores; // 0xD0
		::Il2CppArray<::System::Object*>* m_Magnitudes; // 0xD8
		::System::Double m_LastMatchTime; // 0xE0
		::System::Double m_StartTime; // 0xE8
		::System::Single m_Timeout; // 0xF0
		::System::Single m_WaitSecondsAfterMatch; // 0xF4
		Il2CppObject* m_Candidates; // 0xF8
		Il2CppObject* m_OnComplete; // 0x118
		Il2CppObject* m_OnCancel; // 0x120
		Il2CppObject* m_OnPotentialMatch; // 0x128
		Il2CppObject* m_OnGeneratePath; // 0x130
		Il2CppObject* m_OnComputeScore; // 0x138
		Il2CppObject* m_OnApplyBinding; // 0x140
		Il2CppObject* m_OnEventDelegate; // 0x148
		::System::Action* m_OnAfterUpdateDelegate; // 0x150
		Cache* m_LayoutCache; // 0x158
		::System::Text::StringBuilder* m_PathBuilder; // 0x160
		Flags* m_Flags; // 0x168
		Il2CppObject* m_StartingActuations; // 0x170

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_ACTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_bindingMask()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_BINDINGMASK_OFFSET))(nullptr);
		}

		Il2CppObject* get_candidates()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_CANDIDATES_OFFSET))(nullptr);
		}

		Il2CppObject* get_scores()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_SCORES_OFFSET))(nullptr);
		}

		Il2CppObject* get_magnitudes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_MAGNITUDES_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_selectedControl()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_SELECTEDCONTROL_OFFSET))(nullptr);
		}

		::System::Boolean get_started()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_STARTED_OFFSET))(nullptr);
		}

		::System::Boolean get_completed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_COMPLETED_OFFSET))(nullptr);
		}

		::System::Boolean get_canceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_CANCELED_OFFSET))(nullptr);
		}

		::System::Double get_startTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Single get_timeout()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::String* get_expectedControlType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GET_EXPECTEDCONTROLTYPE_OFFSET))(nullptr);
		}

		RebindingOperation* WithAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (RebindingOperation*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHACTION_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithMatchingEventsBeingSuppressed(::System::Boolean arg)
		{
			return (return (RebindingOperation*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHMATCHINGEVENTSBEINGSUPPRESSED_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithCancelingThrough(::System::String* str)
		{
			return (return (RebindingOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHCANCELINGTHROUGH_OFFSET))(str, nullptr);
		}

		RebindingOperation* WithCancelingThrough(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (RebindingOperation*(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHCANCELINGTHROUGH_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithExpectedControlType(::System::String* str)
		{
			return (return (RebindingOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET))(str, nullptr);
		}

		RebindingOperation* WithExpectedControlType(::System::Type* arg)
		{
			return (return (RebindingOperation*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithExpectedControlType()
		{
			return (return (RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHEXPECTEDCONTROLTYPE_OFFSET))(nullptr);
		}

		RebindingOperation* WithTargetBinding(::System::Int32 arg)
		{
			return (return (RebindingOperation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHTARGETBINDING_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithBindingMask(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHBINDINGMASK_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithBindingGroup(::System::String* str)
		{
			return (return (RebindingOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHBINDINGGROUP_OFFSET))(str, nullptr);
		}

		RebindingOperation* WithoutGeneralizingPathOfSelectedControl()
		{
			return (return (RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHOUTGENERALIZINGPATHOFSELECTEDCONTROL_OFFSET))(nullptr);
		}

		RebindingOperation* WithRebindAddingNewBinding(::System::String* str)
		{
			return (return (RebindingOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHREBINDADDINGNEWBINDING_OFFSET))(str, nullptr);
		}

		RebindingOperation* WithMagnitudeHavingToBeGreaterThan(::System::Single arg)
		{
			return (return (RebindingOperation*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHMAGNITUDEHAVINGTOBEGREATERTHAN_OFFSET))(arg, nullptr);
		}

		RebindingOperation* WithoutIgnoringNoisyControls()
		{
			return (return (RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHOUTIGNORINGNOISYCONTROLS_OFFSET))(nullptr);
		}

		RebindingOperation* WithControlsHavingToMatchPath(::System::String* str)
		{
			return (return (RebindingOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHCONTROLSHAVINGTOMATCHPATH_OFFSET))(str, nullptr);
		}

		RebindingOperation* WithControlsExcluding(::System::String* str)
		{
			return (return (RebindingOperation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHCONTROLSEXCLUDING_OFFSET))(str, nullptr);
		}

		RebindingOperation* WithTimeout(::System::Single arg)
		{
			return (return (RebindingOperation*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_WITHTIMEOUT_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnComplete(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnCancel(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONCANCEL_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnPotentialMatch(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONPOTENTIALMATCH_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnGeneratePath(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONGENERATEPATH_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnComputeScore(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONCOMPUTESCORE_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnApplyBinding(Il2CppObject* arg)
		{
			return (return (RebindingOperation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONAPPLYBINDING_OFFSET))(arg, nullptr);
		}

		RebindingOperation* OnMatchWaitForAnother(::System::Single arg)
		{
			return (return (RebindingOperation*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONMATCHWAITFORANOTHER_OFFSET))(arg, nullptr);
		}

		RebindingOperation* Start()
		{
			return (return (RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_START_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_CANCEL_OFFSET))(nullptr);
		}

		::System::Void Complete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_COMPLETE_OFFSET))(nullptr);
		}

		::System::Void AddCandidate(::UnityEngine::InputSystem::InputControl* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ADDCANDIDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveCandidate(::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_REMOVECANDIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_FINALIZE_OFFSET))(nullptr);
		}

		RebindingOperation* Reset()
		{
			return (return (RebindingOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_RESET_OFFSET))(nullptr);
		}

		::System::Void HookOnEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_HOOKONEVENT_OFFSET))(nullptr);
		}

		::System::Void UnhookOnEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_UNHOOKONEVENT_OFFSET))(nullptr);
		}

		::System::Void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SortCandidatesByScore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_SORTCANDIDATESBYSCORE_OFFSET))(nullptr);
		}

		::System::Boolean HavePathMatch(::UnityEngine::InputSystem::InputControl* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_HAVEPATHMATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void HookOnAfterUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_HOOKONAFTERUPDATE_OFFSET))(nullptr);
		}

		::System::Void UnhookOnAfterUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_UNHOOKONAFTERUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnAfterUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONAFTERUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void ResetAfterMatchCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_RESETAFTERMATCHCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void ThrowIfRebindInProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_THROWIFREBINDINPROGRESS_OFFSET))(nullptr);
		}

		::System::String* GeneratePathForControl(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_GENERATEPATHFORCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REBINDINGOPERATION_.CTOR_OFFSET))(nullptr);
		}

	};

