#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Ray&; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_MAXRAYINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0xA49E270)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_COMPUTERAYANDDISTANCE_OFFSET UNITYSDK_OFFSET(0xA49DE00)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_FINALEVENTMASK_OFFSET UNITYSDK_OFFSET(0xA49E160)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49E240)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_MAXRAYINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0xA49E280)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA49E290)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0xA49E340)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA49E350)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0xA49E8B0)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0xA49E950)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PhysicsRaycaster_TypeDefinitionIndex = 34937;

	class PhysicsRaycaster : public ::TriInspector::TriMessageType
	{
	public:
		::System::Int32 kNoEventMaskSet; // 0x0
		::UnityEngine::Camera* m_EventCamera; // 0x20
		::UnityEngine::LayerMask* m_EventMask; // 0x28
		::System::Int32 m_MaxRayIntersections; // 0x2C
		::System::Int32 m_LastMaxRayIntersections; // 0x30
		::Il2CppArray<::System::Object*>* m_Hits; // 0x38

		::System::Void set_maxRayIntersections(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_MAXRAYINTERSECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData* arg, ::UnityEngine::Ray&* arg, int32_t&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Ray&*, int32_t&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_COMPUTERAYANDDISTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_finalEventMask()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_FINALEVENTMASK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_maxRayIntersections()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_MAXRAYINTERSECTIONS_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_eventMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_SET_EVENTMASK_OFFSET))(arg, nullptr);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_DEPTH_OFFSET))(nullptr);
		}

		::UnityEngine::LayerMask* get_eventMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICSRAYCASTER_GET_EVENTMASK_OFFSET))(nullptr);
		}

	};
}

