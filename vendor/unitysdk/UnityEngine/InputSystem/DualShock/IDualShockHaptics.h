#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_IDUALSHOCKHAPTICS_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int IDualShockHaptics_TypeDefinitionIndex = 28698;

	class IDualShockHaptics : public Il2CppObject
	{
	public:
		::System::Void SetLightBarColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_IDUALSHOCKHAPTICS_SETLIGHTBARCOLOR_OFFSET))(arg, nullptr);
		}

	};
}

