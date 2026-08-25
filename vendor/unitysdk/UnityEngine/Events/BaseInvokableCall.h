#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248C40)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA248C50)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_THROWONINVALIDARG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_ALLOWINVOKE_OFFSET UNITYSDK_OFFSET(0xA248D40)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_FIND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int BaseInvokableCall_TypeDefinitionIndex = 31284;

	class BaseInvokableCall : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowOnInvalidArg(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_THROWONINVALIDARG_OFFSET))(arg, nullptr);
		}

		::System::Boolean AllowInvoke(::System::Delegate* arg)
		{
			return (return (::System::Boolean(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_ALLOWINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Find(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_FIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

