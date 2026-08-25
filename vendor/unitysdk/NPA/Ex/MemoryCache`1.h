#pragma once
#include "../../unitysdk.h"

#define NPA_EX_MEMORYCACHE`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_EXPIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_GETDEFAULTLIFETIMESECOND_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_MEMORYCACHE`1_GETLIFETIMEINSECOND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Ex
{
	inline static constexpr unsigned int MemoryCache`1_TypeDefinitionIndex = 25986;

	class MemoryCache`1 : public Il2CppObject
	{
	public:
		Il2CppObject* data; // 0x0
		::System::DateTime* cacheTime; // 0x0
		Il2CppObject* getLifetimeFunc; // 0x0

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_GET_OFFSET))(nullptr);
		}

		::System::Void Set(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Expire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_EXPIRE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_GET_ISEXPIRED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDefaultLifetimeSecond()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_GETDEFAULTLIFETIMESECOND_OFFSET))(nullptr);
		}

		::System::Int32 GetLifetimeInSecond()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MEMORYCACHE`1_GETLIFETIMEINSECOND_OFFSET))(nullptr);
		}

	};
}

