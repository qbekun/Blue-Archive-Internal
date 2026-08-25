#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class TooltipListener; }
namespace UnityEngine { class Transform; }
namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace RuntimeInspectorNamespace { class InspectorField; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace RuntimeInspectorNamespace { class ExposedVariablesEnumerator; }

#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INSPECT_OFFSET UNITYSDK_OFFSET(0x95594C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_STOPINSPECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9565970)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_CREATEDRAWERFORTYPE_OFFSET UNITYSDK_OFFSET(0x9565A70)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_SHOWREMOVECOMPONENTBUTTON_OFFSET UNITYSDK_OFFSET(0x95660F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_POOLDRAWER_OFFSET UNITYSDK_OFFSET(0x9566100)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_TOOLTIPDELAY_OFFSET UNITYSDK_OFFSET(0x95663A0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_COMPONENTFILTER_OFFSET UNITYSDK_OFFSET(0x95663B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INSPECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x95652F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x95668F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95663C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x9566A20)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9566B90)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_STOPINSPECT_OFFSET UNITYSDK_OFFSET(0x9566DA0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_NESTLIMIT_OFFSET UNITYSDK_OFFSET(0x9566DB0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_REFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9566DC0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_REFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9566DD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x9566DE0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_TOOLTIPLISTENER_OFFSET UNITYSDK_OFFSET(0x9566E40)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9566E50)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_EXPOSEFIELDS_OFFSET UNITYSDK_OFFSET(0x9566E60)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_TOOLTIPLISTENER_OFFSET UNITYSDK_OFFSET(0x9566E70)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_REFRESHSKIN_OFFSET UNITYSDK_OFFSET(0x9566E80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_USETITLECASENAMING_OFFSET UNITYSDK_OFFSET(0x9566FB0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x9566FC0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_COMPONENTFILTER_OFFSET UNITYSDK_OFFSET(0x9566FD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_EXPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9567000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_SHOWTOOLTIPS_OFFSET UNITYSDK_OFFSET(0x9567010)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_INSPECTEDOBJECTHEADERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9567020)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x9566A80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x95670E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR__INSPECTINTERNAL_B__103_0_OFFSET UNITYSDK_OFFSET(0x95672D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_ARRAYINDICESSTARTATONE_OFFSET UNITYSDK_OFFSET(0x95672E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_USETITLECASENAMING_OFFSET UNITYSDK_OFFSET(0x9567300)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_TOOLTIPDELAY_OFFSET UNITYSDK_OFFSET(0x9567320)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_CONNECTEDHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9567330)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_SHOWADDCOMPONENTBUTTON_OFFSET UNITYSDK_OFFSET(0x9567340)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_NESTLIMIT_OFFSET UNITYSDK_OFFSET(0x9567360)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9567370)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_SHOWADDCOMPONENTBUTTON_OFFSET UNITYSDK_OFFSET(0x9567410)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INSTANTIATEDRAWER_OFFSET UNITYSDK_OFFSET(0x9565EC0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_INSPECTEDOBJECTHEADERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9567420)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_REFRESHDELAYED_OFFSET UNITYSDK_OFFSET(0x9567430)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GETEXPOSEDVARIABLESFORTYPE_OFFSET UNITYSDK_OFFSET(0x9567440)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_INSPECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x95677D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x95677E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_EXPOSEFIELDS_OFFSET UNITYSDK_OFFSET(0x9567800)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GETDRAWERSFORTYPE_OFFSET UNITYSDK_OFFSET(0x9565B60)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x9567810)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_ARRAYINDICESSTARTATONE_OFFSET UNITYSDK_OFFSET(0x9567820)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_SHOWREMOVECOMPONENTBUTTON_OFFSET UNITYSDK_OFFSET(0x9567830)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_CONNECTEDHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9567850)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR__INSPECTINTERNAL_B__103_1_OFFSET UNITYSDK_OFFSET(0x9567860)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_EXPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9567880)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_ENSURESCROLLVIEWISWITHINBOUNDS_OFFSET UNITYSDK_OFFSET(0x9567890)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RuntimeInspector_TypeDefinitionIndex = 35640;

	class RuntimeInspector : public Il2CppObject
	{
	public:
		::System::String* POOL_OBJECT_NAME; // 0x0
		::System::Single m_refreshInterval; // 0x28
		::System::Single nextRefreshTime; // 0x2C
		VariableVisibility* m_exposeFields; // 0x30
		VariableVisibility* m_exposeProperties; // 0x34
		::System::Boolean m_arrayIndicesStartAtOne; // 0x38
		::System::Boolean m_useTitleCaseNaming; // 0x39
		::System::Boolean m_showAddComponentButton; // 0x3A
		::System::Boolean m_showRemoveComponentButton; // 0x3B
		::System::Boolean m_showTooltips; // 0x3C
		::System::Single m_tooltipDelay; // 0x40
		::RuntimeInspectorNamespace::TooltipListener* _TooltipListener_k__BackingField; // 0x48
		::System::Int32 m_nestLimit; // 0x50
		HeaderVisibility* m_inspectedObjectHeaderVisibility; // 0x54
		::System::Int32 poolCapacity; // 0x58
		::UnityEngine::Transform* poolParent; // 0x60
		::RuntimeInspectorNamespace::RuntimeHierarchy* m_connectedHierarchy; // 0x68
		::Il2CppArray<::System::Object*>* settings; // 0x70
		::System::Boolean m_isLocked; // 0x78
		::UnityEngine::UI::ScrollRect* scrollView; // 0x80
		::UnityEngine::RectTransform* drawArea; // 0x88
		::UnityEngine::UI::Image* background; // 0x90
		::UnityEngine::UI::Image* scrollbar; // 0x98
		::System::Int32 aliveInspectors; // 0x0
		::System::Boolean initialized; // 0xA0
		Il2CppObject* typeToDrawers; // 0xA8
		Il2CppObject* typeToReferenceDrawers; // 0xB0
		Il2CppObject* eligibleDrawers; // 0xB8
		Il2CppObject* drawersPool; // 0x8
		Il2CppObject* hiddenVariables; // 0xC0
		Il2CppObject* exposedVariables; // 0xC8
		::RuntimeInspectorNamespace::InspectorField* currentDrawer; // 0xD0
		::System::Boolean inspectLock; // 0xD8
		::System::Boolean isDirty; // 0xD9
		::System::Object* m_inspectedObject; // 0xE0
		::UnityEngine::Canvas* m_canvas; // 0xE8
		::UnityEngine::EventSystems::PointerEventData* nullPointerEventData; // 0xF0
		InspectedObjectChangingDelegate* OnInspectedObjectChanging; // 0xF8
		ComponentFilterDelegate* m_componentFilter; // 0x100

		::System::Void Inspect(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INSPECT_OFFSET))(arg, nullptr);
		}

		::System::Void StopInspectInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_STOPINSPECTINTERNAL_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::InspectorField* CreateDrawerForType(::System::Type* arg, ::UnityEngine::Transform* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::RuntimeInspectorNamespace::InspectorField*(*)(::System::Type*, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_CREATEDRAWERFORTYPE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_ShowRemoveComponentButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_SHOWREMOVECOMPONENTBUTTON_OFFSET))(nullptr);
		}

		::System::Void PoolDrawer(::RuntimeInspectorNamespace::InspectorField* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::InspectorField*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_POOLDRAWER_OFFSET))(arg, nullptr);
		}

		::System::Single get_TooltipDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_TOOLTIPDELAY_OFFSET))(nullptr);
		}

		ComponentFilterDelegate* get_ComponentFilter()
		{
			return (return (ComponentFilterDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_COMPONENTFILTER_OFFSET))(nullptr);
		}

		::System::Void InspectInternal(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INSPECTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBound()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_ISBOUND_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void StopInspect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_STOPINSPECT_OFFSET))(nullptr);
		}

		::System::Int32 get_NestLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_NESTLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_RefreshInterval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_REFRESHINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_RefreshInterval()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_REFRESHINTERVAL_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::TooltipListener* get_TooltipListener()
		{
			return (return (::RuntimeInspectorNamespace::TooltipListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_TOOLTIPLISTENER_OFFSET))(nullptr);
		}

		::System::Void set_IsLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_ISLOCKED_OFFSET))(arg, nullptr);
		}

		VariableVisibility* get_ExposeFields()
		{
			return (return (VariableVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_EXPOSEFIELDS_OFFSET))(nullptr);
		}

		::System::Void set_TooltipListener(::RuntimeInspectorNamespace::TooltipListener* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::TooltipListener*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_TOOLTIPLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSkin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_REFRESHSKIN_OFFSET))(nullptr);
		}

		::System::Boolean get_UseTitleCaseNaming()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_USETITLECASENAMING_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* get_Canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_CANVAS_OFFSET))(nullptr);
		}

		::System::Void set_ComponentFilter(ComponentFilterDelegate* arg)
		{
			((::System::Void(*)(ComponentFilterDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_COMPONENTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExposeProperties(VariableVisibility* arg)
		{
			((::System::Void(*)(VariableVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_EXPOSEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowTooltips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_SHOWTOOLTIPS_OFFSET))(nullptr);
		}

		::System::Void set_InspectedObjectHeaderVisibility(HeaderVisibility* arg)
		{
			((::System::Void(*)(HeaderVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_INSPECTEDOBJECTHEADERVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* _InspectInternal_b__103_0()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR__INSPECTINTERNAL_B__103_0_OFFSET))(nullptr);
		}

		::System::Void set_ArrayIndicesStartAtOne(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_ARRAYINDICESSTARTATONE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseTitleCaseNaming(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_USETITLECASENAMING_OFFSET))(arg, nullptr);
		}

		::System::Void set_TooltipDelay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_TOOLTIPDELAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConnectedHierarchy(::RuntimeInspectorNamespace::RuntimeHierarchy* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeHierarchy*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_CONNECTEDHIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShowAddComponentButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_SHOWADDCOMPONENTBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_NestLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_NESTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowAddComponentButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_SHOWADDCOMPONENTBUTTON_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::InspectorField* InstantiateDrawer(::RuntimeInspectorNamespace::InspectorField* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::RuntimeInspectorNamespace::InspectorField*(*)(::RuntimeInspectorNamespace::InspectorField*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_INSTANTIATEDRAWER_OFFSET))(arg, arg, nullptr);
		}

		HeaderVisibility* get_InspectedObjectHeaderVisibility()
		{
			return (return (HeaderVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_INSPECTEDOBJECTHEADERVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void RefreshDelayed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_REFRESHDELAYED_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::ExposedVariablesEnumerator* GetExposedVariablesForType(::System::Type* arg)
		{
			return (return (::RuntimeInspectorNamespace::ExposedVariablesEnumerator*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GETEXPOSEDVARIABLESFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_InspectedObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_INSPECTEDOBJECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_ExposeFields(VariableVisibility* arg)
		{
			((::System::Void(*)(VariableVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_EXPOSEFIELDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDrawersForType(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GETDRAWERSFORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsLocked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_ISLOCKED_OFFSET))(nullptr);
		}

		::System::Boolean get_ArrayIndicesStartAtOne()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_ARRAYINDICESSTARTATONE_OFFSET))(nullptr);
		}

		::System::Void set_ShowRemoveComponentButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_SET_SHOWREMOVECOMPONENTBUTTON_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::RuntimeHierarchy* get_ConnectedHierarchy()
		{
			return (return (::RuntimeInspectorNamespace::RuntimeHierarchy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_CONNECTEDHIERARCHY_OFFSET))(nullptr);
		}

		::System::Void _InspectInternal_b__103_1(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR__INSPECTINTERNAL_B__103_1_OFFSET))(arg, nullptr);
		}

		VariableVisibility* get_ExposeProperties()
		{
			return (return (VariableVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_GET_EXPOSEPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void EnsureScrollViewIsWithinBounds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTOR_ENSURESCROLLVIEWISWITHINBOUNDS_OFFSET))(nullptr);
		}

	};
}

