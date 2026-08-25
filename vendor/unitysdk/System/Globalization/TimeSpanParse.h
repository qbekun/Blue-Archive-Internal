#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_POW10_OFFSET UNITYSDK_OFFSET(0x928ADD0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYTIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x928B370)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSE_OFFSET UNITYSDK_OFFSET(0x928B590)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x928B800)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x928B5E0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINALSTATE_OFFSET UNITYSDK_OFFSET(0x928BF50)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_DHMSF_OFFSET UNITYSDK_OFFSET(0x928F900)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HMS_F_D_OFFSET UNITYSDK_OFFSET(0x928E190)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_S_D_OFFSET UNITYSDK_OFFSET(0x928CB60)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_OFFSET UNITYSDK_OFFSET(0x928C600)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_D_OFFSET UNITYSDK_OFFSET(0x928C090)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTTIMESPAN_OFFSET UNITYSDK_OFFSET(0x928B870)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEBYFORMAT_OFFSET UNITYSDK_OFFSET(0x9293010)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET UNITYSDK_OFFSET(0x92944E0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET UNITYSDK_OFFSET(0x9294630)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTLITERAL_OFFSET UNITYSDK_OFFSET(0x9294780)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPANCONSTANT_OFFSET UNITYSDK_OFFSET(0x9292FD0)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TypeDefinitionIndex = 24984;

	class TimeSpanParse : public Il2CppObject
	{
	public:
		::System::Int64 Pow10(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_POW10_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryTimeToTicks(::System::Boolean arg, TimeSpanToken* arg, TimeSpanToken* arg, TimeSpanToken* arg, TimeSpanToken* arg, TimeSpanToken* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, TimeSpanToken*, TimeSpanToken*, TimeSpanToken*, TimeSpanToken*, TimeSpanToken*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYTIMETOTICKS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::TimeSpan* Parse(Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::TimeSpan*(*)(Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseExact(Il2CppObject* arg, Il2CppObject* arg, ::System::IFormatProvider* arg, ::System::Globalization::TimeSpanStyles* arg, ::System::TimeSpan&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles*, ::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseTimeSpan(Il2CppObject* arg, TimeSpanStandardStyles* arg, ::System::IFormatProvider* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, TimeSpanStandardStyles*, ::System::IFormatProvider*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPAN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ProcessTerminalState(TimeSpanRawInfo&* arg, TimeSpanStandardStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanRawInfo&*, TimeSpanStandardStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINALSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ProcessTerminal_DHMSF(TimeSpanRawInfo&* arg, TimeSpanStandardStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanRawInfo&*, TimeSpanStandardStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_DHMSF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ProcessTerminal_HMS_F_D(TimeSpanRawInfo&* arg, TimeSpanStandardStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanRawInfo&*, TimeSpanStandardStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HMS_F_D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ProcessTerminal_HM_S_D(TimeSpanRawInfo&* arg, TimeSpanStandardStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanRawInfo&*, TimeSpanStandardStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_S_D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ProcessTerminal_HM(TimeSpanRawInfo&* arg, TimeSpanStandardStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanRawInfo&*, TimeSpanStandardStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_HM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ProcessTerminal_D(TimeSpanRawInfo&* arg, TimeSpanStandardStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanRawInfo&*, TimeSpanStandardStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PROCESSTERMINAL_D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseExactTimeSpan(Il2CppObject* arg, Il2CppObject* arg, ::System::IFormatProvider* arg, ::System::Globalization::TimeSpanStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEEXACTTIMESPAN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseByFormat(Il2CppObject* arg, Il2CppObject* arg, ::System::Globalization::TimeSpanStyles* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Globalization::TimeSpanStyles*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSEBYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ParseExactDigits(TimeSpanTokenizer&* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanTokenizer&*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ParseExactDigits(TimeSpanTokenizer&* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanTokenizer&*, ::System::Int32, ::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTDIGITS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ParseExactLiteral(TimeSpanTokenizer&* arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanTokenizer&*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_PARSEEXACTLITERAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseTimeSpanConstant(Il2CppObject* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TRYPARSETIMESPANCONSTANT_OFFSET))(arg, arg, nullptr);
		}

	};
}

