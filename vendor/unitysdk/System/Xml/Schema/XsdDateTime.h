#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9930050)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9931430)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x9931360)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x99314B0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99315C0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9931770)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99317E0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET UNITYSDK_OFFSET(0x9931950)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x9931960)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x9931970)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x99319C0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x9931A10)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x9931A60)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x9931AB0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x9931B00)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET UNITYSDK_OFFSET(0x9931B50)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET UNITYSDK_OFFSET(0x9931C50)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET UNITYSDK_OFFSET(0x9931C60)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9931C70)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x99323D0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99328D0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET UNITYSDK_OFFSET(0x9933100)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET UNITYSDK_OFFSET(0x9933400)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET UNITYSDK_OFFSET(0x9933890)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x99337B0)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x9933820)
#define SYSTEM_XML_SCHEMA_XSDDATETIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9933AC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_TypeDefinitionIndex = 28240;

	class XsdDateTime : public Il2CppObject
	{
	public:
		::System::DateTime* dt; // 0x10
		::System::UInt32 extra; // 0x18
		::System::Int32 Lzyyyy; // 0x0
		::System::Int32 Lzyyyy_; // 0x4
		::System::Int32 Lzyyyy_MM; // 0x8
		::System::Int32 Lzyyyy_MM_; // 0xC
		::System::Int32 Lzyyyy_MM_dd; // 0x10
		::System::Int32 Lzyyyy_MM_ddT; // 0x14
		::System::Int32 LzHH; // 0x18
		::System::Int32 LzHH_; // 0x1C
		::System::Int32 LzHH_mm; // 0x20
		::System::Int32 LzHH_mm_; // 0x24
		::System::Int32 LzHH_mm_ss; // 0x28
		::System::Int32 Lz_; // 0x2C
		::System::Int32 Lz_zz; // 0x30
		::System::Int32 Lz_zz_; // 0x34
		::System::Int32 Lz_zz_zz; // 0x38
		::System::Int32 Lz__; // 0x3C
		::System::Int32 Lz__mm; // 0x40
		::System::Int32 Lz__mm_; // 0x44
		::System::Int32 Lz__mm__; // 0x48
		::System::Int32 Lz__mm_dd; // 0x4C
		::System::Int32 Lz___; // 0x50
		::System::Int32 Lz___dd; // 0x54
		::Il2CppArray<::System::Object*>* typeCodes; // 0x58

		::System::Void .ctor(::System::String* str, ::System::Xml::Schema::XsdDateTimeFlags* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::XsdDateTimeFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(Parser* arg)
		{
			((::System::Void(*)(Parser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitiateXsdDateTime(Parser* arg)
		{
			((::System::Void(*)(Parser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INITIATEXSDDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Xml::Schema::XsdDateTimeFlags* arg, ::System::Xml::Schema::XsdDateTime&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Xml::Schema::XsdDateTimeFlags*, ::System::Xml::Schema::XsdDateTime&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg, ::System::Xml::Schema::XsdDateTimeFlags* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::System::Xml::Schema::XsdDateTimeFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::DateTimeOffset* arg, ::System::Xml::Schema::XsdDateTimeFlags* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::System::Xml::Schema::XsdDateTimeFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		DateTimeTypeCode* get_InternalTypeCode()
		{
			return (return (DateTimeTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALTYPECODE_OFFSET))(nullptr);
		}

		XsdDateTimeKind* get_InternalKind()
		{
			return (return (XsdDateTimeKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_INTERNALKIND_OFFSET))(nullptr);
		}

		::System::Int32 get_Year()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_YEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Month()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MONTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_DAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Hour()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_HOUR_OFFSET))(nullptr);
		}

		::System::Int32 get_Minute()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_MINUTE_OFFSET))(nullptr);
		}

		::System::Int32 get_Second()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_SECOND_OFFSET))(nullptr);
		}

		::System::Int32 get_Fraction()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_FRACTION_OFFSET))(nullptr);
		}

		::System::Int32 get_ZoneHour()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEHOUR_OFFSET))(nullptr);
		}

		::System::Int32 get_ZoneMinute()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_GET_ZONEMINUTE_OFFSET))(nullptr);
		}

		::System::DateTime* op_Implicit(::System::Xml::Schema::XsdDateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::Xml::Schema::XsdDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* op_Implicit(::System::Xml::Schema::XsdDateTime* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::System::Xml::Schema::XsdDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void PrintDate(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void PrintTime(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void PrintZone(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_PRINTZONE_OFFSET))(arg, nullptr);
		}

		::System::Void IntToCharArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_INTTOCHARARRAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShortToCharArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_SHORTTOCHARARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDDATETIME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

