#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class UnityEvent; }
namespace Lean::Touch { class LeanFinger; }
namespace Lean::Touch { class LeanSelectable; }

#define LEAN_TOUCH_LEANSELECTABLE_ADD_ONENABLEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAABA0)
#define LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONENABLEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAAC90)
#define LEAN_TOUCH_LEANSELECTABLE_ADD_ONDISABLEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAAD80)
#define LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONDISABLEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAAE70)
#define LEAN_TOUCH_LEANSELECTABLE_ADD_ONSELECTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAAF60)
#define LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONSELECTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB050)
#define LEAN_TOUCH_LEANSELECTABLE_ADD_ONSELECTSETGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB140)
#define LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONSELECTSETGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB230)
#define LEAN_TOUCH_LEANSELECTABLE_ADD_ONSELECTUPGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB320)
#define LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONSELECTUPGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB410)
#define LEAN_TOUCH_LEANSELECTABLE_ADD_ONDESELECTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB500)
#define LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONDESELECTGLOBAL_OFFSET UNITYSDK_OFFSET(0x1EAB5F0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1EAB6E0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ONSELECTUPDATE_OFFSET UNITYSDK_OFFSET(0x1EAB7B0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ONSELECTUP_OFFSET UNITYSDK_OFFSET(0x1EAB840)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1EAB8D0)
#define LEAN_TOUCH_LEANSELECTABLE_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1EAB940)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1EABB80)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTEDRAW_OFFSET UNITYSDK_OFFSET(0x1EABBE0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1EABBF0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTEDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x1EABDF0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_SELECTINGFINGER_OFFSET UNITYSDK_OFFSET(0x1EABFB0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_SELECTINGFINGERS_OFFSET UNITYSDK_OFFSET(0x1EAC010)
#define LEAN_TOUCH_LEANSELECTABLE_GETFINGERS_OFFSET UNITYSDK_OFFSET(0x1EAC020)
#define LEAN_TOUCH_LEANSELECTABLE_GETSELECTED_OFFSET UNITYSDK_OFFSET(0x1EAC4E0)
#define LEAN_TOUCH_LEANSELECTABLE_CULL_OFFSET UNITYSDK_OFFSET(0x1EAC7E0)
#define LEAN_TOUCH_LEANSELECTABLE_FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1EAC920)
#define LEAN_TOUCH_LEANSELECTABLE_REPLACESELECTION_OFFSET UNITYSDK_OFFSET(0x1EACC30)
#define LEAN_TOUCH_LEANSELECTABLE_ISSELECTEDBY_OFFSET UNITYSDK_OFFSET(0x1EACBA0)
#define LEAN_TOUCH_LEANSELECTABLE_GETISSELECTED_OFFSET UNITYSDK_OFFSET(0x1EAD540)
#define LEAN_TOUCH_LEANSELECTABLE_SELECT_OFFSET UNITYSDK_OFFSET(0x1EAB950)
#define LEAN_TOUCH_LEANSELECTABLE_SELECT_OFFSET UNITYSDK_OFFSET(0x1EAD1B0)
#define LEAN_TOUCH_LEANSELECTABLE_DESELECT_OFFSET UNITYSDK_OFFSET(0x1EAB960)
#define LEAN_TOUCH_LEANSELECTABLE_DESELECTALL_OFFSET UNITYSDK_OFFSET(0x1EAD3A0)
#define LEAN_TOUCH_LEANSELECTABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EAD5B0)
#define LEAN_TOUCH_LEANSELECTABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EADAD0)
#define LEAN_TOUCH_LEANSELECTABLE_BUILDTEMPSELECTABLES_OFFSET UNITYSDK_OFFSET(0x1EAE020)
#define LEAN_TOUCH_LEANSELECTABLE_HANDLEFINGERUPDATE_OFFSET UNITYSDK_OFFSET(0x1EAE3B0)
#define LEAN_TOUCH_LEANSELECTABLE_GET_ANYFINGERSSET_OFFSET UNITYSDK_OFFSET(0x1EAE640)
#define LEAN_TOUCH_LEANSELECTABLE_HANDLEFINGERUP_OFFSET UNITYSDK_OFFSET(0x1EAE6D0)
#define LEAN_TOUCH_LEANSELECTABLE_HANDLEFINGERINACTIVE_OFFSET UNITYSDK_OFFSET(0x1EAE9E0)
#define LEAN_TOUCH_LEANSELECTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EAEBC0)
#define LEAN_TOUCH_LEANSELECTABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEC40)

namespace Lean::Touch
{
	inline static constexpr unsigned int LeanSelectable_TypeDefinitionIndex = 21256;

