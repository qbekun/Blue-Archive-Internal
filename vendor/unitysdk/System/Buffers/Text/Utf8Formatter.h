#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DD0A0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMEG_OFFSET UNITYSDK_OFFSET(0x92DD400)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMEL_OFFSET UNITYSDK_OFFSET(0x92DD870)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMEO_OFFSET UNITYSDK_OFFSET(0x92DDC10)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMER_OFFSET UNITYSDK_OFFSET(0x92DE230)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DE5D0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DE810)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALE_OFFSET UNITYSDK_OFFSET(0x92DE9C0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALF_OFFSET UNITYSDK_OFFSET(0x92DED20)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALG_OFFSET UNITYSDK_OFFSET(0x92DF070)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DF450)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DFD60)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DFE00)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATFLOATINGPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92DFEA0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64D_OFFSET UNITYSDK_OFFSET(0x92E06F0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64DEFAULT_OFFSET UNITYSDK_OFFSET(0x92E0AC0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT32MULTIPLEDIGITS_OFFSET UNITYSDK_OFFSET(0x92E23C0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64MULTIPLEDIGITS_OFFSET UNITYSDK_OFFSET(0x92E2730)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64MORETHANNEGATIVEBILLIONMAXUINT_OFFSET UNITYSDK_OFFSET(0x92E1770)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64LESSTHANNEGATIVEBILLIONMAXUINT_OFFSET UNITYSDK_OFFSET(0x92E1F20)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64N_OFFSET UNITYSDK_OFFSET(0x92E2C20)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64_OFFSET UNITYSDK_OFFSET(0x92E3060)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64D_OFFSET UNITYSDK_OFFSET(0x92E0780)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64DEFAULT_OFFSET UNITYSDK_OFFSET(0x92E3E20)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT32SINGLEDIGIT_OFFSET UNITYSDK_OFFSET(0x92E42C0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT32MULTIPLEDIGITS_OFFSET UNITYSDK_OFFSET(0x92E4320)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64MULTIPLEDIGITS_OFFSET UNITYSDK_OFFSET(0x92E44C0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64LESSTHANBILLIONMAXUINT_OFFSET UNITYSDK_OFFSET(0x92E1460)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64MORETHANBILLIONMAXUINT_OFFSET UNITYSDK_OFFSET(0x92E1AA0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64N_OFFSET UNITYSDK_OFFSET(0x92E2CB0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64X_OFFSET UNITYSDK_OFFSET(0x92E3CB0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64_OFFSET UNITYSDK_OFFSET(0x92E4720)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E4E50)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E5470)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E6050)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E67A0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E7390)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E7A20)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E8540)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E8CD0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x92E9970)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92EA2B0)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Formatter_TypeDefinitionIndex = 25216;

	class Utf8Formatter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* DayAbbreviations; // 0x0
		::Il2CppArray<::System::Object*>* DayAbbreviationsLowercase; // 0x8
		::Il2CppArray<::System::Object*>* MonthAbbreviations; // 0x10
		::Il2CppArray<::System::Object*>* MonthAbbreviationsLowercase; // 0x18

		::System::Boolean TryFormat(::System::Boolean arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDateTimeG(::System::DateTime* arg, ::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::TimeSpan*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMEG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDateTimeL(::System::DateTime* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDateTimeO(::System::DateTime* arg, ::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::TimeSpan*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMEO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDateTimeR(::System::DateTime* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDATETIMER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::DateTimeOffset* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTimeOffset*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::DateTime* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDecimalE(::System::Buffers::Text::NumberBuffer&* arg, Il2CppObject* arg, int32_t&* arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Buffers::Text::NumberBuffer&*, Il2CppObject*, int32_t&*, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDecimalF(::System::Buffers::Text::NumberBuffer&* arg, Il2CppObject* arg, int32_t&* arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Buffers::Text::NumberBuffer&*, Il2CppObject*, int32_t&*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatDecimalG(::System::Buffers::Text::NumberBuffer&* arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Buffers::Text::NumberBuffer&*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Decimal* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Decimal*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Double arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Double, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Single arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatFloatingPoint(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATFLOATINGPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Guid* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64D(::System::Int64 arg, ::System::Byte arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Byte, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64D_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64Default(::System::Int64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64DEFAULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt32MultipleDigits(::System::Int32 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT32MULTIPLEDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64MultipleDigits(::System::Int64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64MULTIPLEDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64MoreThanNegativeBillionMaxUInt(::System::Int64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64MORETHANNEGATIVEBILLIONMAXUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64LessThanNegativeBillionMaxUInt(::System::Int64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64LESSTHANNEGATIVEBILLIONMAXUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64N(::System::Int64 arg, ::System::Byte arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Byte, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64N_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatInt64(::System::Int64 arg, ::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::UInt64, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATINT64_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64D(::System::UInt64 arg, ::System::Byte arg, Il2CppObject* arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::System::Byte, Il2CppObject*, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64D_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64Default(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64DEFAULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt32SingleDigit(::System::UInt32 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT32SINGLEDIGIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt32MultipleDigits(::System::UInt32 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT32MULTIPLEDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64MultipleDigits(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64MULTIPLEDIGITS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64LessThanBillionMaxUInt(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64LESSTHANBILLIONMAXUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64MoreThanBillionMaxUInt(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64MORETHANBILLIONMAXUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64N(::System::UInt64 arg, ::System::Byte arg, Il2CppObject* arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::System::Byte, Il2CppObject*, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64N_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64X(::System::UInt64 arg, ::System::Byte arg, ::System::Boolean arg, Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::System::Byte, ::System::Boolean, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64X_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormatUInt64(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATUINT64_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Byte arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::SByte arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::SByte, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::UInt16 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt16, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Int16 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Int16, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::UInt32 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Int32 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::UInt64 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::Int64 arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryFormat(::System::TimeSpan* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

