#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C28C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C28D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97AFA90)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97AFAA0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C28E0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97C2900)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x97C2980)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97C2A30)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97C2BC0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97C2D30)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97C2F30)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x97C30D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97B0040)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C0700)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C1FD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x97BB3A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SAMESIGNLONG_OFFSET UNITYSDK_OFFSET(0x97C2BB0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97C3270)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C3350)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C3430)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C3510)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C3580)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLBYTE_OFFSET UNITYSDK_OFFSET(0x97C35F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97C3650)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT16_OFFSET UNITYSDK_OFFSET(0x97C36B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT32_OFFSET UNITYSDK_OFFSET(0x97C3710)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x97C3770)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C37D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C38E0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_EQUALS_OFFSET UNITYSDK_OFFSET(0x97C3A70)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97C3C00)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97C3CD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97C3CE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97C3DE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97C3F20)
#define SYSTEM_DATA_SQLTYPES_SQLINT64_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97C3FA0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt64_TypeDefinitionIndex = 32337;

	class SqlInt64 : public Il2CppObject
	{
	public:
		::System::Boolean m_fNotNull; // 0x10
		::System::Int64 m_value; // 0x18
		::System::Int64 s_lLowIntMask; // 0x0
		::System::Int64 s_lHighIntMask; // 0x8
		::System::Data::SqlTypes::SqlInt64* Null; // 0x10
		::System::Data::SqlTypes::SqlInt64* Zero; // 0x20
		::System::Data::SqlTypes::SqlInt64* MinValue; // 0x30
		::System::Data::SqlTypes::SqlInt64* MaxValue; // 0x40

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Int64 get_Value()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Implicit(::System::Int64 arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_UnaryNegation(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Addition(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Subtraction(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Multiply(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Division(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Modulus(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_MODULUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Implicit(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Implicit(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Implicit(::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* op_Explicit(::System::Data::SqlTypes::SqlDecimal* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::System::Data::SqlTypes::SqlDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SameSignLong(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SAMESIGNLONG_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlInt64* arg, ::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt64*, ::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlByte* ToSqlByte()
		{
			return (return (::System::Data::SqlTypes::SqlByte*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLBYTE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ToSqlDouble()
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDOUBLE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* ToSqlInt16()
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT16_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* ToSqlInt32()
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLINT32_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlDecimal* ToSqlDecimal()
		{
			return (return (::System::Data::SqlTypes::SqlDecimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_TOSQLDECIMAL_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT64_.CCTOR_OFFSET))(nullptr);
		}

	};
}

