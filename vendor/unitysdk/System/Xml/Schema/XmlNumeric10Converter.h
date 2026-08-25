#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9908210)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x9908270)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9908300)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x99083D0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x9908C10)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x9908C60)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x9908D70)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x9909160)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x9909170)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x9909280)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9909660)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9909740)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9909790)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99097E0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9909BF0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990A4C0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990A8E0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990AD10)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990B140)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x99087E0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x990A060)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlNumeric10Converter_TypeDefinitionIndex = 28217;

	class XmlNumeric10Converter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal(::System::String* str)
		{
			return (return (::System::Decimal*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_OFFSET))(str, nullptr);
		}

		::System::Decimal* ToDecimal(::System::Object* arg)
		{
			return (return (::System::Decimal*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET))(str, nullptr);
		}

		::System::Int32 ToInt32(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET))(str, nullptr);
		}

		::System::Int64 ToInt64(::System::Object* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Decimal* arg)
		{
			return (return (::System::String*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Decimal* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Decimal*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Int32 arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Int64 arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

