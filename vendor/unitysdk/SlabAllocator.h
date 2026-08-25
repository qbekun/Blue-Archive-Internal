#pragma once
#include "unitysdk.h"

#define SLABALLOCATOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9E37CC0)
#define SLABALLOCATOR_GET_SLABSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9E37CD0)
#define SLABALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x9E37CE0)
#define SLABALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x9E37C70)
#define SLABALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E38390)
#define SLABALLOCATOR_TRY$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E383A0)

	inline static constexpr unsigned int SlabAllocator_TypeDefinitionIndex = 37006;

	class SlabAllocator : public Il2CppObject
	{
	public:
		AllocatorHandle* m_handle; // 0x10
		Block* Storage; // 0x18
		::System::Int32 Log2SlabSizeInBytes; // 0x38
		Il2CppObject* Occupied; // 0x3C
		::System::Int64 budgetInBytes; // 0x1040
		::System::Int64 allocatedBytes; // 0x1048

		AllocatorHandle* get_Handle()
		{
			return (return (AllocatorHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SLABALLOCATOR_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 get_SlabSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SLABALLOCATOR_GET_SLABSIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Int32 Try(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + SLABALLOCATOR_TRY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Try(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + SLABALLOCATOR_TRY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SLABALLOCATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 Try$BurstManaged(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + SLABALLOCATOR_TRY$BURSTMANAGED_OFFSET))(arg, arg, nullptr);
		}

	};

