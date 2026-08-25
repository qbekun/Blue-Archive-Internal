#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualTreeUpdater; }
namespace UnityEngine::UIElements { class IStylePropertyAnimationSystem; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class TimerEventScheduler; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::UIElements { class ContextType; }
namespace UnityEngine::UIElements { class SavePersistentViewData; }
namespace UnityEngine::UIElements { class GetViewDataDictionary; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine { class EventInterests; }
namespace UnityEngine::UIElements { class LoadResourceFunction; }
namespace UnityEngine::UIElements { class TimeMsFunction; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::UIElements { class AtlasBase; }
namespace UnityEngine::UIElements { class IScheduler; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements { class IVisualTreeUpdater; }
namespace UnityEngine::UIElements { class VisualTreeUpdatePhase; }
namespace UnityEngine { class Vector2Int; }

#define UNITYENGINE_UIELEMENTS_PANEL_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0xA3214A0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0xA3214B0)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0xA3214C0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_TIMEREVENTSCHEDULER_OFFSET UNITYSDK_OFFSET(0xA3214E0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_SCHEDULER_OFFSET UNITYSDK_OFFSET(0xA321560)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_STYLEANIMATIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xA3215E0)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_STYLEANIMATIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xA3215F0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_OWNEROBJECT_OFFSET UNITYSDK_OFFSET(0xA3216C0)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_OWNEROBJECT_OFFSET UNITYSDK_OFFSET(0xA3216D0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xA3216F0)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xA321700)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_SAVEVIEWDATA_OFFSET UNITYSDK_OFFSET(0xA321710)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_GETVIEWDATADICTIONARY_OFFSET UNITYSDK_OFFSET(0xA321720)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA321730)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA321740)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUIEVENTINTERESTS_OFFSET UNITYSDK_OFFSET(0xA321760)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_IMGUIEVENTINTERESTS_OFFSET UNITYSDK_OFFSET(0xA321780)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_LOADRESOURCEFUNC_OFFSET UNITYSDK_OFFSET(0xA3217A0)
#define UNITYENGINE_UIELEMENTS_PANEL_LOADRESOURCE_OFFSET UNITYSDK_OFFSET(0xA3217F0)
#define UNITYENGINE_UIELEMENTS_PANEL_FOCUS_OFFSET UNITYSDK_OFFSET(0xA3124E0)
#define UNITYENGINE_UIELEMENTS_PANEL_BLUR_OFFSET UNITYSDK_OFFSET(0xA312440)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3219C0)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA3219D0)
#define UNITYENGINE_UIELEMENTS_PANEL_CREATEMARKERS_OFFSET UNITYSDK_OFFSET(0xA321A00)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_TIMESINCESTARTUP_OFFSET UNITYSDK_OFFSET(0xA321C70)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0xA321CC0)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0xA321CD0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_ROOTIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0xA321CE0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA321CF0)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_HIERARCHYVERSION_OFFSET UNITYSDK_OFFSET(0xA321D00)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_STANDARDSHADER_OFFSET UNITYSDK_OFFSET(0xA321D10)
#define UNITYENGINE_UIELEMENTS_PANEL_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA321D20)
#define UNITYENGINE_UIELEMENTS_PANEL_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA321D30)
#define UNITYENGINE_UIELEMENTS_PANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA321DC0)
#define UNITYENGINE_UIELEMENTS_PANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3221D0)
#define UNITYENGINE_UIELEMENTS_PANEL_TIMESINCESTARTUPMS_OFFSET UNITYSDK_OFFSET(0xA322240)
#define UNITYENGINE_UIELEMENTS_PANEL_DEFAULTTIMESINCESTARTUPMS_OFFSET UNITYSDK_OFFSET(0xA322340)
#define UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET UNITYSDK_OFFSET(0xA322370)
#define UNITYENGINE_UIELEMENTS_PANEL_PERFORMPICK_OFFSET UNITYSDK_OFFSET(0xA3223D0)
#define UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET UNITYSDK_OFFSET(0xA322730)
#define UNITYENGINE_UIELEMENTS_PANEL_PICK_OFFSET UNITYSDK_OFFSET(0xA322830)
#define UNITYENGINE_UIELEMENTS_PANEL_VALIDATELAYOUT_OFFSET UNITYSDK_OFFSET(0xA322C00)
#define UNITYENGINE_UIELEMENTS_PANEL_UPDATEANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA322C80)
#define UNITYENGINE_UIELEMENTS_PANEL_UPDATEBINDINGS_OFFSET UNITYSDK_OFFSET(0xA322CB0)
#define UNITYENGINE_UIELEMENTS_PANEL_APPLYSTYLES_OFFSET UNITYSDK_OFFSET(0xA322CE0)
#define UNITYENGINE_UIELEMENTS_PANEL_UPDATEFORREPAINT_OFFSET UNITYSDK_OFFSET(0xA322D10)
#define UNITYENGINE_UIELEMENTS_PANEL_REPAINT_OFFSET UNITYSDK_OFFSET(0xA322DA0)
#define UNITYENGINE_UIELEMENTS_PANEL_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA323140)
#define UNITYENGINE_UIELEMENTS_PANEL_GETUPDATER_OFFSET UNITYSDK_OFFSET(0xA323180)
#define UNITYENGINE_UIELEMENTS_PANEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3231B0)
#define UNITYENGINE_UIELEMENTS_PANEL__PICK_G__PIXELOF|99_0_OFFSET UNITYSDK_OFFSET(0xA322B40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Panel_TypeDefinitionIndex = 30139;

