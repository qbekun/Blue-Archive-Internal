#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_POOL_OBJECTPOOL`1_GET_COUNTALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_SET_COUNTALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_GET_COUNTINACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_POOL_OBJECTPOOL`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Pool
{
	inline static constexpr unsigned int ObjectPool`1_TypeDefinitionIndex = 31460;

	class ObjectPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x0
		Il2CppObject* m_CreateFunc; // 0x0
		Il2CppObject* m_ActionOnGet; // 0x0
		Il2CppObject* m_ActionOnRelease; // 0x0
		Il2CppObject* m_ActionOnDestroy; // 0x0
		::System::Int32 m_MaxSize; // 0x0
		::System::Boolean m_CollectionCheck; // 0x0
		::System::Int32 _CountAll_k__BackingField; // 0x0

		::System::Int32 get_CountAll()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_GET_COUNTALL_OFFSET))(nullptr);
		}

		::System::Void set_CountAll(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_SET_COUNTALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CountInactive()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_GET_COUNTINACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_GET_OFFSET))(nullptr);
		}

		Il2CppObject* Get(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POOL_OBJECTPOOL`1_DISPOSE_OFFSET))(nullptr);
		}

	};
}

