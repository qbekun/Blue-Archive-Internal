#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class BaseInvokableCall; }

#define UNITYENGINE_EVENTS_UNITYEVENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`1_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`1_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`1_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`1_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`1_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENT`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent`1_TypeDefinitionIndex = 31299;

	class UnityEvent`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddListener(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_ADDLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveListener(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_REMOVELISTENER_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_FINDMETHOD_IMPL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_GETDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_GETDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

