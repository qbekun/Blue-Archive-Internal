#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_HAPTICS_IHAPTICS_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_IHAPTICS_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_IHAPTICS_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Haptics
{
	inline static constexpr unsigned int IHaptics_TypeDefinitionIndex = 28713;

	class IHaptics : public Il2CppObject
	{
	public:
		::System::Void ResetHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_IHAPTICS_RESETHAPTICS_OFFSET))(nullptr);
		}

		::System::Void ResumeHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_IHAPTICS_RESUMEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void PauseHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_IHAPTICS_PAUSEHAPTICS_OFFSET))(nullptr);
		}

	};
}

