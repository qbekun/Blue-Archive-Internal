#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E77740)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E778B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E778C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E779C0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DiscreteButtonControl_TypeDefinitionIndex = 28883;

	class DiscreteButtonControl : public Il2CppObject
	{
	public:
		::System::Int32 minValue; // 0x138
		::System::Int32 maxValue; // 0x13C
		::System::Int32 wrapAtValue; // 0x140
		::System::Int32 nullValue; // 0x144
		WriteMode* writeMode; // 0x148

		::System::Void WriteValueIntoState(::System::Single arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Single, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

	};
}

