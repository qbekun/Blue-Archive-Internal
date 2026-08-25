#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C7E10)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C7E50)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C7F90)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x97C8100)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x97B1710)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97B1720)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SETCOMPAREINFO_OFFSET UNITYSDK_OFFSET(0x97C81D0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x97C8260)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97C8280)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x97C82F0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_STRINGCOMPARE_OFFSET UNITYSDK_OFFSET(0x97C84A0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARE_OFFSET UNITYSDK_OFFSET(0x97C8C30)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x97C8DD0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_VALIDATESQLCOMPAREOPTIONS_OFFSET UNITYSDK_OFFSET(0x97C7EE0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREOPTIONSFROMSQLCOMPAREOPTIONS_OFFSET UNITYSDK_OFFSET(0x97C8B50)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_FBINARYSORT_OFFSET UNITYSDK_OFFSET(0x97C8E50)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY_OFFSET UNITYSDK_OFFSET(0x97C8810)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY2_OFFSET UNITYSDK_OFFSET(0x97C8A00)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C8EC0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x97C8FE0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x97C9130)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97C9330)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x97C96C0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x97C96D0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x97C97C0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x97C98D0)
#define SYSTEM_DATA_SQLTYPES_SQLSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97C9950)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlString_TypeDefinitionIndex = 32341;

	class SqlString : public Il2CppObject
	{
	public:
		::System::String* m_value; // 0x10
		::System::Globalization::CompareInfo* m_cmpInfo; // 0x18
		::System::Int32 m_lcid; // 0x20
		::System::Data::SqlTypes::SqlCompareOptions* m_flag; // 0x24
		::System::Boolean m_fNotNull; // 0x28
		::System::Data::SqlTypes::SqlString* Null; // 0x0
		::System::Text::UnicodeEncoding* s_unicodeEncoding; // 0x20
		::System::Int32 IgnoreCase; // 0x28
		::System::Int32 IgnoreWidth; // 0x2C
		::System::Int32 IgnoreNonSpace; // 0x30
		::System::Int32 IgnoreKanaType; // 0x34
		::System::Int32 BinarySort; // 0x38
		::System::Int32 BinarySort2; // 0x3C
		::System::Data::SqlTypes::SqlCompareOptions* s_iDefaultFlag; // 0x40
		::System::Globalization::CompareOptions* s_iValidCompareOptionMask; // 0x44
		::System::Data::SqlTypes::SqlCompareOptions* s_iValidSqlCompareOptionMask; // 0x48
		::System::Int32 s_lcidUSEnglish; // 0x4C
		::System::Int32 s_lcidBinary; // 0x50

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Data::SqlTypes::SqlCompareOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Data::SqlTypes::SqlCompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Data::SqlTypes::SqlCompareOptions* arg, ::System::String* str, ::System::Globalization::CompareInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Data::SqlTypes::SqlCompareOptions*, ::System::String*, ::System::Globalization::CompareInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetCompareInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SETCOMPAREINFO_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlString* op_Implicit(::System::String* str)
		{
			return (return (::System::Data::SqlTypes::SqlString*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Data::SqlTypes::SqlString* op_Addition(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Data::SqlTypes::SqlString*(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 StringCompare(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_STRINGCOMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* Compare(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::EComparison* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::EComparison*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Data::SqlTypes::SqlBoolean* op_Equality(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Data::SqlTypes::SqlBoolean*(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions* arg)
		{
			((::System::Void(*)(::System::Data::SqlTypes::SqlCompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_VALIDATESQLCOMPAREOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Globalization::CompareOptions* CompareOptionsFromSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions* arg)
		{
			return (return (::System::Globalization::CompareOptions*(*)(::System::Data::SqlTypes::SqlCompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREOPTIONSFROMSQLCOMPAREOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean FBinarySort()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_FBINARYSORT_OFFSET))(nullptr);
		}

		::System::Int32 CompareBinary(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareBinary2(::System::Data::SqlTypes::SqlString* arg, ::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlString*, ::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPAREBINARY2_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Data::SqlTypes::SqlString* arg)
		{
			return (return (::System::Int32(*)(::System::Data::SqlTypes::SqlString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_GETXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLSTRING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

