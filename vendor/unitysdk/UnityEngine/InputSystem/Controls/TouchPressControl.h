#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E79FD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E7A0D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E7A120)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7A380)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchPressControl_TypeDefinitionIndex = 28894;

	class TouchPressControl : public Il2CppObject
	{
	public:
		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void WriteValueIntoState(::System::Single arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Single, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_.CTOR_OFFSET))(nullptr);
		}

	};
}

