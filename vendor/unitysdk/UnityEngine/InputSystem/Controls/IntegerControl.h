#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E78880)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E788F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x9E78980)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E78A80)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int IntegerControl_TypeDefinitionIndex = 28888;

	class IntegerControl : public ::MX::MinigameCCG::Procedures::SkillVFXInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void WriteValueIntoState(::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* CalculateOptimizedControlDataType()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(nullptr);
		}

		::System::Int32 ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

	};
}

