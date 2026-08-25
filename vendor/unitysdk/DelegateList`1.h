#pragma once
#include "unitysdk.h"

#define DELEGATELIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATELIST`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATELIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATELIST`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATELIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATELIST`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATELIST`1_CREATEWITHGLOBALCACHE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DelegateList`1_TypeDefinitionIndex = 36344;

	class DelegateList`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_acquireFunc; // 0x0
		Il2CppObject* m_releaseFunc; // 0x0
		Il2CppObject* m_callbacks; // 0x0
		::System::Boolean m_invoking; // 0x0

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_INVOKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateWithGlobalCache()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATELIST`1_CREATEWITHGLOBALCACHE_OFFSET))(nullptr);
		}

	};