	class Panel : public ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_RootContainer; // 0xA0
		::UnityEngine::UIElements::VisualTreeUpdater* m_VisualTreeUpdater; // 0xA8
		::UnityEngine::UIElements::IStylePropertyAnimationSystem* m_StylePropertyAnimationSystem; // 0xB0
		::System::String* m_PanelName; // 0xB8
		::System::UInt32 m_Version; // 0xC0
		::System::UInt32 m_RepaintVersion; // 0xC4
		::System::UInt32 m_HierarchyVersion; // 0xC8
		::Unity::Profiling::ProfilerMarker* m_MarkerBeforeUpdate; // 0xD0
		::Unity::Profiling::ProfilerMarker* m_MarkerUpdate; // 0xD8
		::Unity::Profiling::ProfilerMarker* m_MarkerLayout; // 0xE0
		::Unity::Profiling::ProfilerMarker* m_MarkerBindings; // 0xE8
		::Unity::Profiling::ProfilerMarker* m_MarkerAnimations; // 0xF0
		::Unity::Profiling::ProfilerMarker* s_MarkerPickAll; // 0x0
		::UnityEngine::UIElements::EventDispatcher* _dispatcher_k__BackingField; // 0xF8
		::UnityEngine::UIElements::TimerEventScheduler* m_Scheduler; // 0x100
		::UnityEngine::ScriptableObject* _ownerObject_k__BackingField; // 0x108
		::UnityEngine::UIElements::ContextType* _contextType_k__BackingField; // 0x110
		::UnityEngine::UIElements::SavePersistentViewData* _saveViewData_k__BackingField; // 0x118
		::UnityEngine::UIElements::GetViewDataDictionary* _getViewDataDictionary_k__BackingField; // 0x120
		::UnityEngine::UIElements::FocusController* _focusController_k__BackingField; // 0x128
		::UnityEngine::EventInterests* _IMGUIEventInterests_k__BackingField; // 0x130
		::UnityEngine::UIElements::LoadResourceFunction* _loadResourceFunc_k__BackingField; // 0x8
		::UnityEngine::UIElements::TimeMsFunction* _TimeSinceStartup_k__BackingField; // 0x10
		::System::Int32 _IMGUIContainersCount_k__BackingField; // 0x134
		::UnityEngine::UIElements::IMGUIContainer* _rootIMGUIContainer_k__BackingField; // 0x138
		::UnityEngine::Shader* m_StandardShader; // 0x140
		::UnityEngine::UIElements::AtlasBase* m_Atlas; // 0x148
		::System::Boolean m_ValidatingLayout; // 0x150
		Il2CppObject* beforeAnyRepaint; // 0x18

		::UnityEngine::UIElements::VisualElement* get_visualTree()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_VISUALTREE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventDispatcher* get_dispatcher()
		{
			return (return (::UnityEngine::UIElements::EventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_DISPATCHER_OFFSET))(nullptr);
		}

