#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class InvokableCallList; }
namespace UnityEngine::Events { class PersistentCallGroup; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class PersistentCall; }
namespace UnityEngine::Events { class PersistentListenerMode; }

#define UNITYENGINE_EVENTS_UNITYEVENTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24A840)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA24A8F0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA24A950)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0xA249730)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0xA24A980)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA24AE50)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET UNITYSDK_OFFSET(0xA24A920)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET UNITYSDK_OFFSET(0xA24AEA0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET UNITYSDK_OFFSET(0xA24AEE0)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0xA24AF00)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET UNITYSDK_OFFSET(0xA24AF20)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0xA24AF40)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA24AF80)
#define UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET UNITYSDK_OFFSET(0xA24AC80)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventBase_TypeDefinitionIndex = 31295;

	class UnityEventBase : public Il2CppObject
	{
	public:
		::UnityEngine::Events::InvokableCallList* m_Calls; // 0x10
		::UnityEngine::Events::PersistentCallGroup* m_PersistentCalls; // 0x18
		::System::Boolean m_CallsDirty; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_IMPL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod(::UnityEngine::Events::PersistentCall* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::UnityEngine::Events::PersistentCall*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* FindMethod(::System::String* str, ::System::Type* arg, ::UnityEngine::Events::PersistentListenerMode* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Type*, ::UnityEngine::Events::PersistentListenerMode*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_FINDMETHOD_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPersistentEventCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETPERSISTENTEVENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void DirtyPersistentCalls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_DIRTYPERSISTENTCALLS_OFFSET))(nullptr);
		}

		::System::Void RebuildPersistentCallsIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REBUILDPERSISTENTCALLSIFNEEDED_OFFSET))(nullptr);
		}

		::System::Void AddCall(::UnityEngine::Events::BaseInvokableCall* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::BaseInvokableCall*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_ADDCALL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveListener(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVELISTENER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAllListeners()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_REMOVEALLLISTENERS_OFFSET))(nullptr);
		}

		Il2CppObject* PrepareInvoke()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_PREPAREINVOKE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* GetValidMethodInfo(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTBASE_GETVALIDMETHODINFO_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

