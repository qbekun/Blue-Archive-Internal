#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class EventModifiers; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class Touch; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_POINTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_POINTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_POINTERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ISPRIMARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_ISPRIMARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_PRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_PRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_TANGENTIALPRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_TANGENTIALPRESSURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_ALTITUDEANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_AZIMUTHANGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_RADIUSVARIANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_COMMANDKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ACTIONKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.GET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.SET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.GET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.SET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_CURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_CURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_ISMOUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEventBase`1_TypeDefinitionIndex = 30530;

	class PointerEventBase`1 : public ::MX::GameLogic::DBModel::EchelonPresetGroupDB
	{
	public:
		::System::Int32 _pointerId_k__BackingField; // 0x0
		::System::String* _pointerType_k__BackingField; // 0x0
		::System::Boolean _isPrimary_k__BackingField; // 0x0
		::System::Int32 _button_k__BackingField; // 0x0
		::System::Int32 _pressedButtons_k__BackingField; // 0x0
		::UnityEngine::Vector3* _position_k__BackingField; // 0x0
		::UnityEngine::Vector3* _localPosition_k__BackingField; // 0x0
		::UnityEngine::Vector3* _deltaPosition_k__BackingField; // 0x0
		::System::Single _deltaTime_k__BackingField; // 0x0
		::System::Int32 _clickCount_k__BackingField; // 0x0
		::System::Single _pressure_k__BackingField; // 0x0
		::System::Single _tangentialPressure_k__BackingField; // 0x0
		::System::Single _altitudeAngle_k__BackingField; // 0x0
		::System::Single _azimuthAngle_k__BackingField; // 0x0
		::System::Single _twist_k__BackingField; // 0x0
		::UnityEngine::Vector2* _radius_k__BackingField; // 0x0
		::UnityEngine::Vector2* _radiusVariance_k__BackingField; // 0x0
		::UnityEngine::EventModifiers* _modifiers_k__BackingField; // 0x0
		::System::Boolean _UnityEngine.UIElements.IPointerEventInternal.triggeredByOS_k__BackingField; // 0x0
		::System::Boolean _UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer_k__BackingField; // 0x0

		::System::Int32 get_pointerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_POINTERID_OFFSET))(nullptr);
		}

		::System::Void set_pointerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_POINTERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_pointerType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_POINTERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_pointerType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_POINTERTYPE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isPrimary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ISPRIMARY_OFFSET))(nullptr);
		}

		::System::Void set_isPrimary(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_ISPRIMARY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_button()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void set_button(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_BUTTON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_pressedButtons()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_PRESSEDBUTTONS_OFFSET))(nullptr);
		}

		::System::Void set_pressedButtons(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_PRESSEDBUTTONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_localPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_localPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_LOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_deltaPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_DELTAPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_deltaPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_DELTAPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_deltaTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Void set_deltaTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_DELTATIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_clickCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_CLICKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_pressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Void set_pressure(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_PRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Single get_tangentialPressure()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_TANGENTIALPRESSURE_OFFSET))(nullptr);
		}

		::System::Void set_tangentialPressure(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_TANGENTIALPRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Single get_altitudeAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ALTITUDEANGLE_OFFSET))(nullptr);
		}

		::System::Void set_altitudeAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_ALTITUDEANGLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_azimuthAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_AZIMUTHANGLE_OFFSET))(nullptr);
		}

		::System::Void set_azimuthAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_AZIMUTHANGLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_twist()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_TWIST_OFFSET))(nullptr);
		}

		::System::Void set_twist(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_TWIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_radius()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_radius(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_radiusVariance()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_RADIUSVARIANCE_OFFSET))(nullptr);
		}

		::System::Void set_radiusVariance(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_RADIUSVARIANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Void set_modifiers(::UnityEngine::EventModifiers* arg)
		{
			((::System::Void(*)(::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_MODIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shiftKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ctrlKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_CTRLKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_commandKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_COMMANDKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_altKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ALTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_actionKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_ACTIONKEY_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IPointerEventInternal.get_triggeredByOS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.GET_TRIGGEREDBYOS_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IPointerEventInternal.set_triggeredByOS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.SET_TRIGGEREDBYOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IPointerEventInternal.get_recomputeTopElementUnderPointer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.GET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IPointerEventInternal.set_recomputeTopElementUnderPointer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_UNITYENGINE.UIELEMENTS.IPOINTEREVENTINTERNAL.SET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IEventHandler* get_currentTarget()
		{
			return (return (::UnityEngine::UIElements::IEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GET_CURRENTTARGET_OFFSET))(nullptr);
		}

		::System::Void set_currentTarget(::UnityEngine::UIElements::IEventHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_SET_CURRENTTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMouse(::UnityEngine::Event* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_ISMOUSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::Touch* arg, ::UnityEngine::EventModifiers* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Touch*, ::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IPointerEvent* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IPointerEvent*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_PREDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

