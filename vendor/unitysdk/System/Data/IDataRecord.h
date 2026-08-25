#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_IDATARECORD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETDATATYPENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETFIELDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETORDINAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETBYTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETCHARS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETGUID_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETINT16_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETINT32_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETINT64_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETDECIMAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_GETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_IDATARECORD_ISDBNULL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Data
{
	inline static constexpr unsigned int IDataRecord_TypeDefinitionIndex = 32270;

	class IDataRecord : public Il2CppObject
	{
	public:
		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::String* GetName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetDataTypeName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETDATATYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Type* GetFieldType(::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETFIELDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetValues(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETVALUES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetOrdinal(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETORDINAL_OFFSET))(str, nullptr);
		}

		::System::Boolean GetBoolean(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Byte GetByte(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetBytes(::System::Int32 arg, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Char GetChar(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetChars(::System::Int32 arg, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETCHARS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Guid* GetGuid(::System::Int32 arg)
		{
			return (return (::System::Guid*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETGUID_OFFSET))(arg, nullptr);
		}

		::System::Int16 GetInt16(::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInt32(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetInt64(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETINT64_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Double GetDouble(::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::String* GetString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETSTRING_OFFSET))(arg, nullptr);
		}

		::System::Decimal* GetDecimal(::System::Int32 arg)
		{
			return (return (::System::Decimal*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETDECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetDateTime(::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Data::IDataReader* GetData(::System::Int32 arg)
		{
			return (return (::System::Data::IDataReader*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDBNull(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_IDATARECORD_ISDBNULL_OFFSET))(arg, nullptr);
		}

	};
}

