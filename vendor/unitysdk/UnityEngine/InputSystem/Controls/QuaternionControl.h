#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x9E78CC0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x9E78CD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E78CE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_W_OFFSET UNITYSDK_OFFSET(0x9E78E10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E78E20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_W_OFFSET UNITYSDK_OFFSET(0x9E78EA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E78EC0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x9E791C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E791E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E792F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x9E79430)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x9E79440)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x9E79460)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int QuaternionControl_TypeDefinitionIndex = 28890;

	class QuaternionControl : public ::MX::MinigameCCG::Procedures::CCGSkillVFXData
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::AxisControl* _w_k__BackingField; // 0x138

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Y_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Z_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_w()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_W_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_w(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_W_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Z_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Quaternion* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_X_OFFSET))(arg, nullptr);
		}

	};
}

