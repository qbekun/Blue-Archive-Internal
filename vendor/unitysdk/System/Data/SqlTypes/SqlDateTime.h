#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B2070)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B2080)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B21E0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97B2320)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x97B2330)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_TODATETIME_OFFSET UNITYSDK_OFFSET(0x97B23C0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMTIMESPAN_OFFSET UNITYSDK_OFFSET(0x97B2510)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMDATETIME_OFFSET UNITYSDK_OFFSET(0x97B20E0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97B2700)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_DAYTICKS_OFFSET UNITYSDK_OFFSET(0x97B27A0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_TIMETICKS_OFFSET UNITYSDK_OFFSET(0x97B2800)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97B2860)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97B28C0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97B29A0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97B2A90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97B2B90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97B2C90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97B2D10)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97B2D90)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97B2EB0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x97B3060)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97B31F0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97B32B0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97B32C0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97B34D0)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97B3640)
#define SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97B36C0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlDateTime_TypeDefinitionIndex = 32331;

	class SqlDateTime : public Il2CppObject
	{
	public:
		::System::Boolean m_fNotNull; // 0x10
		::System::Int32 m_day; // 0x14
		::System::Int32 m_time; // 0x18
		::System::Double s_SQLTicksPerMillisecond; // 0x0
		::System::Int32 SQLTicksPerSecond; // 0x8
		::System::Int32 SQLTicksPerMinute; // 0xC
		::System::Int32 SQLTicksPerHour; // 0x10
		::System::Int32 s_SQLTicksPerDay; // 0x14
		::System::Int64 s_ticksPerSecond; // 0x18
		::System::DateTime* s_SQLBaseDate; // 0x20
		::System::Int64 s_SQLBaseDateTicks; // 0x28
		::System::Int32 s_minYear; // 0x30
		::System::Int32 s_maxYear; // 0x34
		::System::Int32 s_minDay; // 0x38
		::System::Int32 s_maxDay; // 0x3C
		::System::Int32 s_minTime; // 0x40
		::System::Int32 s_maxTime; // 0x44
		::System::Int32 s_dayBase; // 0x48
		::Il2CppArray<::System::Object*>* s_daysToMonth365; // 0x50
		::Il2CppArray<::System::Object*>* s_daysToMonth366; // 0x58
		::System::DateTime* s_minDateTime; // 0x60
		::System::DateTime* s_maxDateTime; // 0x68
		::System::TimeSpan* s_minTimeSpan; // 0x70
		::System::TimeSpan* s_maxTimeSpan; // 0x78
		::System::String* s_ISO8601_DateTimeFormat; // 0x80
		::Il2CppArray<::System::Object*>* s_dateTimeFormats; // 0x88
		::System::Data::SqlTypes::SqlDateTime* MinValue; // 0x90
		::System::Data::SqlTypes::SqlDateTime* MaxValue; // 0x9C
		::System::Data::SqlTypes::SqlDateTime* Null; // 0xA8

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::TimeSpan* ToTimeSpan(::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDateTime* FromTimeSpan(::System::TimeSpan* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDateTime*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDateTime* FromDateTime(::System::DateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_FROMDATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_Value()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_DayTicks()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_DAYTICKS_OFFSET))(nullptr);
		}

		::System::Int32 get_TimeTicks()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GET_TIMETICKS_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlDateTime* op_Implicit(::System::DateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlDateTime* arg, ::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDateTime*, ::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlDateTime* arg, ::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDateTime*, ::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlDateTime* arg, ::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDateTime*, ::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlDateTime* arg, ::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDateTime*, ::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlDateTime* arg, ::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDateTime*, ::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlDateTime* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlDateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDATETIME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

