#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA48EB70)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0xA48F290)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA48F2C0)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_CONVERTFLOATBITSTOINT_OFFSET UNITYSDK_OFFSET(0xA48F2B0)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_UNREGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA48F2D0)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_ONPANELDESTROYED_OFFSET UNITYSDK_OFFSET(0xA48F360)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA48F500)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0xA48F510)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_SELECTABLEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA48F270)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0xA48F370)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA48F540)
#define UNITYENGINE_UIELEMENTS_PANELRAYCASTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48F5D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelRaycaster_TypeDefinitionIndex = 34887;

	class PanelRaycaster : public ::TriInspector::TriMessageType
	{
	public:
		::UnityEngine::UIElements::BaseRuntimePanel* m_Panel; // 0x20

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_renderOrderPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_RENDERORDERPRIORITY_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_EVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Int32 ConvertFloatBitsToInt(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_CONVERTFLOATBITSTOINT_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_UNREGISTERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void OnPanelDestroyed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_ONPANELDESTROYED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IPanel* get_panel()
		{
			return (return (::UnityEngine::UIElements::IPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Int32 get_sortOrderPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_SORTORDERPRIORITY_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_selectableGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_GET_SELECTABLEGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_panel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCallbacks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_REGISTERCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELRAYCASTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