		::System::Void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_DISPATCHER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TimerEventScheduler* get_timerEventScheduler()
		{
			return (return (::UnityEngine::UIElements::TimerEventScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_TIMEREVENTSCHEDULER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IScheduler* get_scheduler()
		{
			return (return (::UnityEngine::UIElements::IScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_SCHEDULER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem()
		{
			return (return (::UnityEngine::UIElements::IStylePropertyAnimationSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_STYLEANIMATIONSYSTEM_OFFSET))(nullptr);
		}

		::System::Void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IStylePropertyAnimationSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_STYLEANIMATIONSYSTEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ScriptableObject* get_ownerObject()
		{
			return (return (::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_OWNEROBJECT_OFFSET))(nullptr);
		}

		::System::Void set_ownerObject(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_OWNEROBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ContextType* get_contextType()
		{
			return (return (::UnityEngine::UIElements::ContextType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_CONTEXTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_contextType(::UnityEngine::UIElements::ContextType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_CONTEXTTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData()
		{
			return (return (::UnityEngine::UIElements::SavePersistentViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_SAVEVIEWDATA_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary()
		{
			return (return (::UnityEngine::UIElements::GetViewDataDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_GETVIEWDATADICTIONARY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_focusController(::UnityEngine::UIElements::FocusController* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_FOCUSCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventInterests* get_IMGUIEventInterests()
		{
			return (return (::UnityEngine::EventInterests*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUIEVENTINTERESTS_OFFSET))(nullptr);
		}

		::System::Void set_IMGUIEventInterests(::UnityEngine::EventInterests* arg)
		{
			((::System::Void(*)(::UnityEngine::EventInterests*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_IMGUIEVENTINTERESTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::LoadResourceFunction* get_loadResourceFunc()
		{
			return (return (::UnityEngine::UIElements::LoadResourceFunction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_LOADRESOURCEFUNC_OFFSET))(nullptr);
		}

		::UnityEngine::Object* LoadResource(::System::String* str, ::System::Type* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_LOADRESOURCE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Focus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_FOCUS_OFFSET))(nullptr);
		}

		::System::Void Blur()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_BLUR_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void CreateMarkers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_CREATEMARKERS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TimeMsFunction* get_TimeSinceStartup()
		{
			return (return (::UnityEngine::UIElements::TimeMsFunction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_TIMESINCESTARTUP_OFFSET))(nullptr);
		}

		::System::Int32 get_IMGUIContainersCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_IMGUICONTAINERSCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IMGUIContainersCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_IMGUICONTAINERSCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer()
		{
			return (return (::UnityEngine::UIElements::IMGUIContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_ROOTIMGUICONTAINER_OFFSET))(nullptr);
		}

		::System::UInt32 get_version()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_VERSION_OFFSET))(nullptr);
		}

		::System::UInt32 get_hierarchyVersion()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_HIERARCHYVERSION_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_standardShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_STANDARDSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::AtlasBase* get_atlas()
		{
			return (return (::UnityEngine::UIElements::AtlasBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_atlas(::UnityEngine::UIElements::AtlasBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AtlasBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ScriptableObject* arg, ::UnityEngine::UIElements::ContextType* arg, ::UnityEngine::UIElements::EventDispatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::ContextType*, ::UnityEngine::UIElements::EventDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int64 TimeSinceStartupMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_TIMESINCESTARTUPMS_OFFSET))(nullptr);
		}

		::System::Int64 DefaultTimeSinceStartupMs()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_DEFAULTTIMESINCESTARTUPMS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Vector2* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* PerformPick(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Vector2* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PERFORMPICK_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PICKALL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_PICK_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateLayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_VALIDATELAYOUT_OFFSET))(nullptr);
		}

		::System::Void UpdateAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_UPDATEANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void UpdateBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_UPDATEBINDINGS_OFFSET))(nullptr);
		}

		::System::Void ApplyStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_APPLYSTYLES_OFFSET))(nullptr);
		}

		::System::Void UpdateForRepaint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_UPDATEFORREPAINT_OFFSET))(nullptr);
		}

		::System::Void Repaint(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_REPAINT_OFFSET))(arg, nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg)
		{
			return (return (::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_GETUPDATER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* _Pick_g__PixelOf|99_0(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANEL__PICK_G__PIXELOF|99_0_OFFSET))(arg, nullptr);
		}

	};
}

