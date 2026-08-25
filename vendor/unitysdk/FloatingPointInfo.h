#pragma once
#include "unitysdk.h"

#define FLOATINGPOINTINFO_GET_MAXBINARYEXPONENT_OFFSET UNITYSDK_OFFSET(0xA4C8CD0)
#define FLOATINGPOINTINFO_GET_EXPONENTBITS_OFFSET UNITYSDK_OFFSET(0xA4C8CE0)
#define FLOATINGPOINTINFO_GET_OVERFLOWDECIMALEXPONENT_OFFSET UNITYSDK_OFFSET(0xA4C8CF0)
#define FLOATINGPOINTINFO_GET_ZEROBITS_OFFSET UNITYSDK_OFFSET(0xA4C8D00)
#define FLOATINGPOINTINFO_GET_MINBINARYEXPONENT_OFFSET UNITYSDK_OFFSET(0xA4C8D10)
#define FLOATINGPOINTINFO_GET_DENORMALMANTISSABITS_OFFSET UNITYSDK_OFFSET(0xA4C8D20)
#define FLOATINGPOINTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4C8D30)
#define FLOATINGPOINTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4C8E90)
#define FLOATINGPOINTINFO_GET_EXPONENTBIAS_OFFSET UNITYSDK_OFFSET(0xA4C8F70)
#define FLOATINGPOINTINFO_GET_INFINITYBITS_OFFSET UNITYSDK_OFFSET(0xA4C8F80)
#define FLOATINGPOINTINFO_GET_NORMALMANTISSAMASK_OFFSET UNITYSDK_OFFSET(0xA4C8F90)
#define FLOATINGPOINTINFO_GET_NORMALMANTISSABITS_OFFSET UNITYSDK_OFFSET(0xA4C8FA0)
#define FLOATINGPOINTINFO_GET_DENORMALMANTISSAMASK_OFFSET UNITYSDK_OFFSET(0xA4C8FB0)

	inline static constexpr unsigned int FloatingPointInfo_TypeDefinitionIndex = 34662;

	class FloatingPointInfo : public Il2CppObject
	{
	public:
		FloatingPointInfo* Double; // 0x0
		FloatingPointInfo* Single; // 0x38
		::System::UInt64 _ZeroBits_k__BackingField; // 0x10
		::System::UInt64 _InfinityBits_k__BackingField; // 0x18
		::System::UInt64 _NormalMantissaMask_k__BackingField; // 0x20
		::System::UInt64 _DenormalMantissaMask_k__BackingField; // 0x28
		::System::Int32 _MinBinaryExponent_k__BackingField; // 0x30
		::System::Int32 _MaxBinaryExponent_k__BackingField; // 0x34
		::System::Int32 _ExponentBias_k__BackingField; // 0x38
		::System::Int32 _OverflowDecimalExponent_k__BackingField; // 0x3C
		::System::UInt16 _NormalMantissaBits_k__BackingField; // 0x40
		::System::UInt16 _DenormalMantissaBits_k__BackingField; // 0x42
		::System::UInt16 _ExponentBits_k__BackingField; // 0x44

		::System::Int32 get_MaxBinaryExponent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_MAXBINARYEXPONENT_OFFSET))(nullptr);
		}

		::System::UInt16 get_ExponentBits()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_EXPONENTBITS_OFFSET))(nullptr);
		}

		::System::Int32 get_OverflowDecimalExponent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_OVERFLOWDECIMALEXPONENT_OFFSET))(nullptr);
		}

		::System::UInt64 get_ZeroBits()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_ZEROBITS_OFFSET))(nullptr);
		}

		::System::Int32 get_MinBinaryExponent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_MINBINARYEXPONENT_OFFSET))(nullptr);
		}

		::System::UInt16 get_DenormalMantissaBits()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_DENORMALMANTISSABITS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt16 arg, ::System::UInt16 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::UInt16, ::System::Int32, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_ExponentBias()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_EXPONENTBIAS_OFFSET))(nullptr);
		}

		::System::UInt64 get_InfinityBits()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_INFINITYBITS_OFFSET))(nullptr);
		}

		::System::UInt64 get_NormalMantissaMask()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_NORMALMANTISSAMASK_OFFSET))(nullptr);
		}

		::System::UInt16 get_NormalMantissaBits()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_NORMALMANTISSABITS_OFFSET))(nullptr);
		}

		::System::UInt64 get_DenormalMantissaMask()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGPOINTINFO_GET_DENORMALMANTISSAMASK_OFFSET))(nullptr);
		}

	};

