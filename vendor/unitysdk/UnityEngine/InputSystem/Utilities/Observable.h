#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_WHERE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_SELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_SELECTMANY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_TAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_FORDEVICE_OFFSET UNITYSDK_OFFSET(0x9E86460)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_FORDEVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_CALLONCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_CALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Observable_TypeDefinitionIndex = 28939;

	class Observable : public Il2CppObject
	{
	public:
		Il2CppObject* Where(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_WHERE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_SELECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectMany(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_SELECTMANY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Take(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_TAKE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ForDevice(Il2CppObject* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_FORDEVICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ForDevice(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_FORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::IDisposable* CallOnce(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_CALLONCE_OFFSET))(arg, arg, nullptr);
		}

		::System::IDisposable* Call(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVABLE_CALL_OFFSET))(arg, arg, nullptr);
		}

	};
}

