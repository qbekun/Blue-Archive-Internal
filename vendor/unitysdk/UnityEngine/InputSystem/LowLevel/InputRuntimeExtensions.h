#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTRUNTIMEEXTENSIONS_DEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputRuntimeExtensions_TypeDefinitionIndex = 28802;

	class InputRuntimeExtensions : public Il2CppObject
	{
	public:
		::System::Int64 DeviceCommand(::UnityEngine::InputSystem::LowLevel::IInputRuntime* arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTRUNTIMEEXTENSIONS_DEVICECOMMAND_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