	class LeanSelectable : public Il2CppObject
	{
	public:
		Il2CppObject* Instances; // 0x0
		Il2CppObject* OnEnableGlobal; // 0x8
		Il2CppObject* OnDisableGlobal; // 0x10
		Il2CppObject* OnSelectGlobal; // 0x18
		Il2CppObject* OnSelectSetGlobal; // 0x20
		Il2CppObject* OnSelectUpGlobal; // 0x28
		Il2CppObject* OnDeselectGlobal; // 0x30
		::System::Boolean DeselectOnUp; // 0x18
		::System::Boolean HideWithFinger; // 0x19
		::System::Boolean IsolateSelectingFingers; // 0x1A
		LeanFingerEvent* onSelect; // 0x20
		LeanFingerEvent* onSelectUpdate; // 0x28
		LeanFingerEvent* onSelectUp; // 0x30
		::UnityEngine::Events::UnityEvent* onDeselect; // 0x38
		::System::Boolean isSelected; // 0x40
		Il2CppObject* selectingFingers; // 0x48
		Il2CppObject* node; // 0x50
		Il2CppObject* tempSelectables; // 0x38

		::System::Void add_OnEnableGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ADD_ONENABLEGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnEnableGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONENABLEGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnDisableGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ADD_ONDISABLEGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnDisableGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONDISABLEGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSelectGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ADD_ONSELECTGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSelectGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONSELECTGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSelectSetGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ADD_ONSELECTSETGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSelectSetGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONSELECTSETGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnSelectUpGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ADD_ONSELECTUPGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSelectUpGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONSELECTUPGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnDeselectGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ADD_ONDESELECTGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnDeselectGlobal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REMOVE_ONDESELECTGLOBAL_OFFSET))(arg, nullptr);
		}

		LeanFingerEvent* get_OnSelect()
		{
			return (return (LeanFingerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ONSELECT_OFFSET))(nullptr);
		}

		LeanFingerEvent* get_OnSelectUpdate()
		{
			return (return (LeanFingerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ONSELECTUPDATE_OFFSET))(nullptr);
		}

		LeanFingerEvent* get_OnSelectUp()
		{
			return (return (LeanFingerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ONSELECTUP_OFFSET))(nullptr);
		}

		::UnityEngine::Events::UnityEvent* get_OnDeselect()
		{
			return (return (::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ONDESELECT_OFFSET))(nullptr);
		}

		::System::Void set_IsSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelectedRaw()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTEDRAW_OFFSET))(nullptr);
		}

		::System::Int32 get_IsSelectedCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTEDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_IsSelectedRawCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ISSELECTEDRAWCOUNT_OFFSET))(nullptr);
		}

		::Lean::Touch::LeanFinger* get_SelectingFinger()
		{
			return (return (::Lean::Touch::LeanFinger*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_SELECTINGFINGER_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectingFingers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_SELECTINGFINGERS_OFFSET))(nullptr);
		}

		Il2CppObject* GetFingers(::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::Lean::Touch::LeanSelectable* arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::System::Boolean, ::System::Int32, ::Lean::Touch::LeanSelectable*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GETFINGERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Cull(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_CULL_OFFSET))(arg, nullptr);
		}

		::Lean::Touch::LeanSelectable* FindSelectable(::Lean::Touch::LeanFinger* arg)
		{
			return (return (::Lean::Touch::LeanSelectable*(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_FINDSELECTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ReplaceSelection(::Lean::Touch::LeanFinger* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Lean::Touch::LeanFinger*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_REPLACESELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSelectedBy(::Lean::Touch::LeanFinger* arg)
		{
			return (return (::System::Boolean(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ISSELECTEDBY_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetIsSelected(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GETISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_SELECT_OFFSET))(nullptr);
		}

		::System::Void Select(::Lean::Touch::LeanFinger* arg)
		{
			((::System::Void(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_DESELECT_OFFSET))(nullptr);
		}

		::System::Void DeselectAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_DESELECTALL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void BuildTempSelectables(::Lean::Touch::LeanFinger* arg)
		{
			((::System::Void(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_BUILDTEMPSELECTABLES_OFFSET))(arg, nullptr);
		}

		::System::Void HandleFingerUpdate(::Lean::Touch::LeanFinger* arg)
		{
			((::System::Void(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_HANDLEFINGERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AnyFingersSet()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_GET_ANYFINGERSSET_OFFSET))(nullptr);
		}

		::System::Void HandleFingerUp(::Lean::Touch::LeanFinger* arg)
		{
			((::System::Void(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_HANDLEFINGERUP_OFFSET))(arg, nullptr);
		}

		::System::Void HandleFingerInactive(::Lean::Touch::LeanFinger* arg)
		{
			((::System::Void(*)(::Lean::Touch::LeanFinger*, ::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_HANDLEFINGERINACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAN_TOUCH_LEANSELECTABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

