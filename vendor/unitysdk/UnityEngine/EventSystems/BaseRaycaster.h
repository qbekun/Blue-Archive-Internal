#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseRaycaster; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA49CE20)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA49CE30)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA49CE80)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA49CEB0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48F5E0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA49D290)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA49D2E0)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_RENDERORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0xA49D310)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0xA49D320)
#define UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_ROOTRAYCASTER_OFFSET UNITYSDK_OFFSET(0xA491C80)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseRaycaster_TypeDefinitionIndex = 34934;

	class BaseRaycaster : public Il2CppObject
	{
	public:
		::UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster; // 0x18

		::System::Int32 get_priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_EVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_ONCANVASHIERARCHYCHANGED_OFFSET))(nullptr);
		}

		::System::Int32 get_renderOrderPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_RENDERORDERPRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 get_sortOrderPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_SORTORDERPRIORITY_OFFSET))(nullptr);
		}

		::UnityEngine::EventSystems::BaseRaycaster* get_rootRaycaster()
		{
			return (return (::UnityEngine::EventSystems::BaseRaycaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASERAYCASTER_GET_ROOTRAYCASTER_OFFSET))(nullptr);
		}

	};
}

