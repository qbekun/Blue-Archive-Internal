#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BINXMLDATETIME_WRITE2DIG_OFFSET UNITYSDK_OFFSET(0x983FF20)
#define SYSTEM_XML_BINXMLDATETIME_WRITE4DIGNEG_OFFSET UNITYSDK_OFFSET(0x983FF80)
#define SYSTEM_XML_BINXMLDATETIME_WRITE3DEC_OFFSET UNITYSDK_OFFSET(0x98400A0)
#define SYSTEM_XML_BINXMLDATETIME_WRITEDATE_OFFSET UNITYSDK_OFFSET(0x9840140)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIME_OFFSET UNITYSDK_OFFSET(0x9840260)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIMEFULLPRECISION_OFFSET UNITYSDK_OFFSET(0x98404A0)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_OFFSET UNITYSDK_OFFSET(0x9840730)
#define SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_OFFSET UNITYSDK_OFFSET(0x9840860)
#define SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATETIME_OFFSET UNITYSDK_OFFSET(0x98409A0)
#define SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATE_OFFSET UNITYSDK_OFFSET(0x9840B60)
#define SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDTIME_OFFSET UNITYSDK_OFFSET(0x9840CE0)
#define SYSTEM_XML_BINXMLDATETIME_XSDDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x9840DF0)
#define SYSTEM_XML_BINXMLDATETIME_XSDDATETOSTRING_OFFSET UNITYSDK_OFFSET(0x9840F50)
#define SYSTEM_XML_BINXMLDATETIME_XSDTIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x9841070)
#define SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x9841170)
#define SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x9841270)
#define SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x9841350)
#define SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x98414A0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETODATETIME_OFFSET UNITYSDK_OFFSET(0x9841500)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x9841660)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x9841960)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x98419B0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9841A10)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9841B70)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETOSTRING_OFFSET UNITYSDK_OFFSET(0x9841BD0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x9841CD0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETOSTRING_OFFSET UNITYSDK_OFFSET(0x9841F20)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x98420B0)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x9842250)
#define SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTOSTRING_OFFSET UNITYSDK_OFFSET(0x98424F0)
#define SYSTEM_XML_BINXMLDATETIME_GETKATMAIDATETICKS_OFFSET UNITYSDK_OFFSET(0x98415F0)
#define SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMETICKS_OFFSET UNITYSDK_OFFSET(0x9841730)
#define SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMEZONETICKS_OFFSET UNITYSDK_OFFSET(0x9841B20)
#define SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_OFFSET UNITYSDK_OFFSET(0x9841E20)
#define SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_OFFSET UNITYSDK_OFFSET(0x98423D0)
#define SYSTEM_XML_BINXMLDATETIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98426B0)

namespace System::Xml
{
	inline static constexpr unsigned int BinXmlDateTime_TypeDefinitionIndex = 27615;

	class BinXmlDateTime : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* KatmaiTimeScaleMultiplicator; // 0x0
		::System::Double SQLTicksPerMillisecond; // 0x8
		::System::Int32 SQLTicksPerSecond; // 0x10
		::System::Int32 SQLTicksPerMinute; // 0x14
		::System::Int32 SQLTicksPerHour; // 0x18
		::System::Int32 SQLTicksPerDay; // 0x1C

		::System::Void Write2Dig(::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITE2DIG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write4DigNeg(::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITE4DIGNEG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write3Dec(::System::Text::StringBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITE3DEC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteDate(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITEDATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteTime(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteTimeFullPrecision(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIMEFULLPRECISION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteTimeZone(::System::Text::StringBuilder* arg, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteTimeZone(::System::Text::StringBuilder* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_WRITETIMEZONE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BreakDownXsdDateTime(::System::Int64 arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int64, int32_t&*, int32_t&*, int32_t&*, int32_t&*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATETIME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BreakDownXsdDate(::System::Int64 arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, bool&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int64, int32_t&*, int32_t&*, int32_t&*, bool&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDDATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BreakDownXsdTime(::System::Int64 arg, int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int64, int32_t&*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_BREAKDOWNXSDTIME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* XsdDateTimeToString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDDATETIMETOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* XsdDateToString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDDATETOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* XsdTimeToString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDTIMETOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* SqlDateTimeToString(::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* SqlDateTimeToDateTime(::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLDATETIMETODATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::String* SqlSmallDateTimeToString(::System::Int16 arg, ::System::UInt16 arg)
		{
			return (return (::System::String*(*)(::System::Int16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* SqlSmallDateTimeToDateTime(::System::Int16 arg, ::System::UInt16 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_SQLSMALLDATETIMETODATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* XsdKatmaiDateToDateTime(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETODATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* XsdKatmaiDateTimeToDateTime(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETODATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* XsdKatmaiTimeToDateTime(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETODATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTimeOffset* XsdKatmaiDateOffsetToDateTimeOffset(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTimeOffset*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTODATETIMEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTimeOffset* XsdKatmaiDateTimeOffsetToDateTimeOffset(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTimeOffset*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTODATETIMEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTimeOffset* XsdKatmaiTimeOffsetToDateTimeOffset(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTimeOffset*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTODATETIMEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XsdKatmaiDateToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XsdKatmaiDateTimeToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMETOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XsdKatmaiTimeToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMETOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XsdKatmaiDateOffsetToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATEOFFSETTOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XsdKatmaiDateTimeOffsetToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAIDATETIMEOFFSETTOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::String* XsdKatmaiTimeOffsetToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_XSDKATMAITIMEOFFSETTOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetKatmaiDateTicks(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETKATMAIDATETICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetKatmaiTimeTicks(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMETICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetKatmaiTimeZoneTicks(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETKATMAITIMEZONETICKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetFractions(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFractions(::System::DateTimeOffset* arg)
		{
			return (return (::System::Int32(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_GETFRACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLDATETIME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

