#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BCBA0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BCBB0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97BCC80)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97BCC90)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BCCF0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97BCD10)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x97BCD90)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97BCE40)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x97BCFF0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x97BD1A0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x97BD350)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97AFED0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BD560)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BD670)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BD740)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BD850)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BD9E0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BB1E0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97BDB40)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97BDC30)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97BDD10)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97BDDF0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97BDE60)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSQLSINGLE_OFFSET UNITYSDK_OFFSET(0x97BDED0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97BE0A0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97BE1B0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x97BE340)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97BE4D0)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97BE600)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97BE610)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97BE710)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97BE860)
#define SYSTEM_DATA_SQLTYPES_SQLDOUBLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97BE8E0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlDouble_TypeDefinitionIndex = 32333;

	class SqlDouble : public Il2CppObject
	{
	public:
		::System::Boolean m_fNotNull; // 0x10
		::System::Double m_value; // 0x18
		::System::Data::SqlTypes::SqlDouble* Null; // 0x0
		::System::Data::SqlTypes::SqlDouble* Zero; // 0x10
		::System::Data::SqlTypes::SqlDouble* MinValue; // 0x20
		::System::Data::SqlTypes::SqlDouble* MaxValue; // 0x30

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Double get_Value()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Double arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_UnaryNegation(::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Addition(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Subtraction(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Multiply(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_MULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Division(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_DIVISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlByte* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlByte*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlInt16* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlInt16*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlInt32* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlInt32*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlInt64* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlInt64*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlSingle* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlMoney* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlMoney*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlDouble* op_Implicit(::System::Data::SqlTypes::SqlDecimal* arg)
		{
			return (return (::System::Data::SqlTypes::SqlDouble*(*)(::System::Data::SqlTypes::SqlDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* LessThan(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* GreaterThan(::System::Data::SqlTypes::SqlDouble* arg, ::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlDouble*, ::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlSingle* ToSqlSingle()
		{
			return (return (::System::Data::SqlTypes::SqlSingle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_TOSQLSINGLE_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlDouble* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlDouble*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDOUBLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

