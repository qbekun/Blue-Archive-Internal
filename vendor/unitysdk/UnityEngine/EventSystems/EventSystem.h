#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseInputModule; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::EventSystems { class RaycastResult; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }

#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA4912E0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA4913C0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDNAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0xA491570)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDNAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0xA491580)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_PIXELDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA491590)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_PIXELDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA4915A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTINPUTMODULE_OFFSET UNITYSDK_OFFSET(0xA4915B0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_FIRSTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA4915C0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_FIRSTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA4915D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA4915E0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_LASTSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA4915F0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xA491600)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA491610)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEMODULES_OFFSET UNITYSDK_OFFSET(0xA4916A0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ALREADYSELECTING_OFFSET UNITYSDK_OFFSET(0xA4917D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA48F730)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_BASEEVENTDATACACHE_OFFSET UNITYSDK_OFFSET(0xA4917E0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA48C260)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTCOMPARER_OFFSET UNITYSDK_OFFSET(0xA491870)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA491D30)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA491F50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA491FE0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISUITOOLKITACTIVEEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA492070)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDUITOOLKITEVENTS_OFFSET UNITYSDK_OFFSET(0xA492150)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CREATEUITOOLKITPANELGAMEOBJECTSONSTART_OFFSET UNITYSDK_OFFSET(0xA4921D0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETUITOOKITEVENTSYSTEMOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA492250)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CREATEUITOOLKITPANELGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA492480)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_START_OFFSET UNITYSDK_OFFSET(0xA492750)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA492A10)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA492AC0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA492C50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKMODULES_OFFSET UNITYSDK_OFFSET(0xA492D60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xA492E50)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA492E60)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CHANGEEVENTMODULE_OFFSET UNITYSDK_OFFSET(0xA4930F0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4931F0)
#define UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA493360)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int EventSystem_TypeDefinitionIndex = 34916;

	class EventSystem : public Il2CppObject
	{
	public:
		Il2CppObject* m_SystemInputModules; // 0x18
		::UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule; // 0x20
		Il2CppObject* m_EventSystems; // 0x0
		::UnityEngine::GameObject* m_FirstSelected; // 0x28
		::System::Boolean m_sendNavigationEvents; // 0x30
		::System::Int32 m_DragThreshold; // 0x34
		::UnityEngine::GameObject* m_CurrentSelected; // 0x38
		::System::Boolean m_HasFocus; // 0x40
		::System::Boolean m_SelectionGuard; // 0x41
		::UnityEngine::EventSystems::BaseEventData* m_DummyData; // 0x48
		Il2CppObject* s_RaycastComparer; // 0x8
		UIToolkitOverrideConfig* s_UIToolkitOverride; // 0x10

		::UnityEngine::EventSystems::EventSystem* get_current()
		{
			return (return (::UnityEngine::EventSystems::EventSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::EventSystems::EventSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_sendNavigationEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDNAVIGATIONEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_sendNavigationEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_SENDNAVIGATIONEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_pixelDragThreshold()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_PIXELDRAGTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_pixelDragThreshold(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_PIXELDRAGTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule()
		{
			return (return (::UnityEngine::EventSystems::BaseInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTINPUTMODULE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_firstSelectedGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_FIRSTSELECTEDGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_firstSelectedGameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SET_FIRSTSELECTEDGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_currentSelectedGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CURRENTSELECTEDGAMEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_lastSelectedGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_LASTSELECTEDGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_isFocused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISFOCUSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateModules()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATEMODULES_OFFSET))(nullptr);
		}

		::System::Boolean get_alreadySelecting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ALREADYSELECTING_OFFSET))(nullptr);
		}

		::System::Void SetSelectedGameObject(::UnityEngine::GameObject* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache()
		{
			return (return (::UnityEngine::EventSystems::BaseEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_BASEEVENTDATACACHE_OFFSET))(nullptr);
		}

		::System::Void SetSelectedGameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETSELECTEDGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 RaycastComparer(::UnityEngine::EventSystems::RaycastResult* arg, ::UnityEngine::EventSystems::RaycastResult* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::EventSystems::RaycastResult*, ::UnityEngine::EventSystems::RaycastResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTCOMPARER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RaycastAll(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_RAYCASTALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPointerOverGameObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ISPOINTEROVERGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isUIToolkitActiveEventSystem()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_ISUITOOLKITACTIVEEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Boolean get_sendUIToolkitEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_SENDUITOOLKITEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_createUIToolkitPanelGameObjectsOnStart()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_GET_CREATEUITOOLKITPANELGAMEOBJECTSONSTART_OFFSET))(nullptr);
		}

		::System::Void SetUITookitEventSystemOverride(::UnityEngine::EventSystems::EventSystem* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_SETUITOOKITEVENTSYSTEMOVERRIDE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateUIToolkitPanelGameObject(::UnityEngine::UIElements::BaseRuntimePanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CREATEUITOOLKITPANELGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void TickModules()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TICKMODULES_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ChangeEventModule(::UnityEngine::EventSystems::BaseInputModule* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseInputModule*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_CHANGEEVENTMODULE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EVENTSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

