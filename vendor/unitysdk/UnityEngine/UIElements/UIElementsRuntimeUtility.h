#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Object; }
namespace UnityEngine::UIElements { class DefaultEventSystem; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class PanelSettings; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_ADD_ONCREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA37EB80)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REMOVE_ONCREATEPANEL_OFFSET UNITYSDK_OFFSET(0xA37EC70)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA37ED60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0xA37F190)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_FINDORCREATERUNTIMEPANEL_OFFSET UNITYSDK_OFFSET(0xA37F460)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_DISPOSERUNTIMEPANEL_OFFSET UNITYSDK_OFFSET(0xA37FB10)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REGISTERCACHEDPANELINTERNAL_OFFSET UNITYSDK_OFFSET(0xA37F970)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REMOVECACHEDPANELINTERNAL_OFFSET UNITYSDK_OFFSET(0xA37F720)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOFFSCREENPANELS_OFFSET UNITYSDK_OFFSET(0xA380100)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOVERLAYPANEL_OFFSET UNITYSDK_OFFSET(0xA3804D0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_BEGINRENDEROVERLAYS_OFFSET UNITYSDK_OFFSET(0xA3806F0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_RENDEROVERLAYSBEFOREPRIORITY_OFFSET UNITYSDK_OFFSET(0xA380740)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_ENDRENDEROVERLAYS_OFFSET UNITYSDK_OFFSET(0xA3809F0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GET_ACTIVEEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA380A60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SET_ACTIVEEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA380AB0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GET_USEDEFAULTEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA380B20)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REGISTEREVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA380C20)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_UNREGISTEREVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA380F10)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GET_DEFAULTEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA3810C0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_UPDATERUNTIMEPANELS_OFFSET UNITYSDK_OFFSET(0xA3811B0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_MARKPOTENTIALLYEMPTY_OFFSET UNITYSDK_OFFSET(0xA3816E0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REMOVEUNUSEDPANELS_OFFSET UNITYSDK_OFFSET(0xA3814C0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REGISTERPLAYERLOOPCALLBACK_OFFSET UNITYSDK_OFFSET(0xA37FD00)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_UNREGISTERPLAYERLOOPCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3800A0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SETPANELORDERINGDIRTY_OFFSET UNITYSDK_OFFSET(0xA381830)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GETSORTEDPLAYERPANELS_OFFSET UNITYSDK_OFFSET(0xA380420)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SORTPANELS_OFFSET UNITYSDK_OFFSET(0xA381880)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_MULTIDISPLAYBOTTOMLEFTTOPANELPOSITION_OFFSET UNITYSDK_OFFSET(0xA381AB0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_MULTIDISPLAYTOLOCALSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xA381B20)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SCREENBOTTOMLEFTTOPANELPOSITION_OFFSET UNITYSDK_OFFSET(0xA381C90)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SCREENBOTTOMLEFTTOPANELDELTA_OFFSET UNITYSDK_OFFSET(0xA381D70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsRuntimeUtility_TypeDefinitionIndex = 30220;

	class UIElementsRuntimeUtility : public Il2CppObject
	{
	public:
		Il2CppObject* onCreatePanel; // 0x0
		::System::Boolean s_RegisteredPlayerloopCallback; // 0x8
		Il2CppObject* s_SortedRuntimePanels; // 0x10
		::System::Boolean s_PanelOrderingDirty; // 0x18
		::System::String* s_RepaintProfilerMarkerName; // 0x20
		::Unity::Profiling::ProfilerMarker* s_RepaintProfilerMarker; // 0x28
		::System::Int32 currentOverlayIndex; // 0x30
		::UnityEngine::Object* _activeEventSystem_k__BackingField; // 0x38
		::UnityEngine::UIElements::DefaultEventSystem* s_DefaultEventSystem; // 0x40
		Il2CppObject* s_PotentiallyEmptyPanelSettings; // 0x48

		::System::Void add_onCreatePanel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_ADD_ONCREATEPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onCreatePanel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REMOVE_ONCREATEPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* arg)
		{
			return (return (::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_CREATEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::BaseRuntimePanel* FindOrCreateRuntimePanel(::UnityEngine::ScriptableObject* arg, CreateRuntimePanelDelegate* arg)
		{
			return (return (::UnityEngine::UIElements::BaseRuntimePanel*(*)(::UnityEngine::ScriptableObject*, CreateRuntimePanelDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_FINDORCREATERUNTIMEPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisposeRuntimePanel(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_DISPOSERUNTIMEPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCachedPanelInternal(::System::Int32 arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REGISTERCACHEDPANELINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveCachedPanelInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REMOVECACHEDPANELINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void RepaintOffscreenPanels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOFFSCREENPANELS_OFFSET))(nullptr);
		}

		::System::Void RepaintOverlayPanel(::UnityEngine::UIElements::BaseRuntimePanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOVERLAYPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void BeginRenderOverlays(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_BEGINRENDEROVERLAYS_OFFSET))(arg, nullptr);
		}

		::System::Void RenderOverlaysBeforePriority(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_RENDEROVERLAYSBEFOREPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndRenderOverlays(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_ENDRENDEROVERLAYS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_activeEventSystem()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GET_ACTIVEEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void set_activeEventSystem(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SET_ACTIVEEVENTSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useDefaultEventSystem()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GET_USEDEFAULTEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void RegisterEventSystem(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REGISTEREVENTSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterEventSystem(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_UNREGISTEREVENTSYSTEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DefaultEventSystem* get_defaultEventSystem()
		{
			return (return (::UnityEngine::UIElements::DefaultEventSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GET_DEFAULTEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void UpdateRuntimePanels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_UPDATERUNTIMEPANELS_OFFSET))(nullptr);
		}

		::System::Void MarkPotentiallyEmpty(::UnityEngine::UIElements::PanelSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PanelSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_MARKPOTENTIALLYEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveUnusedPanels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REMOVEUNUSEDPANELS_OFFSET))(nullptr);
		}

		::System::Void RegisterPlayerloopCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REGISTERPLAYERLOOPCALLBACK_OFFSET))(nullptr);
		}

		::System::Void UnregisterPlayerloopCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_UNREGISTERPLAYERLOOPCALLBACK_OFFSET))(nullptr);
		}

		::System::Void SetPanelOrderingDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SETPANELORDERINGDIRTY_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortedPlayerPanels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_GETSORTEDPLAYERPANELS_OFFSET))(nullptr);
		}

		::System::Void SortPanels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SORTPANELS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* MultiDisplayBottomLeftToPanelPosition(::UnityEngine::Vector2* arg, Il2CppObject&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_MULTIDISPLAYBOTTOMLEFTTOPANELPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* MultiDisplayToLocalScreenPosition(::UnityEngine::Vector2* arg, Il2CppObject&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_MULTIDISPLAYTOLOCALSCREENPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SCREENBOTTOMLEFTTOPANELPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* ScreenBottomLeftToPanelDelta(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_SCREENBOTTOMLEFTTOPANELDELTA_OFFSET))(arg, nullptr);
		}

	};
}

