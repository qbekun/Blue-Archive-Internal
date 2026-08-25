#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_EVENTS_INVOKABLECALL_ADD_DELEGATE_OFFSET UNITYSDK_OFFSET(0xA248DE0)
#define UNITYENGINE_EVENTS_INVOKABLECALL_REMOVE_DELEGATE_OFFSET UNITYSDK_OFFSET(0xA248E80)
#define UNITYENGINE_EVENTS_INVOKABLECALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248F20)
#define UNITYENGINE_EVENTS_INVOKABLECALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA249060)
#define UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0xA249100)
#define UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0xA2491C0)
#define UNITYENGINE_EVENTS_INVOKABLECALL_FIND_OFFSET UNITYSDK_OFFSET(0xA249280)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_TypeDefinitionIndex = 31285;

	class InvokableCall : public ::TriInspector::ShowInInspectorAttribute
	{
	public:
		::UnityEngine::Events::UnityAction* Delegate; // 0x10

		::System::Void add_Delegate(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_ADD_DELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Delegate(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_REMOVE_DELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET))(nullptr);
		}

		::System::Boolean Find(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_FIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

