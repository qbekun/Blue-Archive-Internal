#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C60B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C60C0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C61A0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97BD970)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97BD980)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6200)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97C6230)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x97C62B0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97C6360)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97C6510)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97C66C0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97C6870)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6A70)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6B90)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6CB0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6D90)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6EB0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C6FD0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x97BDF30)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97C7160)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C7260)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C7350)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C7440)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C7490)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97C74E0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C7540)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C7650)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x97C77D0)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97C7940)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97C7A10)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97C7A20)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97C7B20)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97C7C70)
#define SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97C7CF0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlSingle_TypeDefinitionIndex = 32339;

	class SqlSingle : public Il2CppObject
	{
	public:
		::System::Boolean _fNotNull; // 0x10
		::System::Single _value; // 0x14
		::System::Data::SqlTypes::SqlSingle* Null; // 0x0
		::System::Data::SqlTypes::SqlSingle* Zero; // 0x8
		::System::Data::SqlTypes::SqlSingle* MinValue; // 0x10
		::System::Data::SqlTypes::SqlSingle* MaxValue; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Single get_Value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Single arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_UnaryNegation(::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Addition(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Subtraction(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Multiply(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Division(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Implicit(::System::Data::SqlTypes::SqlDecimal* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* op_Explicit(::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlSingle* arg, ::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlSingle*, ::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ToSqlDouble()
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_TOSQLDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSINGLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

