#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AD470)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AE250)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x97AE2B0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97AE2D0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97ADBD0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISTRUE_OFFSET UNITYSDK_OFFSET(0x97AE2E0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISFALSE_OFFSET UNITYSDK_OFFSET(0x97AE2F0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97AE300)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_TRUE_OFFSET UNITYSDK_OFFSET(0x97AD9D0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x97AE330)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x97AE3F0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_BYTEVALUE_OFFSET UNITYSDK_OFFSET(0x97AE4B0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97AE560)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97AE6A0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_AND_OFFSET UNITYSDK_OFFSET(0x97AE760)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OR_OFFSET UNITYSDK_OFFSET(0x97AE870)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97AE980)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97AEA90)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x97AEBD0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97AEDA0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97AEEC0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97AEED0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97AEFE0)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97AF110)
#define SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97AF190)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlBoolean_TypeDefinitionIndex = 32326;

	class SqlBoolean : public Il2CppObject
	{
	public:
		::System::Byte m_value; // 0x10
		::System::Data::SqlTypes::SqlBoolean* True; // 0x0
		::System::Data::SqlTypes::SqlBoolean* False; // 0x1
		::System::Data::SqlTypes::SqlBoolean* Null; // 0x2
		::System::Data::SqlTypes::SqlBoolean* Zero; // 0x3
		::System::Data::SqlTypes::SqlBoolean* One; // 0x4

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Boolean get_Value()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISTRUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_ISFALSE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Implicit(::System::Boolean arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_True(::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_TRUE_OFFSET))(arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_BitwiseAnd(::System::Data::SqlTypes::SqlBoolean* arg, ::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBoolean*, ::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_BitwiseOr(::System::Data::SqlTypes::SqlBoolean* arg, ::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBoolean*, ::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte get_ByteValue()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GET_BYTEVALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlBoolean* arg, ::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBoolean*, ::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* And(::System::Data::SqlTypes::SqlBoolean* arg, ::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBoolean*, ::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_AND_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* Or(::System::Data::SqlTypes::SqlBoolean* arg, ::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlBoolean*, ::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_OR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlBoolean* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlBoolean*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLBOOLEAN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

