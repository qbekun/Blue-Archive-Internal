#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_EVENTS_INVOKABLECALL`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_INVOKABLECALL`3_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_INVOKABLECALL`3_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_INVOKABLECALL`3_FIND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall`3_TypeDefinitionIndex = 31288;

	class InvokableCall`3 : public ::TriInspector::ShowInInspectorAttribute
	{
	public:
		Il2CppObject* Delegate; // 0x0

		::System::Void .ctor(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL`3_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL`3_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL`3_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Find(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL`3_FIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

