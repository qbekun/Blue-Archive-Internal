#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ISAVEDSTATE_RESTORESAVEDSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ISAVEDSTATE_STATICDISPOSECURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ISavedState_TypeDefinitionIndex = 28954;

	class ISavedState : public Il2CppObject
	{
	public:
		::System::Void RestoreSavedState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ISAVEDSTATE_RESTORESAVEDSTATE_OFFSET))(nullptr);
		}

		::System::Void StaticDisposeCurrentState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ISAVEDSTATE_STATICDISPOSECURRENTSTATE_OFFSET))(nullptr);
		}

	};
}

