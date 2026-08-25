#pragma once
#include "unitysdk.h"

#define IALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define IALLOCATOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IAllocator_TypeDefinitionIndex = 37000;

	class IAllocator : public Il2CppObject
	{
	public:
		::System::Int32 Try(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + IALLOCATOR_TRY_OFFSET))(arg, nullptr);
		}

		AllocatorHandle* get_Handle()
		{
			return (return (AllocatorHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALLOCATOR_GET_HANDLE_OFFSET))(nullptr);
		}

	};

