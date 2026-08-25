#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Pool { class IPool; }

#define UNITYENGINE_POOL_POOLMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0xA24D940)
#define UNITYENGINE_POOL_POOLMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA24DA40)

namespace UnityEngine::Pool
{
	inline static constexpr unsigned int PoolManager_TypeDefinitionIndex = 31462;

	class PoolManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_WeakPoolReferences; // 0x0

		::System::Void Register(::UnityEngine::Pool::IPool* arg)
		{
			((::System::Void(*)(::UnityEngine::Pool::IPool*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_POOLMANAGER_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_POOLMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

