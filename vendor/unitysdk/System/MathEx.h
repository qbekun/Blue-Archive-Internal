#pragma once
#include "../unitysdk.h"

#define SYSTEM_MATHEX_DIVREM_OFFSET UNITYSDK_OFFSET(0xA4AEA10)
#define SYSTEM_MATHEX_DIVREM_OFFSET UNITYSDK_OFFSET(0xA4AEA20)
#define SYSTEM_MATHEX_DIVREM_OFFSET UNITYSDK_OFFSET(0xA4AEA50)
#define SYSTEM_MATHEX_DIVREM_OFFSET UNITYSDK_OFFSET(0xA4AEA60)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEA90)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEB00)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEC80)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AED20)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AED90)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEDF0)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEE50)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEEC0)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEF50)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AEFC0)
#define SYSTEM_MATHEX_CLAMP_OFFSET UNITYSDK_OFFSET(0xA4AF020)
#define SYSTEM_MATHEX_THROWMINMAXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int MathEx_TypeDefinitionIndex = 34655;

	class MathEx : public Il2CppObject
	{
	public:
		::System::UInt32 DivRem(::System::UInt32 arg, ::System::UInt32 arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 DivRem(::System::UInt64 arg, ::System::UInt64 arg, uint64_t&* arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DivRem(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 DivRem(::System::Int64 arg, ::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Byte Clamp(::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Decimal* Clamp(::System::Decimal* arg, ::System::Decimal* arg, ::System::Decimal* arg)
		{
			return (return (::System::Decimal*(*)(::System::Decimal*, ::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double Clamp(::System::Double arg, ::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int16 Clamp(::System::Int16 arg, ::System::Int16 arg, ::System::Int16 arg)
		{
			return (return (::System::Int16(*)(::System::Int16, ::System::Int16, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Clamp(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Clamp(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::SByte Clamp(::System::SByte arg, ::System::SByte arg, ::System::SByte arg)
		{
			return (return (::System::SByte(*)(::System::SByte, ::System::SByte, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Clamp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt16 Clamp(::System::UInt16 arg, ::System::UInt16 arg, ::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(::System::UInt16, ::System::UInt16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 Clamp(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 Clamp(::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ThrowMinMaxException(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHEX_THROWMINMAXEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

