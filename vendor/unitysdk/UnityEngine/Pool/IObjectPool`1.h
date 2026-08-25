#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_POOL_IOBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Pool
{
	inline static constexpr unsigned int IObjectPool`1_TypeDefinitionIndex = 31458;

	class IObjectPool`1 : public Il2CppObject
	{
	public:
		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_IOBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

	};
}

