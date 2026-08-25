#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class BaseInvokableCall; }

#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDPERSISTENTINVOKABLECALL_OFFSET UNITYSDK_OFFSET(0xA24A160)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0xA24A200)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0xA24A2A0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0xA24A520)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEARPERSISTENT_OFFSET UNITYSDK_OFFSET(0xA24A5E0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_PREPAREINVOKE_OFFSET UNITYSDK_OFFSET(0xA24A6A0)
#define UNITYENGINE_EVENTS_INVOKABLECALLLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24A750)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCallList_TypeDefinitionIndex = 31294;

	class InvokableCallList : public Il2CppObject
	{
	public:
		Il2CppObject* m_PersistentCalls; // 0x10
		Il2CppObject* m_RuntimeCalls; // 0x18
		Il2CppObject* m_ExecutingCalls; // 0x20
		::System::Boolean m_NeedsUpdate; // 0x28

		::System::Void AddPersistentInvokableCall(::UnityEngine::Events::BaseInvokableCall* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::BaseInvokableCall*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDPERSISTENTINVOKABLECALL_OFFSET))(arg, nullptr);
		}

		::System::Void AddListener(::UnityEngine::Events::BaseInvokableCall* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::BaseInvokableCall*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_ADDLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveListener(::System::Object* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_REMOVELISTENER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ClearPersistent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_CLEARPERSISTENT_OFFSET))(nullptr);
		}

		Il2CppObject* PrepareInvoke()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_PREPAREINVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALLLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

