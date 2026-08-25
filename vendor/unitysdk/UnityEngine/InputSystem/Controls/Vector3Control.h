#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x9E7A820)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E7A840)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x9E7A900)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E7A910)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E7AA00)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E7AAF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x9E7AD30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x9E7AD40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E7AD60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7AE60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x9E7AED0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x9E7AEE0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int Vector3Control_TypeDefinitionIndex = 28896;

	class Vector3Control : public ::MX::MinigameCCG::Procedures::FilterTargetEntitiesByCondition
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0x118
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0x128

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET))(arg, nullptr);
		}

		::System::Single EvaluateMagnitude(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET))(nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector3* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET))(nullptr);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET))(arg, nullptr);
		}

	};
}

