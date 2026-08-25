#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class RaycastResult; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_TWIST_OFFSET UNITYSDK_OFFSET(0xA48F9B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_TANGENTIALPRESSURE_OFFSET UNITYSDK_OFFSET(0xA48F9C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DELTA_OFFSET UNITYSDK_OFFSET(0xA48F9D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA48F9E0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_WORLDNORMAL_OFFSET UNITYSDK_OFFSET(0xA48F9F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERDRAG_OFFSET UNITYSDK_OFFSET(0xA48FA10)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48FA20)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xA48FC80)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0xA48FC90)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_LASTPRESS_OFFSET UNITYSDK_OFFSET(0xA48FCA0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0xA48FCB0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSPOSITION_OFFSET UNITYSDK_OFFSET(0xA48FCC0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_USEDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA48FCD0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_ELIGIBLEFORCLICK_OFFSET UNITYSDK_OFFSET(0xA48FCE0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKTIME_OFFSET UNITYSDK_OFFSET(0xA48FCF0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RAWPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA48FD00)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA48FD10)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_REENTERED_OFFSET UNITYSDK_OFFSET(0xA48FD20)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERID_OFFSET UNITYSDK_OFFSET(0xA48FD30)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA48FD40)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_FULLYEXITED_OFFSET UNITYSDK_OFFSET(0xA48FD50)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0xA48FD60)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0xA48FD70)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESSRAYCAST_OFFSET UNITYSDK_OFFSET(0xA48FD80)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_LASTPRESS_OFFSET UNITYSDK_OFFSET(0xA48FDD0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xA48FDE0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xA48FE00)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0xA48FE10)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA48FE20)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA48FE30)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA48FE40)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DRAGGING_OFFSET UNITYSDK_OFFSET(0xA48FE50)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISPOINTERMOVING_OFFSET UNITYSDK_OFFSET(0xA48FE60)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0xA48FE80)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERENTER_OFFSET UNITYSDK_OFFSET(0xA48FE90)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_PRESSPOSITION_OFFSET UNITYSDK_OFFSET(0xA48FEA0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERCURRENTRAYCAST_OFFSET UNITYSDK_OFFSET(0xA48FEB0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSEVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA48FEF0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKTIME_OFFSET UNITYSDK_OFFSET(0xA48FF80)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0xA48FF90)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESSRAYCAST_OFFSET UNITYSDK_OFFSET(0xA48FFA0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA48FFE0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERENTER_OFFSET UNITYSDK_OFFSET(0xA490070)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_WORLDNORMAL_OFFSET UNITYSDK_OFFSET(0xA490080)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERCURRENTRAYCAST_OFFSET UNITYSDK_OFFSET(0xA4900A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0xA4900E0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_REENTERED_OFFSET UNITYSDK_OFFSET(0xA4900F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RAWPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA490100)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_FULLYEXITED_OFFSET UNITYSDK_OFFSET(0xA490110)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_TWIST_OFFSET UNITYSDK_OFFSET(0xA490120)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xA490130)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERDRAG_OFFSET UNITYSDK_OFFSET(0xA490140)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_USEDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA490150)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xA490160)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_TANGENTIALPRESSURE_OFFSET UNITYSDK_OFFSET(0xA490180)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DRAGGING_OFFSET UNITYSDK_OFFSET(0xA490190)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ELIGIBLEFORCLICK_OFFSET UNITYSDK_OFFSET(0xA4901A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0xA4901B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0xA4901C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4901D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ENTEREVENTCAMERA_OFFSET UNITYSDK_OFFSET(0xA4911F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA491280)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA491290)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISSCROLLING_OFFSET UNITYSDK_OFFSET(0xA4912A0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA4912C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERID_OFFSET UNITYSDK_OFFSET(0xA4912D0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerEventData_TypeDefinitionIndex = 34893;

	class PointerEventData : public ::TriInspector::ListDrawerSettingsAttribute
	{
	public:
		::UnityEngine::GameObject* _pointerEnter_k__BackingField; // 0x20
		::UnityEngine::GameObject* m_PointerPress; // 0x28
		::UnityEngine::GameObject* _lastPress_k__BackingField; // 0x30
		::UnityEngine::GameObject* _rawPointerPress_k__BackingField; // 0x38
		::UnityEngine::GameObject* _pointerDrag_k__BackingField; // 0x40
		::UnityEngine::GameObject* _pointerClick_k__BackingField; // 0x48
		::UnityEngine::EventSystems::RaycastResult* _pointerCurrentRaycast_k__BackingField; // 0x50
		::UnityEngine::EventSystems::RaycastResult* _pointerPressRaycast_k__BackingField; // 0xA0
		Il2CppObject* hovered; // 0xF0
		::System::Boolean _eligibleForClick_k__BackingField; // 0xF8
		::System::Int32 _pointerId_k__BackingField; // 0xFC
		::UnityEngine::Vector2* _position_k__BackingField; // 0x100
		::UnityEngine::Vector2* _delta_k__BackingField; // 0x108
		::UnityEngine::Vector2* _pressPosition_k__BackingField; // 0x110
		::UnityEngine::Vector3* _worldPosition_k__BackingField; // 0x118
		::UnityEngine::Vector3* _worldNormal_k__BackingField; // 0x124
		::System::Single _clickTime_k__BackingField; // 0x130
		::System::Int32 _clickCount_k__BackingField; // 0x134
		::UnityEngine::Vector2* _scrollDelta_k__BackingField; // 0x138
		::System::Boolean _useDragThreshold_k__BackingField; // 0x140
		::System::Boolean _dragging_k__BackingField; // 0x141
		InputButton* _button_k__BackingField; // 0x144
		::System::Single _pressure_k__BackingField; // 0x148
		::System::Single _tangentialPressure_k__BackingField; // 0x14C
		::System::Single _altitudeAngle_k__BackingField; // 0x150
		::System::Single _azimuthAngle_k__BackingField; // 0x154
		::System::Single _twist_k__BackingField; // 0x158
		::UnityEngine::Vector2* _radius_k__BackingField; // 0x15C
		::UnityEngine::Vector2* _radiusVariance_k__BackingField; // 0x164
		::System::Boolean _fullyExited_k__BackingField; // 0x16C
		::System::Boolean _reentered_k__BackingField; // 0x16D

		::System::Void set_twist(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_TWIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_tangentialPressure(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_TANGENTIALPRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Void set_delta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerClick(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_worldNormal(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_WORLDNORMAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerDrag(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::EventSystems::EventSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_delta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_scrollDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_SCROLLDELTA_OFFSET))(nullptr);
		}

		::System::Void set_lastPress(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_LASTPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_pressure(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_PRESSURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_pressPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_useDragThreshold()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_USEDRAGTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_eligibleForClick(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_ELIGIBLEFORCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_clickTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_rawPointerPress(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RAWPOINTERPRESS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_radius()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_reentered(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_REENTERED_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_position()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_fullyExited()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_FULLYEXITED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_radiusVariance()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RADIUSVARIANCE_OFFSET))(nullptr);
		}

		::System::Single get_azimuthAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_AZIMUTHANGLE_OFFSET))(nullptr);
		}

		::System::Void set_pointerPressRaycast(::UnityEngine::EventSystems::RaycastResult* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::RaycastResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESSRAYCAST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_lastPress()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_LASTPRESS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_worldPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_WORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_clickCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_CLICKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_radiusVariance(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RADIUSVARIANCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_button(InputButton* arg)
		{
			((::System::Void(*)(InputButton*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_BUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_radius(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_pointerClick()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERCLICK_OFFSET))(nullptr);
		}

		::System::Void set_dragging(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_DRAGGING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPointerMoving()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISPOINTERMOVING_OFFSET))(nullptr);
		}

		::System::Single get_altitudeAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ALTITUDEANGLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_pointerEnter()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERENTER_OFFSET))(nullptr);
		}

		::System::Void set_pressPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_PRESSPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerCurrentRaycast(::UnityEngine::EventSystems::RaycastResult* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::RaycastResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERCURRENTRAYCAST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_pressEventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSEVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Single get_clickTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKTIME_OFFSET))(nullptr);
		}

		::System::Void set_azimuthAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_AZIMUTHANGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::RaycastResult* get_pointerPressRaycast()
		{
			return (return (::UnityEngine::EventSystems::RaycastResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESSRAYCAST_OFFSET))(nullptr);
		}

		::System::Void set_pointerPress(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerEnter(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POINTERENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_worldNormal()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_WORLDNORMAL_OFFSET))(nullptr);
		}

		::UnityEngine::EventSystems::RaycastResult* get_pointerCurrentRaycast()
		{
			return (return (::UnityEngine::EventSystems::RaycastResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERCURRENTRAYCAST_OFFSET))(nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Boolean get_reentered()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_REENTERED_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_rawPointerPress()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_RAWPOINTERPRESS_OFFSET))(nullptr);
		}

		::System::Void set_fullyExited(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_FULLYEXITED_OFFSET))(arg, nullptr);
		}

		::System::Single get_twist()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_TWIST_OFFSET))(nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_pointerDrag()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERDRAG_OFFSET))(nullptr);
		}

		::System::Void set_useDragThreshold(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_USEDRAGTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Void set_worldPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_WORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_tangentialPressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_TANGENTIALPRESSURE_OFFSET))(nullptr);
		}

		::System::Boolean get_dragging()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_DRAGGING_OFFSET))(nullptr);
		}

		::System::Boolean get_eligibleForClick()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ELIGIBLEFORCLICK_OFFSET))(nullptr);
		}

		::System::Void set_altitudeAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_ALTITUDEANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_scrollDelta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_SCROLLDELTA_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_enterEventCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_ENTEREVENTCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_SET_POSITION_OFFSET))(arg, nullptr);
		}

		InputButton* get_button()
		{
			return (return (InputButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Boolean IsScrolling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_ISSCROLLING_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_pointerPress()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERPRESS_OFFSET))(nullptr);
		}

		::System::Int32 get_pointerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTEREVENTDATA_GET_POINTERID_OFFSET))(nullptr);
		}

	};
}

