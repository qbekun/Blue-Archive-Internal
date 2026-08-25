#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E76500)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E76670)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AnyKeyControl_TypeDefinitionIndex = 28877;

	class AnyKeyControl : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

	};
}

