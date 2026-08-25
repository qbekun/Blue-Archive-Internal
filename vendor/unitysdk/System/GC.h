#pragma once
#include "../unitysdk.h"

#define SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x93A2710)
#define SYSTEM_GC_GETMAXGENERATION_OFFSET UNITYSDK_OFFSET(0x93A2720)
#define SYSTEM_GC_INTERNALCOLLECT_OFFSET UNITYSDK_OFFSET(0x93A2730)
#define SYSTEM_GC_RECORDPRESSURE_OFFSET UNITYSDK_OFFSET(0x93A2740)
#define SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET UNITYSDK_OFFSET(0x93A2750)
#define SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET UNITYSDK_OFFSET(0x93A2760)
#define SYSTEM_GC_GETMEMORYINFO_OFFSET UNITYSDK_OFFSET(0x93A2770)
#define SYSTEM_GC_ADDMEMORYPRESSURE_OFFSET UNITYSDK_OFFSET(0x93A2810)
#define SYSTEM_GC_REMOVEMEMORYPRESSURE_OFFSET UNITYSDK_OFFSET(0x93A2930)
#define SYSTEM_GC_GETGENERATION_OFFSET UNITYSDK_OFFSET(0x93A2A10)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x93A2A20)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x93A2BE0)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x93A2B30)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x93A2CF0)
#define SYSTEM_GC_COLLECT_OFFSET UNITYSDK_OFFSET(0x93A2D50)
#define SYSTEM_GC_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x93A2E60)
#define SYSTEM_GC_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x93A2F20)
#define SYSTEM_GC_GET_MAXGENERATION_OFFSET UNITYSDK_OFFSET(0x93A2C90)
#define SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET UNITYSDK_OFFSET(0x93A2F30)
#define SYSTEM_GC__SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x93A2F40)
#define SYSTEM_GC_SUPPRESSFINALIZE_OFFSET UNITYSDK_OFFSET(0x93A2F50)
#define SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x93A2FF0)
#define SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET UNITYSDK_OFFSET(0x93A3000)
#define SYSTEM_GC_GETTOTALMEMORY_OFFSET UNITYSDK_OFFSET(0x93A30A0)
#define SYSTEM_GC_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93A30B0)

namespace System
{
	inline static constexpr unsigned int GC_TypeDefinitionIndex = 23934;

	class GC : public Il2CppObject
	{
	public:
		::System::Object* EPHEMERON_TOMBSTONE; // 0x0

		::System::Int32 GetCollectionCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETCOLLECTIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxGeneration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETMAXGENERATION_OFFSET))(nullptr);
		}

		::System::Void InternalCollect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_INTERNALCOLLECT_OFFSET))(arg, nullptr);
		}

		::System::Void RecordPressure(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_RECORDPRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Void register_ephemeron_array(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_REGISTER_EPHEMERON_ARRAY_OFFSET))(arg, nullptr);
		}

		::System::Object* get_ephemeron_tombstone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_EPHEMERON_TOMBSTONE_OFFSET))(nullptr);
		}

		::System::Void GetMemoryInfo(uint32_t&* arg, uint64_t&* arg, uint32_t&* arg, uint32_t&* arg, uint32_t&* arg)
		{
			((::System::Void(*)(uint32_t&*, uint64_t&*, uint32_t&*, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETMEMORYINFO_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddMemoryPressure(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_ADDMEMORYPRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveMemoryPressure(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_REMOVEMEMORYPRESSURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGeneration(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETGENERATION_OFFSET))(arg, nullptr);
		}

		::System::Void Collect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))(arg, nullptr);
		}

		::System::Void Collect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))(nullptr);
		}

		::System::Void Collect(::System::Int32 arg, ::System::GCCollectionMode* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::GCCollectionMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Collect(::System::Int32 arg, ::System::GCCollectionMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::GCCollectionMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Collect(::System::Int32 arg, ::System::GCCollectionMode* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::GCCollectionMode*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CollectionCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_COLLECTIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void KeepAlive(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_KEEPALIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxGeneration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GET_MAXGENERATION_OFFSET))(nullptr);
		}

		::System::Void WaitForPendingFinalizers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_WAITFORPENDINGFINALIZERS_OFFSET))(nullptr);
		}

		::System::Void _SuppressFinalize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC__SUPPRESSFINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SuppressFinalize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_SUPPRESSFINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void _ReRegisterForFinalize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC__REREGISTERFORFINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ReRegisterForFinalize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_REREGISTERFORFINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTotalMemory(::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_GETTOTALMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GC_.CCTOR_OFFSET))(nullptr);
		}

	};
}

