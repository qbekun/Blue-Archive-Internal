#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x9833540)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9833680)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x982CB40)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9833FB0)
#define SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9833A30)
#define SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9833C30)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x9834110)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEX_OFFSET UNITYSDK_OFFSET(0x9834250)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x982DAB0)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9835490)

namespace System::Numerics
{
	inline static constexpr unsigned int BigNumber_TypeDefinitionIndex = 37096;

	class BigNumber : public Il2CppObject
	{
	public:
		::System::Boolean TryValidateParseStyleInteger(::System::Globalization::NumberStyles* arg, ::System::ArgumentException&* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::NumberStyles*, ::System::ArgumentException&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseBigInteger(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, ::System::Numerics::BigInteger&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Numerics::BigInteger* ParseBigInteger(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Numerics::BigInteger*(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Numerics::BigInteger* ParseBigInteger(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Numerics::BigInteger*(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HexNumberToBigInteger(BigNumberBuffer&* arg, ::System::Numerics::BigInteger&* arg)
		{
			return (return (::System::Boolean(*)(BigNumberBuffer&*, ::System::Numerics::BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean NumberToBigInteger(BigNumberBuffer&* arg, ::System::Numerics::BigInteger&* arg)
		{
			return (return (::System::Boolean(*)(BigNumberBuffer&*, ::System::Numerics::BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Char ParseFormatSpecifier(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Char(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* FormatBigIntegerToHex(::System::Boolean arg, ::System::Numerics::BigInteger* arg, ::System::Char arg, ::System::Int32 arg, ::System::Globalization::NumberFormatInfo* arg, Il2CppObject* arg, int32_t&* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::System::Numerics::BigInteger*, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*, Il2CppObject*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEX_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* FormatBigInteger(::System::Numerics::BigInteger* arg, ::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Numerics::BigInteger*, ::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* FormatBigInteger(::System::Boolean arg, ::System::Numerics::BigInteger* arg, ::System::String* str, Il2CppObject* arg, ::System::Globalization::NumberFormatInfo* arg, Il2CppObject* arg, int32_t&* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::System::Numerics::BigInteger*, ::System::String*, Il2CppObject*, ::System::Globalization::NumberFormatInfo*, Il2CppObject*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET))(arg, arg, str, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

