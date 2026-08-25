#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9934CA0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9934E80)
#define SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9934F90)
#define SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9935160)
#define SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99351E0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x9935A90)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_YEARS_OFFSET UNITYSDK_OFFSET(0x9935AA0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_MONTHS_OFFSET UNITYSDK_OFFSET(0x9935AB0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x9935AC0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x9935AD0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x9935AE0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x9935AF0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_GET_NANOSECONDS_OFFSET UNITYSDK_OFFSET(0x9935A80)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9935B00)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9935B50)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x99361A0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x9935BA0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99361B0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99361C0)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9936590)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9935260)
#define SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSEDIGITS_OFFSET UNITYSDK_OFFSET(0x99365A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDuration_TypeDefinitionIndex = 28243;

	class XsdDuration : public Il2CppObject
	{
	public:
		::System::Int32 years; // 0x10
		::System::Int32 months; // 0x14
		::System::Int32 days; // 0x18
		::System::Int32 hours; // 0x1C
		::System::Int32 minutes; // 0x20
		::System::Int32 seconds; // 0x24
		::System::UInt32 nanoseconds; // 0x28

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::TimeSpan* arg, DurationType* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, DurationType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, DurationType* arg)
		{
			((::System::Void(*)(::System::String*, DurationType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_IsNegative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_ISNEGATIVE_OFFSET))(nullptr);
		}

		::System::Int32 get_Years()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_YEARS_OFFSET))(nullptr);
		}

		::System::Int32 get_Months()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_MONTHS_OFFSET))(nullptr);
		}

		::System::Int32 get_Days()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_DAYS_OFFSET))(nullptr);
		}

		::System::Int32 get_Hours()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_HOURS_OFFSET))(nullptr);
		}

		::System::Int32 get_Minutes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_MINUTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Seconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_SECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_Nanoseconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_GET_NANOSECONDS_OFFSET))(nullptr);
		}

		::System::TimeSpan* ToTimeSpan()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET))(nullptr);
		}

		::System::TimeSpan* ToTimeSpan(DurationType* arg)
		{
			return (return (::System::TimeSpan*(*)(DurationType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::Exception* TryToTimeSpan(::System::TimeSpan&* arg)
		{
			return (return (::System::Exception*(*)(::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::Exception* TryToTimeSpan(DurationType* arg, ::System::TimeSpan&* arg)
		{
			return (return (::System::Exception*(*)(DurationType*, ::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYTOTIMESPAN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(DurationType* arg)
		{
			return (return (::System::String*(*)(DurationType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Exception* TryParse(::System::String* str, ::System::Xml::Schema::XsdDuration&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XsdDuration&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Exception* TryParse(::System::String* str, DurationType* arg, ::System::Xml::Schema::XsdDuration&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, DurationType*, ::System::Xml::Schema::XsdDuration&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* TryParseDigits(::System::String* str, int32_t&* arg, ::System::Boolean arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::System::Boolean, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDURATION_TRYPARSEDIGITS_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

	};
}

