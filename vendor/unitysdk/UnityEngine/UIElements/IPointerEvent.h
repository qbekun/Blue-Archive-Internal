#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class EventModifiers; }

#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_POINTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ISPRIMARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_PRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_TANGENTIALPRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_COMMANDKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ACTIONKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IPointerEvent_TypeDefinitionIndex = 30528;

	class IPointerEvent : public Il2CppObject
	{
	public:
		::System::Int32 get_pointerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_POINTERID_OFFSET))(nullptr);
		}

		::System::String* get_pointerType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_POINTERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_isPrimary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ISPRIMARY_OFFSET))(nullptr);
		}

		::System::Int32 get_button()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Int32 get_pressedButtons()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_PRESSEDBUTTONS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_localPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_deltaPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_DELTAPOSITION_OFFSET))(nullptr);
		}

		::System::Single get_deltaTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Single get_tangentialPressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_TANGENTIALPRESSURE_OFFSET))(nullptr);
		}

		::System::Single get_altitudeAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ALTITUDEANGLE_OFFSET))(nullptr);
		}

		::System::Single get_azimuthAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_AZIMUTHANGLE_OFFSET))(nullptr);
		}

		::System::Single get_twist()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_TWIST_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_radius()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_RADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_radiusVariance()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_RADIUSVARIANCE_OFFSET))(nullptr);
		}

		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Boolean get_shiftKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ctrlKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_CTRLKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_commandKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_COMMANDKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_altKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ALTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_actionKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENT_GET_ACTIONKEY_OFFSET))(nullptr);
		}

	};
}

