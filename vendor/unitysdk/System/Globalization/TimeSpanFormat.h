#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_APPENDNONNEGATIVEINT32_OFFSET UNITYSDK_OFFSET(0x9289020)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x92890F0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92894E0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATTOBUILDER_OFFSET UNITYSDK_OFFSET(0x92891D0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATSTANDARD_OFFSET UNITYSDK_OFFSET(0x92895E0)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x9289F00)
#define SYSTEM_GLOBALIZATION_TIMESPANFORMAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x928AF60)

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanFormat_TypeDefinitionIndex = 24975;

	class TimeSpanFormat : public Il2CppObject
	{
	public:
		FormatLiterals* PositiveInvariantFormatLiterals; // 0x0
		FormatLiterals* NegativeInvariantFormatLiterals; // 0x28

		::System::Void AppendNonNegativeInt32(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_APPENDNONNEGATIVEINT32_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Format(::System::TimeSpan* arg, ::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::TimeSpan*, ::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMAT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_TRYFORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Text::StringBuilder* FormatToBuilder(::System::TimeSpan* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::TimeSpan*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATTOBUILDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Text::StringBuilder* FormatStandard(::System::TimeSpan* arg, ::System::Boolean arg, Il2CppObject* arg, Pattern* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::TimeSpan*, ::System::Boolean, Il2CppObject*, Pattern*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATSTANDARD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Text::StringBuilder* FormatCustomized(::System::TimeSpan* arg, Il2CppObject* arg, ::System::Globalization::DateTimeFormatInfo* arg, ::System::Text::StringBuilder* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::TimeSpan*, Il2CppObject*, ::System::Globalization::DateTimeFormatInfo*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_FORMATCUSTOMIZED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANFORMAT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

