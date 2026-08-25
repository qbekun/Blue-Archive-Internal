#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_POOL_POOLEDOBJECT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_POOLEDOBJECT`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Pool
{
	inline static constexpr unsigned int PooledObject`1_TypeDefinitionIndex = 31461;

	class PooledObject`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_ToReturn; // 0x0
		Il2CppObject* m_Pool; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_POOLEDOBJECT`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_POOLEDOBJECT`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

	};
}

