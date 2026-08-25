#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTARRAYEXTENSIONS_CONTAINSREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTARRAYEXTENSIONS_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTARRAYEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InputArrayExtensions_TypeDefinitionIndex = 28921;

	class InputArrayExtensions : public Il2CppObject
	{
	public:
		::System::Boolean ContainsReference(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTARRAYEXTENSIONS_CONTAINSREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOfReference(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTARRAYEXTENSIONS_INDEXOFREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTARRAYEXTENSIONS_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

	};
}

