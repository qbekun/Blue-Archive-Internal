#pragma once
#include "unitysdk.h"

#define UNMANAGED_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9E37020)
#define UNMANAGED_FREE_OFFSET UNITYSDK_OFFSET(0x9E37070)
#define UNMANAGED_FREE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Unmanaged_TypeDefinitionIndex = 37038;

	class Unmanaged : public Il2CppObject
	{
	public:
		::System::Object** Allocate(::System::Int64 arg, ::System::Int32 arg, AllocatorHandle* arg)
		{
			return (return (::System::Object**(*)(::System::Int64, ::System::Int32, AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGED_ALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Free(::System::Object** arg, AllocatorHandle* arg)
		{
			((::System::Void(*)(::System::Object**, AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGED_FREE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Free(::System::Object** arg, AllocatorHandle* arg)
		{
			((::System::Void(*)(::System::Object**, AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGED_FREE_OFFSET))(arg, arg, nullptr);
		}

	};

