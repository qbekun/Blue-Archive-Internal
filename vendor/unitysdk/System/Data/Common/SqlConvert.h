#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTE_OFFSET UNITYSDK_OFFSET(0x97E1DE0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT16_OFFSET UNITYSDK_OFFSET(0x97E1FE0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT32_OFFSET UNITYSDK_OFFSET(0x97E2290)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT64_OFFSET UNITYSDK_OFFSET(0x97E2620)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97E2A80)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x97E30F0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSINGLE_OFFSET UNITYSDK_OFFSET(0x97E36B0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLMONEY_OFFSET UNITYSDK_OFFSET(0x97E3C80)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDATETIME_OFFSET UNITYSDK_OFFSET(0x97E41F0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBOOLEAN_OFFSET UNITYSDK_OFFSET(0x97E4410)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLGUID_OFFSET UNITYSDK_OFFSET(0x97E45E0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBINARY_OFFSET UNITYSDK_OFFSET(0x97E47E0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSTRING_OFFSET UNITYSDK_OFFSET(0x97E49E0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLCHARS_OFFSET UNITYSDK_OFFSET(0x97E4BD0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTES_OFFSET UNITYSDK_OFFSET(0x97E4D30)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTSTRINGTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x97E4E90)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x97E4EF0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPE2_OFFSET UNITYSDK_OFFSET(0x97E50A0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORXML_OFFSET UNITYSDK_OFFSET(0x97E6000)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlConvert_TypeDefinitionIndex = 32367;

	class SqlConvert : public Il2CppObject
	{
	public:
		::System::Data::SqlTypes::SqlByte* ConvertToSqlByte(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTE_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* ConvertToSqlInt16(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT16_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* ConvertToSqlInt32(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT32_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* ConvertToSqlInt64(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT64_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ConvertToSqlDouble(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDecimal* ConvertToSqlDecimal(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDecimal*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* ConvertToSqlSingle(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* ConvertToSqlMoney(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLMONEY_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDateTime* ConvertToSqlDateTime(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDateTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* ConvertToSqlBoolean(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlGuid* ConvertToSqlGuid(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlGuid*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLGUID_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBinary* ConvertToSqlBinary(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBinary*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBINARY_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlString* ConvertToSqlString(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlString*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSTRING_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlChars* ConvertToSqlChars(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlChars*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLCHARS_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBytes* ConvertToSqlBytes(::System::Object* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBytes*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTES_OFFSET))(arg, nullptr);
		}

		::System::DateTimeOffset* ConvertStringToDateTimeOffset(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::DateTimeOffset*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTSTRINGTODATETIMEOFFSET_OFFSET))(str, arg, nullptr);
		}

		::System::Object* ChangeTypeForDefaultValue(::System::Object* arg, ::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORDEFAULTVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeType2(::System::Object* arg, ::System::Data::Common::StorageType* arg, ::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Data::Common::StorageType*, ::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPE2_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeForXML(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORXML_OFFSET))(arg, arg, nullptr);
		}

	};
}

