#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define POOLCONTAINER`2_CLEARALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLCONTAINER`2_CREATECACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLCONTAINER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLCONTAINER`2_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLCONTAINER`2_FORCEALLDESTROYCHILDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLCONTAINER`2_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLCONTAINER`2_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int PoolContainer`2_TypeDefinitionIndex = 3826;

	class PoolContainer`2 : public Il2CppObject
	{
	public:
		Il2CppObject* pools; // 0x0
		::System::String* resourcePath; // 0x0
		::UnityEngine::Transform* parent; // 0x0

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void CreateCache(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_CREATECACHE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_.CTOR_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetResource(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_GETRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void ForceAllDestroyChilds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_FORCEALLDESTROYCHILDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetObject(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_GETOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* AddObject(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + POOLCONTAINER`2_ADDOBJECT_OFFSET))(arg, arg2, nullptr);
		}

	};

