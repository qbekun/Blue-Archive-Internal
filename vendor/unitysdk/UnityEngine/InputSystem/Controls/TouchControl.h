#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class TouchPressControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class TouchPhaseControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DoubleControl; }
namespace UnityEngine::InputSystem::LowLevel { class TouchState; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E796D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x9E79A50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_INDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x9E79A60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x9E79A80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAP_OFFSET UNITYSDK_OFFSET(0x9E79A90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x9E79AB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x9E79AD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x9E79AF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9E79B10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x9E79B30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9E79B40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x9E79B50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x9E79B60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E79B70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E79BF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9E79C80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9E79C90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9E79CA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x9E79CC0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAP_OFFSET UNITYSDK_OFFSET(0x9E79CE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9E79CF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x9E79D00)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9E79D10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x9E79D30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x9E79D40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E79D60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E79DD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9E79E40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_INDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x9E79E60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x9E79E70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9E79E90)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchControl_TypeDefinitionIndex = 28892;

	class TouchControl : public <>c__DisplayClass3_0
	{
	public:
		::UnityEngine::InputSystem::Controls::TouchPressControl* _press_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::IntegerControl* _displayIndex_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::IntegerControl* _touchId_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::TouchPhaseControl* _phase_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _indirectTouch_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _tap_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::IntegerControl* _tapCount_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::DoubleControl* _startTime_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector2Control* _startPosition_k__BackingField; // 0x1D0

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_displayIndex()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DISPLAYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_indirectTouch(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_INDIRECTTOUCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::TouchPressControl* get_press()
		{
			return (return (::UnityEngine::InputSystem::Controls::TouchPressControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESS_OFFSET))(nullptr);
		}

		::System::Void set_tap(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchId(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TOUCHID_OFFSET))(arg, nullptr);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::Controls::TouchPhaseControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchPhaseControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PHASE_OFFSET))(arg, nullptr);
		}

		::System::Void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::DeltaControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::System::Void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESSURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_pressure()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESSURE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::DoubleControl* get_startTime()
		{
			return (return (::UnityEngine::InputSystem::Controls::DoubleControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTTIME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* get_delta()
		{
			return (return (::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DELTA_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::TouchPhaseControl* get_phase()
		{
			return (return (::UnityEngine::InputSystem::Controls::TouchPhaseControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PHASE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::TouchState* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::TouchState*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_tapCount()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAPCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_radius()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_startPosition(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_tap()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_position()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_startPosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_startTime(::UnityEngine::InputSystem::Controls::DoubleControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::DoubleControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_touchId()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TOUCHID_OFFSET))(nullptr);
		}

		::System::Void set_press(::UnityEngine::InputSystem::Controls::TouchPressControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::TouchPressControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESS_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::TouchState*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_ISINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_indirectTouch()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_INDIRECTTOUCH_OFFSET))(nullptr);
		}

		::System::Void set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DISPLAYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_tapCount(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAPCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

