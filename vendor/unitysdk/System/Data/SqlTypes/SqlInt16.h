#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BF940)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BF950)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97B9DC0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97B9DD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BF960)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97BF970)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x97BF9F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97BFAA0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97BFBF0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97BFD40)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97BFEB0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C0040)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x97C0150)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97C02D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C03C0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C04B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C05A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C05F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97C0640)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0x97C06A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C0810)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C0920)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x97C0AA0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97C0C00)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97C0CD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97C0CE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97C0DE0)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97C0F20)
#define SYSTEM_DATA_SQLTYPES_SQLINT16_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97C0FA0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt16_TypeDefinitionIndex = 32335;

	class SqlInt16 : public Il2CppObject
	{
	public:
		::System::Boolean m_fNotNull; // 0x10
		::System::Int16 m_value; // 0x12
		::System::Int32 s_MASKI2; // 0x0
		::System::Data::SqlTypes::SqlInt16* Null; // 0x4
		::System::Data::SqlTypes::SqlInt16* Zero; // 0x8
		::System::Data::SqlTypes::SqlInt16* MinValue; // 0xC
		::System::Data::SqlTypes::SqlInt16* MaxValue; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Int16 get_Value()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Implicit(::System::Int16 arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_UnaryNegation(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Addition(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Subtraction(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Multiply(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Division(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Implicit(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt16* op_Explicit(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt16*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlInt16* arg, ::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt16*, ::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ToSqlDouble()
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLDOUBLE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* ToSqlInt64()
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_TOSQLINT64_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT16_.CCTOR_OFFSET))(nullptr);
		}

	};
}

