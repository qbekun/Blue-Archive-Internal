#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_BOOTSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C4070)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODE_OFFSET UNITYSDK_OFFSET(0x92C40F0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODEDIGIT_OFFSET UNITYSDK_OFFSET(0x92C44C0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_DECODEDIGIT_OFFSET UNITYSDK_OFFSET(0x92C4550)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_ADAPT_OFFSET UNITYSDK_OFFSET(0x92C44D0)
#define SYSTEM_GLOBALIZATION_BOOTSTRING_DECODE_OFFSET UNITYSDK_OFFSET(0x92C4580)

namespace System::Globalization
{
	inline static constexpr unsigned int Bootstring_TypeDefinitionIndex = 25016;

	class Bootstring : public Il2CppObject
	{
	public:
		::System::Char delimiter; // 0x10
		::System::Int32 base_num; // 0x14
		::System::Int32 tmin; // 0x18
		::System::Int32 tmax; // 0x1C
		::System::Int32 skew; // 0x20
		::System::Int32 damp; // 0x24
		::System::Int32 initial_bias; // 0x28
		::System::Int32 initial_n; // 0x2C

		::System::Void .ctor(::System::Char arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Char, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* Encode(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODE_OFFSET))(str, arg, nullptr);
		}

		::System::Char EncodeDigit(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ENCODEDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 DecodeDigit(::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_DECODEDIGIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Adapt(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_ADAPT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Decode(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_BOOTSTRING_DECODE_OFFSET))(str, arg, nullptr);
		}

	};
}

