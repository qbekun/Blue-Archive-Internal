#pragma once
#include "unitysdk.h"

#define FIXEDSIZEPRIORITYMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x288B6D0)
#define FIXEDSIZEPRIORITYMAP_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x288BB60)
#define FIXEDSIZEPRIORITYMAP_GETORADD_OFFSET UNITYSDK_OFFSET(0x288BB70)
#define FIXEDSIZEPRIORITYMAP_TRYGET_OFFSET UNITYSDK_OFFSET(0x288BBF0)
#define FIXEDSIZEPRIORITYMAP_INSERT_OFFSET UNITYSDK_OFFSET(0x288BEA0)
#define FIXEDSIZEPRIORITYMAP_REMOVE_OFFSET UNITYSDK_OFFSET(0x288C1D0)
#define FIXEDSIZEPRIORITYMAP_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x288C040)
#define FIXEDSIZEPRIORITYMAP_UPDATEALLTIMESTAMPS_OFFSET UNITYSDK_OFFSET(0x288C300)

	inline static constexpr unsigned int FixedSizePriorityMap_TypeDefinitionIndex = 37767;

	class FixedSizePriorityMap : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buckets; // 0x10
		::Il2CppArray<::System::Object*>* mapEntries; // 0x18
		::Il2CppArray<::System::Object*>* heapEntries; // 0x20
		::System::Int32 count; // 0x28
		::System::UInt32 timestamp; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::String* GetOrAdd(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_GETORADD_OFFSET))(arg, arg, nullptr);
		}

		::System::String&* TryGet(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::String&*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Insert(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_INSERT_OFFSET))(str, arg, nullptr);
		}

		::System::Void Remove(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_REMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateTimestamp(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_UPDATETIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAllTimestamps()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDSIZEPRIORITYMAP_UPDATEALLTIMESTAMPS_OFFSET))(nullptr);
		}

	};

