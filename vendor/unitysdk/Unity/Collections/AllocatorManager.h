#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class Allocator; }

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATEBLOCK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREEBLOCK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_CHECKDELEGATE_OFFSET UNITYSDK_OFFSET(0x9E36A20)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_USEDELEGATE_OFFSET UNITYSDK_OFFSET(0x9E36A30)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_BLOCK_OFFSET UNITYSDK_OFFSET(0x9E36A90)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FORWARD_MONO_ALLOCATE_BLOCK_OFFSET UNITYSDK_OFFSET(0x9E36C40)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_LEGACYOF_OFFSET UNITYSDK_OFFSET(0x9E36E00)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_TRYLEGACY_OFFSET UNITYSDK_OFFSET(0x9E36E10)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_TRY_OFFSET UNITYSDK_OFFSET(0x9E370C0)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E37240)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_INITIALIZE$STACKALLOCATOR_TRY_00000A45$BURSTDIRECTCALL_OFFSET UNITYSDK_OFFSET(0x9E372D0)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_INITIALIZE$SLABALLOCATOR_TRY_00000A53$BURSTDIRECTCALL_OFFSET UNITYSDK_OFFSET(0x9E37320)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_TypeDefinitionIndex = 37015;

	class AllocatorManager : public Il2CppObject
	{
	public:
		AllocatorHandle* Invalid; // 0x0
		AllocatorHandle* None; // 0x4
		AllocatorHandle* Temp; // 0x8
		AllocatorHandle* TempJob; // 0xC
		AllocatorHandle* Persistent; // 0x10
		AllocatorHandle* AudioKernel; // 0x14

		Block* AllocateBlock(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Block*(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATEBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object** Allocate(Il2CppObject&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Object**(*)(Il2CppObject&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void FreeBlock(Il2CppObject&* arg, Block&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREEBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Free(Il2CppObject&* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object**, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Free(Il2CppObject&* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Free(AllocatorHandle* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(AllocatorHandle*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckDelegate(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_CHECKDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean UseDelegate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_USEDELEGATE_OFFSET))(nullptr);
		}

		::System::Int32 allocate_block(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void forward_mono_allocate_block(Block&* arg, int32_t&* arg)
		{
			((::System::Void(*)(Block&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FORWARD_MONO_ALLOCATE_BLOCK_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Collections::Allocator* LegacyOf(AllocatorHandle* arg)
		{
			return (return (::Unity::Collections::Allocator*(*)(AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_LEGACYOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 TryLegacy(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_TRYLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Try(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_TRY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize$StackAllocator_Try_00000A45$BurstDirectCall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_INITIALIZE$STACKALLOCATOR_TRY_00000A45$BURSTDIRECTCALL_OFFSET))(nullptr);
		}

		::System::Void Initialize$SlabAllocator_Try_00000A53$BurstDirectCall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_INITIALIZE$SLABALLOCATOR_TRY_00000A53$BURSTDIRECTCALL_OFFSET))(nullptr);
		}

	};
}

