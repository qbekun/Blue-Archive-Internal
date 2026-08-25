#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_GLOBALLINKEDLISTNODECACHE`1_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_GLOBALLINKEDLISTNODECACHE`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int GlobalLinkedListNodeCache`1_TypeDefinitionIndex = 36380;

	class GlobalLinkedListNodeCache`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_globalCache; // 0x0

		Il2CppObject* Acquire(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_GLOBALLINKEDLISTNODECACHE`1_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_GLOBALLINKEDLISTNODECACHE`1_RELEASE_OFFSET))(arg, nullptr);
		}

	};
}

