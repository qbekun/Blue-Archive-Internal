#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaConfig; }
namespace UnityEngine::UIElements { class PanelClearSettings; }
namespace UnityEngine::UIElements { class RepaintData; }
namespace UnityEngine::UIElements { class ICursorManager; }
namespace UnityEngine::UIElements { class ContextualMenuManager; }
namespace UnityEngine::UIElements { class ElementUnderPointer; }
namespace UnityEngine::UIElements { class HierarchyEvent; }
namespace UnityEngine { class EventInterests; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::UIElements { class SavePersistentViewData; }
namespace UnityEngine::UIElements { class GetViewDataDictionary; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class DispatchMode; }
namespace UnityEngine::UIElements { class IScheduler; }
namespace UnityEngine::UIElements { class IStylePropertyAnimationSystem; }
namespace UnityEngine::UIElements { class ContextType; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class IVisualTreeUpdater; }
namespace UnityEngine::UIElements { class VisualTreeUpdatePhase; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::UIElements { class AtlasBase; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UIElements { class HierarchyChangeType; }

#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_IMGUIEVENTINTERESTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_IMGUIEVENTINTERESTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_OWNEROBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_OWNEROBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SAVEVIEWDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_GETVIEWDATADICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_IMGUICONTAINERSCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_ROOTIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_PANELDISPOSED_OFFSET UNITYSDK_OFFSET(0xA319B10)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_PANELDISPOSED_OFFSET UNITYSDK_OFFSET(0xA319E00)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA320060)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA320170)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3201D0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REPAINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_VALIDATELAYOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATEANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATEBINDINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_APPLYSTYLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA320310)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA320320)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_PIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0xA320450)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SCALEDPIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0xA320440)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CLEARSETTINGS_OFFSET UNITYSDK_OFFSET(0xA320570)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CLEARSETTINGS_OFFSET UNITYSDK_OFFSET(0xA320590)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DURINGLAYOUTPHASE_OFFSET UNITYSDK_OFFSET(0xA3205A0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DURINGLAYOUTPHASE_OFFSET UNITYSDK_OFFSET(0xA3205B0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_HIERARCHYVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_REPAINTDATA_OFFSET UNITYSDK_OFFSET(0xA3205C0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_REPAINTDATA_OFFSET UNITYSDK_OFFSET(0xA3205D0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CURSORMANAGER_OFFSET UNITYSDK_OFFSET(0xA3205E0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CURSORMANAGER_OFFSET UNITYSDK_OFFSET(0xA3205F0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CONTEXTUALMENUMANAGER_OFFSET UNITYSDK_OFFSET(0xA320600)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CONTEXTUALMENUMANAGER_OFFSET UNITYSDK_OFFSET(0xA320610)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SENDEVENT_OFFSET UNITYSDK_OFFSET(0xA320620)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SCHEDULER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_STYLEANIMATIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_STYLEANIMATIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_PICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_PICKALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA3206C0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA3206D0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETUPDATER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA30FAA0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3206E0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_CLEARCACHEDELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3207F0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_COMMITELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0xA320820)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_STANDARDSHADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_STANDARDWORLDSPACESHADER_OFFSET UNITYSDK_OFFSET(0xA320880)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_STANDARDSHADERCHANGED_OFFSET UNITYSDK_OFFSET(0xA320890)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_STANDARDSHADERCHANGED_OFFSET UNITYSDK_OFFSET(0xA320930)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_STANDARDWORLDSPACESHADERCHANGED_OFFSET UNITYSDK_OFFSET(0xA3209D0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_STANDARDWORLDSPACESHADERCHANGED_OFFSET UNITYSDK_OFFSET(0xA320A70)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_ATLASCHANGED_OFFSET UNITYSDK_OFFSET(0xA320B10)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_ATLASCHANGED_OFFSET UNITYSDK_OFFSET(0xA320BB0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEATLASCHANGED_OFFSET UNITYSDK_OFFSET(0xA320C50)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEUPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA320C70)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_HIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA320C90)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_HIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA320D30)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA320DD0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0xA320DF0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATEELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0xA320E10)
#define UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xA321050)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseVisualElementPanel_TypeDefinitionIndex = 30134;

