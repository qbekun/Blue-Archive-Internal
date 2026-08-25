#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Events { class InvokableCallList; }
namespace UnityEngine::Events { class UnityEventBase; }

#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA249EE0)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA249F60)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA249FA0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCallGroup_TypeDefinitionIndex = 31293;

	class PersistentCallGroup : public Il2CppObject
	{
	public:
		Il2CppObject* m_Calls; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::Events::InvokableCallList* arg, ::UnityEngine::Events::UnityEventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::Events::InvokableCallList*, ::UnityEngine::Events::UnityEventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

