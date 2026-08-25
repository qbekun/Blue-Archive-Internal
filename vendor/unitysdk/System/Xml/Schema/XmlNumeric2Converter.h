#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x990C0B0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x990C110)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x990C1A0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x990C270)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x990C5D0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x990C5E0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x990C6B0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990CA20)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990CAC0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990CB40)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990CEA0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990D240)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x990D600)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlNumeric2Converter_TypeDefinitionIndex = 28218;

	class XmlNumeric2Converter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble(::System::String* str)
		{
			return (return (::System::Double(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET))(str, nullptr);
		}

		::System::Double ToDouble(::System::Object* arg)
		{
			return (return (::System::Double(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::Double arg)
		{
			return (return (::System::Single(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET))(str, nullptr);
		}

		::System::Single ToSingle(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Double arg)
		{
			return (return (::System::String*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Single arg)
		{
			return (return (::System::String*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Double arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Double, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