	class BaseVisualElementPanel : public Il2CppObject
	{
	public:
		Il2CppObject* panelDisposed; // 0x10
		::System::Single m_Scale; // 0x18
		::UnityEngine::Yoga::YogaConfig* yogaConfig; // 0x20
		::System::Single m_PixelsPerPoint; // 0x28
		::UnityEngine::UIElements::PanelClearSettings* _clearSettings_k__BackingField; // 0x2C
		::System::Boolean _duringLayoutPhase_k__BackingField; // 0x40
		::UnityEngine::UIElements::RepaintData* _repaintData_k__BackingField; // 0x48
		::UnityEngine::UIElements::ICursorManager* _cursorManager_k__BackingField; // 0x50
		::UnityEngine::UIElements::ContextualMenuManager* _contextualMenuManager_k__BackingField; // 0x58
		::System::Boolean _disposed_k__BackingField; // 0x60
		::UnityEngine::UIElements::ElementUnderPointer* m_TopElementUnderPointers; // 0x68
		::System::Action* standardShaderChanged; // 0x70
		::System::Action* standardWorldSpaceShaderChanged; // 0x78
		::System::Action* atlasChanged; // 0x80
		Il2CppObject* updateMaterial; // 0x88
		::UnityEngine::UIElements::HierarchyEvent* hierarchyChanged; // 0x90
		Il2CppObject* beforeUpdate; // 0x98

		::UnityEngine::EventInterests* get_IMGUIEventInterests()
		{
			return (return (::UnityEngine::EventInterests*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_IMGUIEVENTINTERESTS_OFFSET))(nullptr);
		}

		::System::Void set_IMGUIEventInterests(::UnityEngine::EventInterests* arg)
		{
			((::System::Void(*)(::UnityEngine::EventInterests*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_IMGUIEVENTINTERESTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ScriptableObject* get_ownerObject()
		{
			return (return (::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_OWNEROBJECT_OFFSET))(nullptr);
		}

		::System::Void set_ownerObject(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_OWNEROBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::SavePersistentViewData* get_saveViewData()
		{
			return (return (::UnityEngine::UIElements::SavePersistentViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SAVEVIEWDATA_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::GetViewDataDictionary* get_getViewDataDictionary()
		{
			return (return (::UnityEngine::UIElements::GetViewDataDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_GETVIEWDATADICTIONARY_OFFSET))(nullptr);
		}

		::System::Int32 get_IMGUIContainersCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_IMGUICONTAINERSCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IMGUIContainersCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_IMGUICONTAINERSCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_focusController(::UnityEngine::UIElements::FocusController* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_FOCUSCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IMGUIContainer* get_rootIMGUIContainer()
		{
			return (return (::UnityEngine::UIElements::IMGUIContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_ROOTIMGUICONTAINER_OFFSET))(nullptr);
		}

		::System::Void add_panelDisposed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_PANELDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_panelDisposed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_PANELDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Repaint(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REPAINT_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateLayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_VALIDATELAYOUT_OFFSET))(nullptr);
		}

		::System::Void UpdateAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATEANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void UpdateBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATEBINDINGS_OFFSET))(nullptr);
		}

		::System::Void ApplyStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_APPLYSTYLES_OFFSET))(nullptr);
		}

		::System::Single get_scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_scale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void set_pixelsPerPoint(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_PIXELSPERPOINT_OFFSET))(arg, nullptr);
		}

		::System::Single get_scaledPixelsPerPoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SCALEDPIXELSPERPOINT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::PanelClearSettings* get_clearSettings()
		{
			return (return (::UnityEngine::UIElements::PanelClearSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CLEARSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_clearSettings(::UnityEngine::UIElements::PanelClearSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PanelClearSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CLEARSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_duringLayoutPhase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DURINGLAYOUTPHASE_OFFSET))(nullptr);
		}

		::System::Void set_duringLayoutPhase(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DURINGLAYOUTPHASE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_version()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_VERSION_OFFSET))(nullptr);
		}

