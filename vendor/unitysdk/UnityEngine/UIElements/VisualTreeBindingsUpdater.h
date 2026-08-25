#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class PropertyName; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class IBinding; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements { class HierarchyChangeType; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA38FA90)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GETBINDINGOBJECTFROMELEMENT_OFFSET UNITYSDK_OFFSET(0xA38FAE0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STARTTRACKING_OFFSET UNITYSDK_OFFSET(0xA38FD50)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STOPTRACKING_OFFSET UNITYSDK_OFFSET(0xA38FDC0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GET_TEMPORARYOBJECTCACHE_OFFSET UNITYSDK_OFFSET(0xA38FE30)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GETADDITIONALBINDING_OFFSET UNITYSDK_OFFSET(0xA38FCB0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STARTTRACKINGRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA38FE40)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STOPTRACKINGRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA38FFA0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA390110)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_ONHIERARCHYCHANGE_OFFSET UNITYSDK_OFFSET(0xA390280)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xA3902A0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_PERFORMTRACKINGOPERATIONS_OFFSET UNITYSDK_OFFSET(0xA390300)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA390620)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_UPDATEBINDINGS_OFFSET UNITYSDK_OFFSET(0xA390DC0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3914A0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA391670)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeBindingsUpdater_TypeDefinitionIndex = 30279;

	class VisualTreeBindingsUpdater : public ::UnityEngine::Scripting::RequiredByNativeCodeAttribute
	{
	public:
		::UnityEngine::PropertyName* s_BindingRequestObjectVEPropertyName; // 0x0
		::UnityEngine::PropertyName* s_AdditionalBindingObjectVEPropertyName; // 0x4
		::System::String* s_Description; // 0x8
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x10
		::Unity::Profiling::ProfilerMarker* s_ProfilerBindingRequestsMarker; // 0x18
		::Unity::Profiling::ProfilerMarker* s_MarkerUpdate; // 0x20
		::Unity::Profiling::ProfilerMarker* s_MarkerPoll; // 0x28
		::System::Boolean _disableBindingsThrottling_k__BackingField; // 0x30
		Il2CppObject* m_ElementsWithBindings; // 0x38
		Il2CppObject* m_ElementsToAdd; // 0x40
		Il2CppObject* m_ElementsToRemove; // 0x48
		::System::Int64 m_LastUpdateTime; // 0x50
		Il2CppObject* m_ElementsToBind; // 0x58
		Il2CppObject* _temporaryObjectCache_k__BackingField; // 0x60
		Il2CppObject* updatedBindings; // 0x68

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IBinding* GetBindingObjectFromElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::IBinding*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GETBINDINGOBJECTFROMELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void StartTracking(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STARTTRACKING_OFFSET))(arg, nullptr);
		}

		::System::Void StopTracking(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STOPTRACKING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_temporaryObjectCache()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GET_TEMPORARYOBJECTCACHE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IBinding* GetAdditionalBinding(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::IBinding*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_GETADDITIONALBINDING_OFFSET))(arg, nullptr);
		}

		::System::Void StartTrackingRecursive(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STARTTRACKINGRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void StopTrackingRecursive(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_STOPTRACKINGRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::HierarchyChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_ONHIERARCHYCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 CurrentTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Void PerformTrackingOperations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_PERFORMTRACKINGOPERATIONS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_UPDATEBINDINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEBINDINGSUPDATER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

