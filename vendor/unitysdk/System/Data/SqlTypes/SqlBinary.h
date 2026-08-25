#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLBINARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97ACF50)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x97ACF60)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97ACFE0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97ACFF0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97AD0D0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97AD150)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_PERFORMCOMPAREBYTE_OFFSET UNITYSDK_OFFSET(0x97AD260)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97AD370)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97AD490)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97AD5A0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97AD6A0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97AD7B0)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x97ADA20)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_HASHBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x97ADC40)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97ADD00)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97ADE60)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97ADE70)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97AE020)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97AE160)
#define SYSTEM_DATA_SQLTYPES_SQLBINARY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97AE1E0)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlBinary_TypeDefinitionIndex = 32325;

	class SqlBinary : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _value; // 0x10
		::System::Data::SqlTypes::SqlBinary* Null; // 0x0

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_ISNULL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Value()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlBinary* op_Implicit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBinary*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::EComparison* PerformCompareByte(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Data::SqlTypes::EComparison*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_PERFORMCOMPAREBYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlBinary* arg, ::System::Data::SqlTypes::SqlBinary* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBinary*, ::System::Data::SqlTypes::SqlBinary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlBinary* arg, ::System::Data::SqlTypes::SqlBinary* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBinary*, ::System::Data::SqlTypes::SqlBinary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlBinary* arg, ::System::Data::SqlTypes::SqlBinary* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBinary*, ::System::Data::SqlTypes::SqlBinary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlBinary* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlBinary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 HashByteArray(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_HASHBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBINARY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