		::System::UInt32 get_hierarchyVersion()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_HIERARCHYVERSION_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::RepaintData* get_repaintData()
		{
			return (return (::UnityEngine::UIElements::RepaintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_REPAINTDATA_OFFSET))(nullptr);
		}

		::System::Void set_repaintData(::UnityEngine::UIElements::RepaintData* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::RepaintData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_REPAINTDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ICursorManager* get_cursorManager()
		{
			return (return (::UnityEngine::UIElements::ICursorManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CURSORMANAGER_OFFSET))(nullptr);
		}

		::System::Void set_cursorManager(::UnityEngine::UIElements::ICursorManager* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ICursorManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CURSORMANAGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ContextualMenuManager* get_contextualMenuManager()
		{
			return (return (::UnityEngine::UIElements::ContextualMenuManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CONTEXTUALMENUMANAGER_OFFSET))(nullptr);
		}

		::System::Void set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ContextualMenuManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CONTEXTUALMENUMANAGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_visualTree()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_VISUALTREE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventDispatcher* get_dispatcher()
		{
			return (return (::UnityEngine::UIElements::EventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPATCHER_OFFSET))(nullptr);
		}

		::System::Void set_dispatcher(::UnityEngine::UIElements::EventDispatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPATCHER_OFFSET))(arg, nullptr);
		}

		::System::Void SendEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::DispatchMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::IScheduler* get_scheduler()
		{
			return (return (::UnityEngine::UIElements::IScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_SCHEDULER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IStylePropertyAnimationSystem* get_styleAnimationSystem()
		{
			return (return (::UnityEngine::UIElements::IStylePropertyAnimationSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_STYLEANIMATIONSYSTEM_OFFSET))(nullptr);
		}

		::System::Void set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IStylePropertyAnimationSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_STYLEANIMATIONSYSTEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ContextType* get_contextType()
		{
			return (return (::UnityEngine::UIElements::ContextType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_CONTEXTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_contextType(::UnityEngine::UIElements::ContextType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_CONTEXTTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_PICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* PickAll(::UnityEngine::Vector2* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_PICKALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase* arg)
		{
			return (return (::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::UnityEngine::UIElements::VisualTreeUpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETUPDATER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GETTOPELEMENTUNDERPOINTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* RecomputeTopElementUnderPointer(::System::Int32 arg, ::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::System::Int32, ::UnityEngine::Vector2*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearCachedElementUnderPointer(::System::Int32 arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_CLEARCACHEDELEMENTUNDERPOINTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CommitElementUnderPointers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_COMMITELEMENTUNDERPOINTERS_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_standardShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_STANDARDSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_standardWorldSpaceShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_STANDARDWORLDSPACESHADER_OFFSET))(nullptr);
		}

		::System::Void add_standardShaderChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_STANDARDSHADERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_standardShaderChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_STANDARDSHADERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_standardWorldSpaceShaderChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_STANDARDWORLDSPACESHADERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_standardWorldSpaceShaderChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_STANDARDWORLDSPACESHADERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_atlasChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_ATLASCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_atlasChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_ATLASCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeAtlasChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEATLASCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::AtlasBase* get_atlas()
		{
			return (return (::UnityEngine::UIElements::AtlasBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_atlas(::UnityEngine::UIElements::AtlasBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AtlasBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeUpdateMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEUPDATEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::HierarchyEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_ADD_HIERARCHYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::HierarchyEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_REMOVE_HIERARCHYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::HierarchyChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEHIERARCHYCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeBeforeUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_INVOKEBEFOREUPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateElementUnderPointers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATEELEMENTUNDERPOINTERS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALELEMENTPANEL_UPDATE_OFFSET))(nullptr);
		}

	};
}

