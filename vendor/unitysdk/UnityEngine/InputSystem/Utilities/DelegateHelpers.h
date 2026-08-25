#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET UNITYSDK_OFFSET(0x9E7EBF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_ANYCALLBACKRETURNSTRUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_ANDINVOKERETURNEDACTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_ANYCALLBACKRETURNSOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 28915;

	class DelegateHelpers : public Il2CppObject
	{
	public:
		::System::Void InvokeCallbacksSafe(Il2CppObject&* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void InvokeCallbacksSafe(Il2CppObject&* arg, Il2CppObject* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void InvokeCallbacksSafe(Il2CppObject&* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, Il2CppObject*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Boolean InvokeCallbacksSafe_AnyCallbackReturnsTrue(Il2CppObject&* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, Il2CppObject*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_ANYCALLBACKRETURNSTRUE_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void InvokeCallbacksSafe_AndInvokeReturnedActions(Il2CppObject&* arg, Il2CppObject* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_ANDINVOKERETURNEDACTIONS_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Boolean InvokeCallbacksSafe_AnyCallbackReturnsObject(Il2CppObject&* arg, Il2CppObject* arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_ANYCALLBACKRETURNSOBJECT_OFFSET))(arg, arg, str, arg, nullptr);
		}

	};
}

