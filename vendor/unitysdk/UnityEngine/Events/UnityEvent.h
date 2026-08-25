#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class BaseInvokableCall; }

#define UNITYENGINE_EVENTS_UNITYEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24B0D0)
#define UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0xA24B100)
#define UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0xA24B210)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0xA24B260)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0xA24B130)
#define UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0xA24B2C0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_TypeDefinitionIndex = 31297;

	class UnityEvent : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddListener(::UnityEngine::Events::UnityAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Events::UnityAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET))(nullptr);
		}

	};
}

