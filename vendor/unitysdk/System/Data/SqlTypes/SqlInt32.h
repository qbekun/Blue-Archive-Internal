#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C1020)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C1030)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97B9F20)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97B9F30)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C1040)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97C1050)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x97C10D0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97C1180)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97C1310)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97C1490)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97C1620)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C17F0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C1910)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x97C1A30)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SAMESIGNINT_OFFSET UNITYSDK_OFFSET(0x97C1300)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97C1BD0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C1CB0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C1D90)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97C1E70)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97C1EC0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x97C1F10)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0x97C1F70)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C20A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C21B0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x97C2330)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97C24A0)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97C2540)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97C2550)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97C2650)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97C2790)
#define SYSTEM_DATA_SQLTYPES_SQLINT32_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97C2810)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlInt32_TypeDefinitionIndex = 32336;

	class SqlInt32 : public Il2CppObject
	{
	public:
		::System::Boolean m_fNotNull; // 0x10
		::System::Int32 m_value; // 0x14
		::System::Int64 s_iIntMin; // 0x0
		::System::Int64 s_lBitNotIntMax; // 0x8
		::System::Data::SqlTypes::SqlInt32* Null; // 0x10
		::System::Data::SqlTypes::SqlInt32* Zero; // 0x18
		::System::Data::SqlTypes::SqlInt32* MinValue; // 0x20
		::System::Data::SqlTypes::SqlInt32* MaxValue; // 0x28

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Implicit(::System::Int32 arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_UnaryNegation(::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Addition(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Subtraction(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Multiply(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Division(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Implicit(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Implicit(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlInt32* op_Explicit(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlInt32*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SameSignInt(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SAMESIGNINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlInt32* arg, ::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlInt32*, ::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* ToSqlDouble()
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLDOUBLE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlInt64* ToSqlInt64()
		{
			return (return (::System::Data::SqlTypes::SqlInt64*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_TOSQLINT64_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLINT32_.CCTOR_OFFSET))(nullptr);
		}

	};
}

