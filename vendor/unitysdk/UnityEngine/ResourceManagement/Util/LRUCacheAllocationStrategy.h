#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0E5350)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DC800)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_NEW_OFFSET UNITYSDK_OFFSET(0xA0E5560)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_GETPOOL_OFFSET UNITYSDK_OFFSET(0xA0E5490)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_RELEASEPOOL_OFFSET UNITYSDK_OFFSET(0xA0E5680)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int LRUCacheAllocationStrategy_TypeDefinitionIndex = 36377;

	class LRUCacheAllocationStrategy : public Il2CppObject
	{
	public:
		::System::Int32 m_poolMaxSize; // 0x10
		::System::Int32 m_poolInitialCapacity; // 0x14
		::System::Int32 m_poolCacheMaxSize; // 0x18
		Il2CppObject* m_poolCache; // 0x20
		Il2CppObject* m_cache; // 0x28

		::System::Void Release(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* New(::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_NEW_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetPool()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_GETPOOL_OFFSET))(nullptr);
		}

		::System::Void ReleasePool(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_LRUCACHEALLOCATIONSTRATEGY_RELEASEPOOL_OFFSET))(arg, nullptr);
		}

	};
}

