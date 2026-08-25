#pragma once
#include "unitysdk.h"

#define SHAREDOBJECTPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOL`1_ALLOCATEPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOL`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOL`1_GET_SHAREDPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SharedObjectPool`1_TypeDefinitionIndex = 33852;

	class SharedObjectPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Pool; // 0x0
		Il2CppObject* s_Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* AllocatePool()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_ALLOCATEPOOL_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_GET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_sharedPool()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_GET_SHAREDPOOL_OFFSET))(nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

	};

