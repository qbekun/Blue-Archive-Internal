#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E77BA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E77C10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E77C80)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DoubleControl_TypeDefinitionIndex = 28884;

	class DoubleControl : public ::MX::MinigameCCG::Procedures::CCGVFXSpawnPosition
	{
	public:
		::System::Void WriteValueIntoState(::System::Double arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Double, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Double ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Double(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

	};
}

