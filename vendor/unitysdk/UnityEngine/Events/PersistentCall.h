#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::Events { class PersistentListenerMode; }
namespace UnityEngine::Events { class ArgumentCache; }
namespace UnityEngine::Events { class UnityEventCallState; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class UnityEventBase; }

#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA2492E0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGETASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0xA2492F0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0xA2493B0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA2493C0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0xA2493D0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET UNITYSDK_OFFSET(0xA2493E0)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET UNITYSDK_OFFSET(0xA249420)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET UNITYSDK_OFFSET(0xA249920)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA249E00)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA249E30)
#define UNITYENGINE_EVENTS_PERSISTENTCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA249E60)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCall_TypeDefinitionIndex = 31292;

	class PersistentCall : public Il2CppObject
	{
	public:
		::UnityEngine::Object* m_Target; // 0x10
		::System::String* m_TargetAssemblyTypeName; // 0x18
		::System::String* m_MethodName; // 0x20
		::UnityEngine::Events::PersistentListenerMode* m_Mode; // 0x28
		::UnityEngine::Events::ArgumentCache* m_Arguments; // 0x30
		::UnityEngine::Events::UnityEventCallState* m_CallState; // 0x38

		::UnityEngine::Object* get_target()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGET_OFFSET))(nullptr);
		}

		::System::String* get_targetAssemblyTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_TARGETASSEMBLYTYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_methodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_METHODNAME_OFFSET))(nullptr);
		}

		::UnityEngine::Events::PersistentListenerMode* get_mode()
		{
			return (return (::UnityEngine::Events::PersistentListenerMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_MODE_OFFSET))(nullptr);
		}

		::UnityEngine::Events::ArgumentCache* get_arguments()
		{
			return (return (::UnityEngine::Events::ArgumentCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Events::UnityEventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETRUNTIMECALL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Events::BaseInvokableCall* GetObjectCall(::UnityEngine::Object* arg, ::System::Reflection::MethodInfo* arg, ::UnityEngine::Events::ArgumentCache* arg)
		{
			return (return (::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Object*, ::System::Reflection::MethodInfo*, ::UnityEngine::Events::ArgumentCache*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_GETOBJECTCALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALL_.CTOR_OFFSET))(nullptr);
		}

	};
}

