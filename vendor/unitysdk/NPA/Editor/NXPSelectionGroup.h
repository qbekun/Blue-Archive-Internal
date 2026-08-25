#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Selectable; }
namespace NPA::Editor { class NXPSelectionScrollView; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_NXPSELECTIONGROUP_GET_DEFAULTSELECTION_OFFSET UNITYSDK_OFFSET(0x9D98790)
#define NPA_EDITOR_NXPSELECTIONGROUP_SET_DEFAULTSELECTION_OFFSET UNITYSDK_OFFSET(0x9D98960)
#define NPA_EDITOR_NXPSELECTIONGROUP_GET_CURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0x9D989E0)
#define NPA_EDITOR_NXPSELECTIONGROUP_SET_CURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0x9D98A60)
#define NPA_EDITOR_NXPSELECTIONGROUP_GET_SELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D98900)
#define NPA_EDITOR_NXPSELECTIONGROUP_SET_SELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D98EE0)
#define NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9D98F00)
#define NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9D98FA0)
#define NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONENTER_OFFSET UNITYSDK_OFFSET(0x9D99040)
#define NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONENTER_OFFSET UNITYSDK_OFFSET(0x9D990E0)
#define NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONEXIT_OFFSET UNITYSDK_OFFSET(0x9D953F0)
#define NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONEXIT_OFFSET UNITYSDK_OFFSET(0x9D99180)
#define NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONBACK_OFFSET UNITYSDK_OFFSET(0x9D96870)
#define NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONBACK_OFFSET UNITYSDK_OFFSET(0x9D99220)
#define NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9D992C0)
#define NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9D99360)
#define NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTORINITIALISED_OFFSET UNITYSDK_OFFSET(0x9D99400)
#define NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTORINITIALISED_OFFSET UNITYSDK_OFFSET(0x9D994A0)
#define NPA_EDITOR_NXPSELECTIONGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9D99540)
#define NPA_EDITOR_NXPSELECTIONGROUP_MAKESELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D98DF0)
#define NPA_EDITOR_NXPSELECTIONGROUP_INIT_OFFSET UNITYSDK_OFFSET(0x9D997A0)
#define NPA_EDITOR_NXPSELECTIONGROUP_GET_SELECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x9D98B30)
#define NPA_EDITOR_NXPSELECTIONGROUP_GET_SELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x9D9A140)
#define NPA_EDITOR_NXPSELECTIONGROUP_SET_SELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x9D9A150)
#define NPA_EDITOR_NXPSELECTIONGROUP_GET_THISSELECTIONSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x9D9A190)
#define NPA_EDITOR_NXPSELECTIONGROUP_SELECT_OFFSET UNITYSDK_OFFSET(0x9D9A280)
#define NPA_EDITOR_NXPSELECTIONGROUP_SUBMITSELECTION_OFFSET UNITYSDK_OFFSET(0x9D9A290)
#define NPA_EDITOR_NXPSELECTIONGROUP_ENTER_OFFSET UNITYSDK_OFFSET(0x9D96910)
#define NPA_EDITOR_NXPSELECTIONGROUP_DELAYENTER_OFFSET UNITYSDK_OFFSET(0x9D95490)
#define NPA_EDITOR_NXPSELECTIONGROUP_ENTERATENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x9D9A370)
#define NPA_EDITOR_NXPSELECTIONGROUP_ENTER_OFFSET UNITYSDK_OFFSET(0x9D99D80)
#define NPA_EDITOR_NXPSELECTIONGROUP_CANCEL_OFFSET UNITYSDK_OFFSET(0x9D9A410)
#define NPA_EDITOR_NXPSELECTIONGROUP_BACK_OFFSET UNITYSDK_OFFSET(0x9D9A490)
#define NPA_EDITOR_NXPSELECTIONGROUP_EXIT_OFFSET UNITYSDK_OFFSET(0x9D9A500)
#define NPA_EDITOR_NXPSELECTIONGROUP_START_OFFSET UNITYSDK_OFFSET(0x9D9AB30)
#define NPA_EDITOR_NXPSELECTIONGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D9AC60)
#define NPA_EDITOR_NXPSELECTIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D9ADF0)
#define NPA_EDITOR_NXPSELECTIONGROUP__GET_SELECTIONINDEX_B__47_0_OFFSET UNITYSDK_OFFSET(0x9D9AE10)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPSelectionGroup_TypeDefinitionIndex = 26336;

