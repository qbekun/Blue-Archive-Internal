#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93E5DD0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93E9F80)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93E9F90)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93E9FA0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93E9FE0)
#define SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET UNITYSDK_OFFSET(0x93E9FF0)
#define SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET UNITYSDK_OFFSET(0x93EA000)
#define SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET UNITYSDK_OFFSET(0x93EA010)
#define SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET UNITYSDK_OFFSET(0x93EA020)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93E79B0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA030)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA040)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA070)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA080)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA090)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA0A0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA0B0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA0C0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x93EA0D0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_INTERLOCKED_READ_OFFSET UNITYSDK_OFFSET(0x93EA0E0)
#define SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET UNITYSDK_OFFSET(0x93EA0F0)
#define SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET UNITYSDK_OFFSET(0x93EA100)
#define SYSTEM_THREADING_INTERLOCKED_MEMORYBARRIER_OFFSET UNITYSDK_OFFSET(0x93EA110)

namespace System::Threading
{
	inline static constexpr unsigned int Interlocked_TypeDefinitionIndex = 24117;

	class Interlocked : public Il2CppObject
	{
	public:
		::System::Int32 CompareExchange(int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CompareExchange(int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CompareExchange(::System::Object&* arg, ::System::Object&* arg, ::System::Object&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::System::Object&*, ::System::Object&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* CompareExchange(::System::Object&* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object&*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single CompareExchange(float&* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(float&*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Decrement(int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 Decrement(int64_t&* arg)
		{
			return (return (::System::Int64(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Increment(int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 Increment(int64_t&* arg)
		{
			return (return (::System::Int64(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Exchange(int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Exchange(::System::Object&* arg, ::System::Object&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::System::Object&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Exchange(::System::Object&* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object&*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Exchange(float&* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(float&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 CompareExchange(int64_t&* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(int64_t&*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CompareExchange(int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double CompareExchange(double&* arg, ::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(double&*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* CompareExchange(Il2CppObject&* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Exchange(int64_t&* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(int64_t&*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Exchange(int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Exchange(double&* arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(double&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Exchange(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Read(int64_t&* arg)
		{
			return (return (::System::Int64(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_READ_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Add(int64_t&* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(int64_t&*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MemoryBarrier()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_MEMORYBARRIER_OFFSET))(nullptr);
		}

	};
}

