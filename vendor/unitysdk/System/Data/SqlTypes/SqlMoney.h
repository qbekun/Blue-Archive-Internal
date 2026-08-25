#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C4070)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C4080)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C4090)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C40F0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C4210)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97BA200)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97C4380)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x97BA210)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x97BDAB0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C4420)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C4450)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97C44A0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x97C4590)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97C46B0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97C4910)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97C4B70)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97C4CD0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C4E30)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C4FA0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C5110)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C5240)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x97BB6A0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97C5350)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C5430)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C5510)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C55F0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C5660)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97C56D0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x97C5730)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C5790)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C58A0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x97C5A30)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97C5BC0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97C5C30)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97C5C40)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97C5D90)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97C5EF0)
#define SYSTEM_DATA_SQLTYPES_SQLMONEY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97C5F70)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlMoney_TypeDefinitionIndex = 32338;

	class SqlMoney : public Il2CppObject
	{
	public:
		::System::Boolean _fNotNull; // 0x10
		::System::Int64 _value; // 0x18
		::System::Int32 s_iMoneyScale; // 0x0
		::System::Int64 s_lTickBase; // 0x8
		::System::Double s_dTickBase; // 0x10
		::System::Int64 s_minLong; // 0x18
		::System::Int64 s_maxLong; // 0x20
		::System::Data::SqlTypes::SqlMoney* Null; // 0x28
		::System::Data::SqlTypes::SqlMoney* Zero; // 0x38
		::System::Data::SqlTypes::SqlMoney* MinValue; // 0x48
		::System::Data::SqlTypes::SqlMoney* MaxValue; // 0x58

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Decimal* get_Value()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Decimal* ToDecimal()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TODECIMAL_OFFSET))(nullptr);
		}

		::System::Double ToDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TODOUBLE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Implicit(::System::Decimal* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Implicit(::System::Int64 arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_UnaryNegation(::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Addition(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Subtraction(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Multiply(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Division(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Implicit(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Implicit(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Implicit(::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Implicit(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlMoney* op_Explicit(::System::Data::SqlTypes::SqlDecimal* arg)
		{
			return (return (::System::Data::SqlTypes::SqlMoney*(*)(::System::Data::SqlTypes::SqlDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlMoney* arg, ::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlMoney*, ::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ToSqlDouble()
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDOUBLE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlDecimal* ToSqlDecimal()
		{
			return (return (::System::Data::SqlTypes::SqlDecimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_TOSQLDECIMAL_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLMONEY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