	class NXPSelectionGroup : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* content; // 0x18
		::UnityEngine::UI::Selectable* _defaultSelection; // 0x20
		::UnityEngine::UI::Selectable* _currentSelection; // 0x28
		::System::Boolean initOnStart; // 0x30
		::System::Boolean enterOnSelect; // 0x31
		::System::Boolean canNavigationCancel; // 0x32
		SelectionSaveMode* selectionSaveMode; // 0x34
		Il2CppObject* _selectables; // 0x38
		::System::Boolean isPointerClickExit; // 0x40
		SelectionChange* SelectionChanged; // 0x48
		SelectionState* SelectionEnter; // 0x50
		SelectionState* SelectionExit; // 0x58
		SelectionState* SelectionBack; // 0x60
		SelectionSubmit* SelectionSubmitted; // 0x68
		SelectorInitialisation* SelectorInitialised; // 0x70
		::System::Boolean useCustomNavigation; // 0x78
		::System::Boolean _alreadySelected; // 0x79
		::System::Boolean _selectedState; // 0x7A
		::NPA::Editor::NXPSelectionScrollView* _thisSelectionScrollView; // 0x80

		::UnityEngine::UI::Selectable* get_DefaultSelection()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_GET_DEFAULTSELECTION_OFFSET))(nullptr);
		}

		::System::Void set_DefaultSelection(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_SET_DEFAULTSELECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Selectable* get_CurrentSelection()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_GET_CURRENTSELECTION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSelection(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_SET_CURRENTSELECTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Selectables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_GET_SELECTABLES_OFFSET))(nullptr);
		}

		::System::Void set_Selectables(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_SET_SELECTABLES_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionChanged(SelectionChange* arg)
		{
			((::System::Void(*)(SelectionChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionChanged(SelectionChange* arg)
		{
			((::System::Void(*)(SelectionChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionEnter(SelectionState* arg)
		{
			((::System::Void(*)(SelectionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionEnter(SelectionState* arg)
		{
			((::System::Void(*)(SelectionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionExit(SelectionState* arg)
		{
			((::System::Void(*)(SelectionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionExit(SelectionState* arg)
		{
			((::System::Void(*)(SelectionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionBack(SelectionState* arg)
		{
			((::System::Void(*)(SelectionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONBACK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionBack(SelectionState* arg)
		{
			((::System::Void(*)(SelectionState*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONBACK_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionSubmitted(SelectionSubmit* arg)
		{
			((::System::Void(*)(SelectionSubmit*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTIONSUBMITTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionSubmitted(SelectionSubmit* arg)
		{
			((::System::Void(*)(SelectionSubmit*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTIONSUBMITTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectorInitialised(SelectorInitialisation* arg)
		{
			((::System::Void(*)(SelectorInitialisation*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ADD_SELECTORINITIALISED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectorInitialised(SelectorInitialisation* arg)
		{
			((::System::Void(*)(SelectorInitialisation*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_REMOVE_SELECTORINITIALISED_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPSelectionGroup* Create(::UnityEngine::GameObject* arg, ::System::Boolean arg, ::UnityEngine::UI::Selectable* arg, SelectionSaveMode* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::UI::Selectable*, SelectionSaveMode*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* MakeSelectables(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_MAKESELECTABLES_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_INIT_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectionIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_GET_SELECTIONINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_SelectedState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_GET_SELECTEDSTATE_OFFSET))(nullptr);
		}

		::System::Void set_SelectedState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_SET_SELECTEDSTATE_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPSelectionScrollView* get_ThisSelectionScrollView()
		{
			return (return (::NPA::Editor::NXPSelectionScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_GET_THISSELECTIONSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void Select(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Void SubmitSelection(::UnityEngine::UI::Selectable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_SUBMITSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ENTER_OFFSET))(nullptr);
		}

		::System::Void DelayEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_DELAYENTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* EnterAtEndOfFrame(::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ENTERATENDOFFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Cancel(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_CANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void Back(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_BACK_OFFSET))(arg, nullptr);
		}

		::System::Void Exit(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_START_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _get_SelectionIndex_b__47_0(::UnityEngine::UI::Selectable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUP__GET_SELECTIONINDEX_B__47_0_OFFSET))(arg, nullptr);
		}

	};
}

