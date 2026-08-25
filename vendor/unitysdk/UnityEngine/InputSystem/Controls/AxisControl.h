#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x9E766A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET UNITYSDK_OFFSET(0x9E767A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E76820)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E76890)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E76970)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E76B20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x9E76C40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E76D20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E76D70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E76E50)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AxisControl_TypeDefinitionIndex = 28879;

	class AxisControl : public <OnState>d__5
	{
	public:
		Clamp* clamp; // 0x108
		::System::Single clampMin; // 0x10C
		::System::Single clampMax; // 0x110
		::System::Single clampConstant; // 0x114
		::System::Boolean invert; // 0x118
		::System::Boolean normalize; // 0x119
		::System::Single normalizeMin; // 0x11C
		::System::Single normalizeMax; // 0x120
		::System::Single normalizeZero; // 0x124
		::System::Boolean scale; // 0x128
		::System::Single scaleFactor; // 0x12C

		::System::Single Preprocess(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Single Unpreprocess(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::System::Single arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Single, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareValue(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single EvaluateMagnitude(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Single EvaluateMagnitude(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

	};
}

