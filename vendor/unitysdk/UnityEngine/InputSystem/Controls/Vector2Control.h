#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E7A390)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x9E7A480)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x9E7A490)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x9E7A4B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E7A4C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E7A670)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E77680)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x9E7A730)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E7A750)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E774E0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int Vector2Control_TypeDefinitionIndex = 28895;

	class Vector2Control : public <OnState>d__4
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0x110
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x118

		::System::Void WriteValueIntoState(::UnityEngine::Vector2* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_X_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_GET_X_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::System::Single EvaluateMagnitude(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_SET_Y_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR2CONTROL_.CTOR_OFFSET))(nullptr);
		}

	};
}

