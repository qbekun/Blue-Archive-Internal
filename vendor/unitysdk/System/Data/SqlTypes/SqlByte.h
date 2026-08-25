#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AF280)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AF290)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97AF2A0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97AF2B0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97AF340)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97AF350)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97AF3D0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97AF510)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97AF650)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97AF790)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x97AF8C0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97AFB00)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97AFBF0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97AFCE0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97AFDD0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97AFE20)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97AFE70)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0x97AFFE0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97B0150)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97B0260)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x97B03E0)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97B0530)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97B0600)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97B0610)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97B0710)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97B0850)
#define SYSTEM_DATA_SQLTYPES_SQLBYTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97B08D0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlByte_TypeDefinitionIndex = 32327;

	class SqlByte : public Il2CppObject
	{
	public:
		::System::Boolean m_fNotNull; // 0x10
		::System::Byte m_value; // 0x11
		::System::Int32 s_iBitNotByteMax; // 0x0
		::System::Data::SqlTypes::SqlByte* Null; // 0x4
		::System::Data::SqlTypes::SqlByte* Zero; // 0x6
		::System::Data::SqlTypes::SqlByte* MinValue; // 0x8
		::System::Data::SqlTypes::SqlByte* MaxValue; // 0xA

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Byte get_Value()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlByte* op_Implicit(::System::Byte arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlByte* op_Addition(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlByte* op_Subtraction(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlByte* op_Multiply(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlByte* op_Division(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlByte* op_Explicit(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlByte* arg, ::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlByte*, ::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ToSqlDouble()
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLDOUBLE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* ToSqlInt64()
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_TOSQLINT64_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBYTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

