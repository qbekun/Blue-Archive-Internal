#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_CONTAINSREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_HAVEEQUALREFERENCES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ReadOnlyArrayExtensions_TypeDefinitionIndex = 28953;

	class ReadOnlyArrayExtensions : public Il2CppObject
	{
	public:
		::System::Int32 IndexOfReference(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_INDEXOFREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainsReference(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_CONTAINSREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HaveEqualReferences(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_READONLYARRAYEXTENSIONS_HAVEEQUALREFERENCES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

