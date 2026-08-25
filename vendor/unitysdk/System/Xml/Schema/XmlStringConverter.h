#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9912F20)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x9912F80)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9913010)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9913230)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x99134E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlStringConverter_TypeDefinitionIndex = 28222;

	class XmlStringConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

