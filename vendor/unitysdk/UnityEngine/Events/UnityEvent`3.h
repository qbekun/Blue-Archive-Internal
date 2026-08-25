#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class BaseInvokableCall; }

#define UNITYENGINE_EVENTS_UNITYEVENT`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`3_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`3_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`3_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent`3_TypeDefinitionIndex = 31303;

	class UnityEvent`3 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`3_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`3_FINDMETHOD_IMPL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`3_GETDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`3_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

