#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_NULLSTRING_OFFSET UNITYSDK_OFFSET(0x97ACC10)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_ARITHOVERFLOWMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACC40)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_DIVIDEBYZEROMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACC70)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_NULLVALUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACCA0)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_TRUNCATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACCD0)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_DATETIMEOVERFLOWMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACD00)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_CONCATDIFFCOLLATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACD30)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_COMPAREDIFFCOLLATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACD60)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_CONVERSIONOVERFLOWMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACD90)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_TIMEZONESPECIFIEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACDC0)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_INVALIDPRECSCALEMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACDF0)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0x97ACE20)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x97ACE50)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONWRITABLE_OFFSET UNITYSDK_OFFSET(0x97ACE90)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONREADABLE_OFFSET UNITYSDK_OFFSET(0x97ACED0)
#define SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONSEEKABLE_OFFSET UNITYSDK_OFFSET(0x97ACF10)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SQLResource_TypeDefinitionIndex = 32323;

	class SQLResource : public Il2CppObject
	{
	public:
		::System::String* get_NullString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_NULLSTRING_OFFSET))(nullptr);
		}

		::System::String* get_ArithOverflowMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_ARITHOVERFLOWMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_DivideByZeroMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_DIVIDEBYZEROMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_NullValueMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_NULLVALUEMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_TruncationMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_TRUNCATIONMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_DateTimeOverflowMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_DATETIMEOVERFLOWMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_ConcatDiffCollationMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_CONCATDIFFCOLLATIONMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_CompareDiffCollationMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_COMPAREDIFFCOLLATIONMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_ConversionOverflowMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_CONVERSIONOVERFLOWMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_TimeZoneSpecifiedMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_TIMEZONESPECIFIEDMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_InvalidPrecScaleMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_INVALIDPRECSCALEMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_FormatMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_GET_FORMATMESSAGE_OFFSET))(nullptr);
		}

		::System::String* InvalidOpStreamClosed(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMCLOSED_OFFSET))(str, nullptr);
		}

		::System::String* InvalidOpStreamNonWritable(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONWRITABLE_OFFSET))(str, nullptr);
		}

		::System::String* InvalidOpStreamNonReadable(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONREADABLE_OFFSET))(str, nullptr);
		}

		::System::String* InvalidOpStreamNonSeekable(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLRESOURCE_INVALIDOPSTREAMNONSEEKABLE_OFFSET))(str, nullptr);
		}

	};
}

