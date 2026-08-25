#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine { class Vector2; }
namespace NPA::Editor { class NXPSelectionScrollViewElement; }

#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_SELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D9F930)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SET_SELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D9F940)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9D9F960)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9D9FA00)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9D9FAA0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x9D9FB40)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x9D9FBE0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTIONSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9D9FC80)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTIONSUBMITTED_OFFSET UNITYSDK_OFFSET(0x9D9FD20)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTIONCANCELLED_OFFSET UNITYSDK_OFFSET(0x9D9FDC0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTIONCANCELLED_OFFSET UNITYSDK_OFFSET(0x9D9FE60)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SCROLLED_OFFSET UNITYSDK_OFFSET(0x9D9FF00)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SCROLLED_OFFSET UNITYSDK_OFFSET(0x9D9FFA0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_VIEWINITIALISED_OFFSET UNITYSDK_OFFSET(0x9DA0040)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_VIEWINITIALISED_OFFSET UNITYSDK_OFFSET(0x9DA00E0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x9DA0180)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SET_SELECTION_OFFSET UNITYSDK_OFFSET(0x9DA0190)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x9DA0660)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x9DA03B0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADDSELECTIONSCROLLVIEWELEMENTTOSELECTABLECHILDREN_OFFSET UNITYSDK_OFFSET(0x9DA0670)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x9DA0780)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_LATEINIT_OFFSET UNITYSDK_OFFSET(0x9DA09A0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x9DA0A40)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_START_OFFSET UNITYSDK_OFFSET(0x9DA0D30)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9DA0D60)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SELECT_OFFSET UNITYSDK_OFFSET(0x9DA0DB0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_DESELECT_OFFSET UNITYSDK_OFFSET(0x9DA0EA0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SUBMIT_OFFSET UNITYSDK_OFFSET(0x9DA0EB0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_CANCEL_OFFSET UNITYSDK_OFFSET(0x9DA0F50)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DA0FF0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_RESET_OFFSET UNITYSDK_OFFSET(0x9DA12A0)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_UPDATENEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x9DA0470)
#define NPA_EDITOR_NXPSELECTIONSCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA13E0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPSelectionScrollView_TypeDefinitionIndex = 26353;

	class NXPSelectionScrollView : public Il2CppObject
	{
	public:
		ScrollingMode* scrollingMode; // 0x18
		ScrollingMode* _scrollingMode; // 0x1C
		Alignment* alignment; // 0x20
		Alignment* _alignmentMode; // 0x24
		::UnityEngine::RectTransform* alignmentGuide; // 0x28
		::System::Boolean forceScrolling; // 0x30
		::System::Boolean updateTransforms; // 0x31
		::System::Boolean alwaysUpdate; // 0x32
		::System::Single navigationScrollingTime; // 0x34
		::UnityEngine::AnimationCurve* navigationScrollingCurve; // 0x38
		::System::Boolean initOnStart; // 0x40
		::System::Boolean autoAddElementComponentToSelectablesOnInit; // 0x41
		::UnityEngine::Animator* _animator; // 0x48
		::System::String* selectionChangedTrigger; // 0x50
		::System::Int32 _selectionChangedHashID; // 0x58
		::System::String* selectedBool; // 0x60
		::System::Int32 _selectedHashID; // 0x68
		::System::String* selectionInt; // 0x70
		::System::Int32 _selectionHashID; // 0x78
		::System::String* selectionSubmittedTrigger; // 0x80
		::System::Int32 _selectionSubmittedHashID; // 0x88
		::System::String* selectionCancelledTrigger; // 0x90
		::System::Int32 _selectionCancelledHashID; // 0x98
		Il2CppObject* _selectables; // 0xA0
		::UnityEngine::UI::ScrollRect* _scrollRect; // 0xA8
		::System::Single _lerp; // 0xB0
		::System::Single _lCurve; // 0xB4
		::UnityEngine::Vector2* _previousPosition; // 0xB8
		::UnityEngine::Vector2* _nextPosition; // 0xC0
		::System::Single _timeStamp; // 0xC8
		SelectionChange* SelectionChanged; // 0xD0
		SelectedChange* SelectedChanged; // 0xD8
		SelectionSubmit* SelectionSubmitted; // 0xE0
		SelectionCancel* SelectionCancelled; // 0xE8
		Scroll* Scrolled; // 0xF0
		ViewInitialisation* ViewInitialised; // 0xF8
		::System::Int32 _selection; // 0x100
		::System::Boolean _selected; // 0x104

		Il2CppObject* get_Selectables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_SELECTABLES_OFFSET))(nullptr);
		}

		::System::Void set_Selectables(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SET_SELECTABLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectTransform* get_Content()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void add_SelectionChanged(SelectionChange* arg)
		{
			((::System::Void(*)(SelectionChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionChanged(SelectionChange* arg)
		{
			((::System::Void(*)(SelectionChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectedChanged(SelectedChange* arg)
		{
			((::System::Void(*)(SelectedChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTEDCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectedChanged(SelectedChange* arg)
		{
			((::System::Void(*)(SelectedChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTEDCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionSubmitted(SelectionSubmit* arg)
		{
			((::System::Void(*)(SelectionSubmit*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTIONSUBMITTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionSubmitted(SelectionSubmit* arg)
		{
			((::System::Void(*)(SelectionSubmit*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTIONSUBMITTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SelectionCancelled(SelectionCancel* arg)
		{
			((::System::Void(*)(SelectionCancel*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SELECTIONCANCELLED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectionCancelled(SelectionCancel* arg)
		{
			((::System::Void(*)(SelectionCancel*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SELECTIONCANCELLED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Scrolled(Scroll* arg)
		{
			((::System::Void(*)(Scroll*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_SCROLLED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Scrolled(Scroll* arg)
		{
			((::System::Void(*)(Scroll*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_SCROLLED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ViewInitialised(ViewInitialisation* arg)
		{
			((::System::Void(*)(ViewInitialisation*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADD_VIEWINITIALISED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ViewInitialised(ViewInitialisation* arg)
		{
			((::System::Void(*)(ViewInitialisation*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_REMOVE_VIEWINITIALISED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Selection()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_SELECTION_OFFSET))(nullptr);
		}

		::System::Void set_Selection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SET_SELECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Selected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_Selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void AddSelectionScrollViewElementToSelectableChildren(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_ADDSELECTIONSCROLLVIEWELEMENTTOSELECTABLECHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_INIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LateInit(::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_LATEINIT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_START_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::NPA::Editor::NXPSelectionScrollViewElement* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::NXPSelectionScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void Select(::NPA::Editor::NXPSelectionScrollViewElement* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Deselect(::NPA::Editor::NXPSelectionScrollViewElement* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_DESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Submit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_SUBMIT_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_CANCEL_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_RESET_OFFSET))(nullptr);
		}

		::System::Void UpdateNextPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_UPDATENEXTPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONSCROLLVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

