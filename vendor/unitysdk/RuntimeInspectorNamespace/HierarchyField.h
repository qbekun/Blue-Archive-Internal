#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace RuntimeInspectorNamespace { class PointerEventListener; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Toggle; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }
namespace RuntimeInspectorNamespace { class HierarchyData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_REFRESHNAME_OFFSET UNITYSDK_OFFSET(0x95591C0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x955C530)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD__INITIALIZE_B__48_0_OFFSET UNITYSDK_OFFSET(0x9564E20)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9564E80)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x9564E90)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x955B550)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_TOOLTIPTEXT_OFFSET UNITYSDK_OFFSET(0x9565090)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x955B030)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95650C0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x95650D0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x955C260)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x95650E0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9564FA0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x95650F0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x9565170)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_TOGGLEEXPANDEDSTATE_OFFSET UNITYSDK_OFFSET(0x9564E50)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9565180)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x955FE00)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_DATA_OFFSET UNITYSDK_OFFSET(0x95651F0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x9565210)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_MULTISELECTIONTOGGLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x9564DF0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9565230)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_HIERARCHY_OFFSET UNITYSDK_OFFSET(0x9565240)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9565250)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_MULTISELECTIONTOGGLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x9558530)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x9565260)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD__INITIALIZE_B__48_1_OFFSET UNITYSDK_OFFSET(0x9565270)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9565280)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyField_TypeDefinitionIndex = 35635;

	class HierarchyField : public Il2CppObject
	{
	public:
		::System::Single INACTIVE_ITEM_TEXT_ALPHA; // 0x0
		::System::Single TEXT_X_OFFSET; // 0x0
		::UnityEngine::RectTransform* contentTransform; // 0x30
		::UnityEngine::UI::Text* nameText; // 0x38
		::RuntimeInspectorNamespace::PointerEventListener* clickListener; // 0x40
		::RuntimeInspectorNamespace::PointerEventListener* expandToggle; // 0x48
		::UnityEngine::UI::Image* expandArrow; // 0x50
		::UnityEngine::UI::Toggle* multiSelectionToggle; // 0x58
		::UnityEngine::UI::Image* multiSelectionToggleBackground; // 0x60
		::UnityEngine::RectTransform* rectTransform; // 0x68
		::UnityEngine::UI::Image* background; // 0x70
		::System::Int32 m_skinVersion; // 0x78
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x80
		::System::Boolean m_isSelected; // 0x88
		::System::Boolean m_isActive; // 0x89
		ExpandedState* m_isExpanded; // 0x8C
		::System::Single _PreferredWidth_k__BackingField; // 0x90
		::RuntimeInspectorNamespace::RuntimeHierarchy* _Hierarchy_k__BackingField; // 0x98
		::RuntimeInspectorNamespace::HierarchyData* _Data_k__BackingField; // 0xA0

		::System::Void RefreshName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_REFRESHNAME_OFFSET))(nullptr);
		}

		::System::Void SetContent(::RuntimeInspectorNamespace::HierarchyData* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::HierarchyData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SETCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__48_0(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD__INITIALIZE_B__48_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsExpanded(ExpandedState* arg)
		{
			((::System::Void(*)(ExpandedState*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_ISEXPANDED_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::String* RuntimeInspectorNamespace.ITooltipContent.get_TooltipText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_TOOLTIPTEXT_OFFSET))(nullptr);
		}

		::System::Void set_IsSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyData* get_Data()
		{
			return (return (::RuntimeInspectorNamespace::HierarchyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_PreferredWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_PREFERREDWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_PreferredWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_PREFERREDWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_IsActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RuntimeInspectorNamespace.ITooltipContent.get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_ISACTIVE_OFFSET))(nullptr);
		}

		ExpandedState* get_IsExpanded()
		{
			return (return (ExpandedState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_ISEXPANDED_OFFSET))(nullptr);
		}

		::System::Void ToggleExpandedState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_TOGGLEEXPANDEDSTATE_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::RuntimeInspectorNamespace::RuntimeHierarchy* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Data(::RuntimeInspectorNamespace::HierarchyData* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::HierarchyData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_Hierarchy(::RuntimeInspectorNamespace::RuntimeHierarchy* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_HIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MultiSelectionToggleVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_MULTISELECTIONTOGGLEVISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::RuntimeHierarchy* get_Hierarchy()
		{
			return (return (::RuntimeInspectorNamespace::RuntimeHierarchy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_HIERARCHY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MultiSelectionToggleVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_SET_MULTISELECTIONTOGGLEVISIBLE_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__48_1(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD__INITIALIZE_B__48_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYFIELD_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

	};
}

