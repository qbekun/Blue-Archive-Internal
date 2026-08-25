#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTDIGITS_OFFSET UNITYSDK_OFFSET(0xA4CADC0)
#define SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTDIGITS_OFFSET UNITYSDK_OFFSET(0xA4CAE70)
#define SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTHEXDIGITS_OFFSET UNITYSDK_OFFSET(0xA4CAEC0)
#define SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTDECIMALTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0xA4CAF00)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int FormattingHelpers_TypeDefinitionIndex = 34667;

	class FormattingHelpers : public Il2CppObject
	{
	public:
		::System::Int32 CountDigits(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTDIGITS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CountDigits(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTDIGITS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CountHexDigits(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTHEXDIGITS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CountDecimalTrailingZeros(::System::UInt32 arg, uint32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_FORMATTINGHELPERS_COUNTDECIMALTRAILINGZEROS_OFFSET))(arg, arg, nullptr);
		}

	};
}

