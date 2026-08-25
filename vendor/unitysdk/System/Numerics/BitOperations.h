#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_BITOPERATIONS_GET_TRAILINGZEROCOUNTDEBRUIJN_OFFSET UNITYSDK_OFFSET(0xA4CAF40)
#define SYSTEM_NUMERICS_BITOPERATIONS_GET_LOG2DEBRUIJN_OFFSET UNITYSDK_OFFSET(0xA4CAFB0)
#define SYSTEM_NUMERICS_BITOPERATIONS_LEADINGZEROCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB020)
#define SYSTEM_NUMERICS_BITOPERATIONS_LEADINGZEROCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB120)
#define SYSTEM_NUMERICS_BITOPERATIONS_LOG2_OFFSET UNITYSDK_OFFSET(0xA4CB170)
#define SYSTEM_NUMERICS_BITOPERATIONS_LOG2_OFFSET UNITYSDK_OFFSET(0xA4CB180)
#define SYSTEM_NUMERICS_BITOPERATIONS_LOG2SOFTWAREFALLBACK_OFFSET UNITYSDK_OFFSET(0xA4CB050)
#define SYSTEM_NUMERICS_BITOPERATIONS_POPCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB1B0)
#define SYSTEM_NUMERICS_BITOPERATIONS_POPCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB1F0)
#define SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB2F0)
#define SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB3C0)
#define SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB490)
#define SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET UNITYSDK_OFFSET(0xA4CB640)
#define SYSTEM_NUMERICS_BITOPERATIONS_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0xA4CB7F0)
#define SYSTEM_NUMERICS_BITOPERATIONS_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0xA4CB800)
#define SYSTEM_NUMERICS_BITOPERATIONS_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0xA4CB810)
#define SYSTEM_NUMERICS_BITOPERATIONS_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0xA4CB820)

namespace System::Numerics
{
	inline static constexpr unsigned int BitOperations_TypeDefinitionIndex = 34668;

	class BitOperations : public Il2CppObject
	{
	public:
		Il2CppObject* get_TrailingZeroCountDeBruijn()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_GET_TRAILINGZEROCOUNTDEBRUIJN_OFFSET))(nullptr);
		}

		Il2CppObject* get_Log2DeBruijn()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_GET_LOG2DEBRUIJN_OFFSET))(nullptr);
		}

		::System::Int32 LeadingZeroCount(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LEADINGZEROCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 LeadingZeroCount(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LEADINGZEROCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Log2(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LOG2_OFFSET))(arg, nullptr);
		}

		::System::Int32 Log2(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LOG2_OFFSET))(arg, nullptr);
		}

		::System::Int32 Log2SoftwareFallback(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_LOG2SOFTWAREFALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 PopCount(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_POPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 PopCount(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_POPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 TrailingZeroCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 TrailingZeroCount(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 TrailingZeroCount(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 TrailingZeroCount(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_TRAILINGZEROCOUNT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 RotateLeft(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_ROTATELEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 RotateLeft(::System::UInt64 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_ROTATELEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 RotateRight(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_ROTATERIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 RotateRight(::System::UInt64 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_ROTATERIGHT_OFFSET))(arg, arg, nullptr);
		}

	};
}

