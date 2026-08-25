#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_EVENTS_CACHEDINVOKABLECALL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_CACHEDINVOKABLECALL`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_CACHEDINVOKABLECALL`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int CachedInvokableCall`1_TypeDefinitionIndex = 31290;

	class CachedInvokableCall`1 : public ::MX::MinigameCCG::Procedures::ApplyShieldToTargetStrikers
	{
	public:
		Il2CppObject* m_Arg1; // 0x0

		::System::Void .ctor(::UnityEngine::Object* arg, ::System::Reflection::MethodInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Reflection::MethodInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_CACHEDINVOKABLECALL`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_CACHEDINVOKABLECALL`1_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_CACHEDINVOKABLECALL`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

