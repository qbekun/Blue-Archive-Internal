#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLGUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BEA40)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x97BEA50)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97BEA80)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97BEA90)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97BEB50)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97BEB90)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARE_OFFSET UNITYSDK_OFFSET(0x97BEC10)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97BEDD0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x97BEED0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x97BEFD0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97BF0D0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97BF1E0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x97BF350)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97BF4A0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97BF540)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97BF550)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97BF680)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97BF7E0)
#define SYSTEM_DATA_SQLTYPES_SQLGUID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97BF860)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlGuid_TypeDefinitionIndex = 32334;

	class SqlGuid : public Il2CppObject
	{
	public:
		::System::Int32 s_sizeOfGuid; // 0x0
		::Il2CppArray<::System::Object*>* s_rgiGuidOrder; // 0x8
		::Il2CppArray<::System::Object*>* m_value; // 0x10
		::System::Data::SqlTypes::SqlGuid* Null; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Guid* get_Value()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlGuid* op_Implicit(::System::Guid* arg)
		{
			return (return (::System::Data::SqlTypes::SqlGuid*(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::EComparison* Compare(::System::Data::SqlTypes::SqlGuid* arg, ::System::Data::SqlTypes::SqlGuid* arg)
		{
			return (return (::System::Data::SqlTypes::EComparison*(*)(::System::Data::SqlTypes::SqlGuid*, ::System::Data::SqlTypes::SqlGuid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlGuid* arg, ::System::Data::SqlTypes::SqlGuid* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlGuid*, ::System::Data::SqlTypes::SqlGuid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_LessThan(::System::Data::SqlTypes::SqlGuid* arg, ::System::Data::SqlTypes::SqlGuid* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlGuid*, ::System::Data::SqlTypes::SqlGuid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_GreaterThan(::System::Data::SqlTypes::SqlGuid* arg, ::System::Data::SqlTypes::SqlGuid* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlGuid*, ::System::Data::SqlTypes::SqlGuid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlGuid* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlGuid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLGUID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

