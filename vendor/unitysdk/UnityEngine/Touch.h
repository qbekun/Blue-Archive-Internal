#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class TouchPhase; }
namespace UnityEngine { class TouchType; }

#define UNITYENGINE_TOUCH_GET_FINGERID_OFFSET UNITYSDK_OFFSET(0xA2903D0)
#define UNITYENGINE_TOUCH_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA2903E0)
#define UNITYENGINE_TOUCH_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA2903F0)
#define UNITYENGINE_TOUCH_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0xA290400)
#define UNITYENGINE_TOUCH_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0xA290410)
#define UNITYENGINE_TOUCH_GET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xA290420)
#define UNITYENGINE_TOUCH_SET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xA290430)
#define UNITYENGINE_TOUCH_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xA290440)
#define UNITYENGINE_TOUCH_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0xA290450)
#define UNITYENGINE_TOUCH_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xA290460)
#define UNITYENGINE_TOUCH_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0xA290470)
#define UNITYENGINE_TOUCH_GET_MAXIMUMPOSSIBLEPRESSURE_OFFSET UNITYSDK_OFFSET(0xA290480)
#define UNITYENGINE_TOUCH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA290490)
#define UNITYENGINE_TOUCH_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0xA2904A0)
#define UNITYENGINE_TOUCH_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0xA2904B0)
#define UNITYENGINE_TOUCH_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xA2904C0)
#define UNITYENGINE_TOUCH_GET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0xA2904D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Touch_TypeDefinitionIndex = 37744;

	class Touch : public Il2CppObject
	{
	public:
		::System::Int32 m_FingerId; // 0x10
		::UnityEngine::Vector2* m_Position; // 0x14
		::UnityEngine::Vector2* m_RawPosition; // 0x1C
		::UnityEngine::Vector2* m_PositionDelta; // 0x24
		::System::Single m_TimeDelta; // 0x2C
		::System::Int32 m_TapCount; // 0x30
		::UnityEngine::TouchPhase* m_Phase; // 0x34
		::UnityEngine::TouchType* m_Type; // 0x38
		::System::Single m_Pressure; // 0x3C
		::System::Single m_maximumPossiblePressure; // 0x40
		::System::Single m_Radius; // 0x44
		::System::Single m_RadiusVariance; // 0x48
		::System::Single m_AltitudeAngle; // 0x4C
		::System::Single m_AzimuthAngle; // 0x50

		::System::Int32 get_fingerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_FINGERID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_position()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_rawPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_RAWPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_rawPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_RAWPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_deltaPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_DELTAPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_deltaPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_SET_DELTAPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_deltaTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Int32 get_tapCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_TAPCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::TouchPhase* get_phase()
		{
			return (return (::UnityEngine::TouchPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Single get_maximumPossiblePressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_MAXIMUMPOSSIBLEPRESSURE_OFFSET))(nullptr);
		}

		::UnityEngine::TouchType* get_type()
		{
			return (return (::UnityEngine::TouchType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Single get_altitudeAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_ALTITUDEANGLE_OFFSET))(nullptr);
		}

		::System::Single get_azimuthAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_AZIMUTHANGLE_OFFSET))(nullptr);
		}

		::System::Single get_radius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Single get_radiusVariance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOUCH_GET_RADIUSVARIANCE_OFFSET))(nullptr);
		}

	};
}

