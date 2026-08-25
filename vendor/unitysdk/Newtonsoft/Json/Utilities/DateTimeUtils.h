#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class DateTimeZoneHandling; }
namespace Newtonsoft::Json::Utilities { class StringReference; }
namespace Newtonsoft::Json::Utilities { class DateTimeParser; }
namespace Newtonsoft::Json { class DateFormatHandling; }

#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94A3AC0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x94A3BC0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOSERIALIZATIONMODE_OFFSET UNITYSDK_OFFSET(0x94A3C40)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_ENSUREDATETIME_OFFSET UNITYSDK_OFFSET(0x94A3D90)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x94A3EC0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOUTCTIME_OFFSET UNITYSDK_OFFSET(0x94A3FA0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET UNITYSDK_OFFSET(0x94A4080)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET UNITYSDK_OFFSET(0x94A41B0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x94A4310)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x94A4440)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x94A4490)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_UNIVERSALTICKSTOJAVASCRIPTTICKS_OFFSET UNITYSDK_OFFSET(0x94A43D0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTJAVASCRIPTTICKSTODATETIME_OFFSET UNITYSDK_OFFSET(0x9499500)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEISO_OFFSET UNITYSDK_OFFSET(0x94A45B0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETISO_OFFSET UNITYSDK_OFFSET(0x94A4D00)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CREATEDATETIME_OFFSET UNITYSDK_OFFSET(0x94A4C00)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET UNITYSDK_OFFSET(0x94A4FC0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET UNITYSDK_OFFSET(0x94A54A0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x94A5760)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x94A5C60)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEMICROSOFTDATE_OFFSET UNITYSDK_OFFSET(0x94A5FA0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEMICROSOFT_OFFSET UNITYSDK_OFFSET(0x94A51E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEEXACT_OFFSET UNITYSDK_OFFSET(0x94A53D0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETMICROSOFT_OFFSET UNITYSDK_OFFSET(0x94A59C0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETEXACT_OFFSET UNITYSDK_OFFSET(0x94A5BC0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYREADOFFSET_OFFSET UNITYSDK_OFFSET(0x94A6120)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x94A6280)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x94A63E0)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDEFAULTISODATE_OFFSET UNITYSDK_OFFSET(0x94A6B90)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_COPYINTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x94A7330)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x94A6900)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSETSTRING_OFFSET UNITYSDK_OFFSET(0x94A7390)
#define NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETDATEVALUES_OFFSET UNITYSDK_OFFSET(0x94A7120)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DateTimeUtils_TypeDefinitionIndex = 31824;

	class DateTimeUtils : public Il2CppObject
	{
	public:
		::System::Int64 InitialJavaScriptDateTicks; // 0x0
		::System::String* IsoDateFormat; // 0x0
		::System::Int32 DaysPer100Years; // 0x0
		::System::Int32 DaysPer400Years; // 0x0
		::System::Int32 DaysPer4Years; // 0x0
		::System::Int32 DaysPerYear; // 0x0
		::System::Int64 TicksPerDay; // 0x0
		::Il2CppArray<::System::Object*>* DaysToMonth365; // 0x8
		::Il2CppArray<::System::Object*>* DaysToMonth366; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_.CCTOR_OFFSET))(nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETUTCOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlDateTimeSerializationMode* ToSerializationMode(::System::DateTimeKind* arg)
		{
			return (return (::System::Xml::XmlDateTimeSerializationMode*(*)(::System::DateTimeKind*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOSERIALIZATIONMODE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* EnsureDateTime(::System::DateTime* arg, ::Newtonsoft::Json::DateTimeZoneHandling* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::Newtonsoft::Json::DateTimeZoneHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_ENSUREDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* SwitchToLocalTime(::System::DateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOLOCALTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* SwitchToUtcTime(::System::DateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_SWITCHTOUTCTIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToUniversalTicks(::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToUniversalTicks(::System::DateTime* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TOUNIVERSALTICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 ConvertDateTimeToJavaScriptTicks(::System::DateTime* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 ConvertDateTimeToJavaScriptTicks(::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET))(arg, nullptr);
		}

		::System::Int64 ConvertDateTimeToJavaScriptTicks(::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTDATETIMETOJAVASCRIPTTICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 UniversalTicksToJavaScriptTicks(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_UNIVERSALTICKSTOJAVASCRIPTTICKS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ConvertJavaScriptTicksToDateTime(::System::Int64 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CONVERTJAVASCRIPTTICKSTODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParseDateTimeIso(::Newtonsoft::Json::Utilities::StringReference* arg, ::Newtonsoft::Json::DateTimeZoneHandling* arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::Newtonsoft::Json::DateTimeZoneHandling*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEISO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeOffsetIso(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETISO_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* CreateDateTime(::Newtonsoft::Json::Utilities::DateTimeParser* arg)
		{
			return (return (::System::DateTime*(*)(::Newtonsoft::Json::Utilities::DateTimeParser*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_CREATEDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParseDateTime(::Newtonsoft::Json::Utilities::StringReference* arg, ::Newtonsoft::Json::DateTimeZoneHandling* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::Newtonsoft::Json::DateTimeZoneHandling*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTime(::System::String* str, ::Newtonsoft::Json::DateTimeZoneHandling* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::DateTimeZoneHandling*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIME_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeOffset(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeOffset(::System::String* str, ::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSET_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Boolean TryParseMicrosoftDate(::Newtonsoft::Json::Utilities::StringReference* arg, int64_t&* arg, ::System::TimeSpan&* arg, ::System::DateTimeKind&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, int64_t&*, ::System::TimeSpan&*, ::System::DateTimeKind&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEMICROSOFTDATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeMicrosoft(::Newtonsoft::Json::Utilities::StringReference* arg, ::Newtonsoft::Json::DateTimeZoneHandling* arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::Newtonsoft::Json::DateTimeZoneHandling*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEMICROSOFT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeExact(::System::String* str, ::Newtonsoft::Json::DateTimeZoneHandling* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::DateTime&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::DateTimeZoneHandling*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEEXACT_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeOffsetMicrosoft(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETMICROSOFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseDateTimeOffsetExact(::System::String* str, ::System::String* str, ::System::Globalization::CultureInfo* arg, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Globalization::CultureInfo*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYPARSEDATETIMEOFFSETEXACT_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Boolean TryReadOffset(::Newtonsoft::Json::Utilities::StringReference* arg, ::System::Int32 arg, ::System::TimeSpan&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Utilities::StringReference*, ::System::Int32, ::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_TRYREADOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteDateTimeString(::System::IO::TextWriter* arg, ::System::DateTime* arg, ::Newtonsoft::Json::DateFormatHandling* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::DateTime*, ::Newtonsoft::Json::DateFormatHandling*, ::System::String*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Int32 WriteDateTimeString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::DateTime* arg, Il2CppObject* arg, ::System::DateTimeKind* arg, ::Newtonsoft::Json::DateFormatHandling* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::DateTime*, Il2CppObject*, ::System::DateTimeKind*, ::Newtonsoft::Json::DateFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMESTRING_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WriteDefaultIsoDate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDEFAULTISODATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyIntToCharArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_COPYINTTOCHARARRAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WriteDateTimeOffset(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::TimeSpan* arg, ::Newtonsoft::Json::DateFormatHandling* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::TimeSpan*, ::Newtonsoft::Json::DateFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteDateTimeOffsetString(::System::IO::TextWriter* arg, ::System::DateTimeOffset* arg, ::Newtonsoft::Json::DateFormatHandling* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::DateTimeOffset*, ::Newtonsoft::Json::DateFormatHandling*, ::System::String*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_WRITEDATETIMEOFFSETSTRING_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void GetDateValues(::System::DateTime* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::DateTime*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_DATETIMEUTILS_GETDATEVALUES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

