#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class TouchPhase; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E79EB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E79F20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E79F80)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchPhaseControl_TypeDefinitionIndex = 28893;

	class TouchPhaseControl : public ::MX::MinigameCCG::Procedures::ExecuteExpression
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::TouchPhase* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::InputSystem::TouchPhase*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::TouchPhase*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

