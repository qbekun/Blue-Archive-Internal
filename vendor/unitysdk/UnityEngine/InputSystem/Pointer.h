#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem { class Pointer; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EAC180)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x9EAD430)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x9EAD440)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x9EAD450)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9EAD460)
#define UNITYENGINE_INPUTSYSTEM_POINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EAC480)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x9EAD480)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EAD490)
#define UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9EAC7A0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x9EAD4E0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9EAD500)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9EAD520)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9EAD530)
#define UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EACB90)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EAD550)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x9EAD5A0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EAC3F0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EAD5C0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x9EAD600)
#define UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EAD620)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9EAD6A0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EAC9D0)
#define UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9EAD6B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pointer_TypeDefinitionIndex = 28495;

	class Pointer : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _press_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::IntegerControl* _displayIndex_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Pointer* _current_k__BackingField; // 0x0

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* get_delta()
		{
			return (return (::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_DELTA_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_press()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESS_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_displayIndex()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_DISPLAYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.GETSTATEOFFSETFOREVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_press(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_pressure()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_PRESSURE_OFFSET))(nullptr);
		}

		::System::Void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_PRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Pointer* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Pointer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::DeltaControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Pointer* get_current()
		{
			return (return (::UnityEngine::InputSystem::Pointer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_SET_DISPLAYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_position()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_radius()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_POINTER_GET_RADIUS_OFFSET))(nullptr);
		}

	};
}

