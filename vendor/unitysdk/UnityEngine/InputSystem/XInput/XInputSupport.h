#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F28ED0)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputSupport_TypeDefinitionIndex = 28606;

	class XInputSupport : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTSUPPORT_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

