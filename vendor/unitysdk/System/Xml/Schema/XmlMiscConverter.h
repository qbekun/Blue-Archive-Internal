#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9911310)
#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x9911370)
#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9911400)
#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9911A80)
#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9912100)
#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x9911950)
#define SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x9911FB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlMiscConverter_TypeDefinitionIndex = 28221;

	class XmlMiscConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLMISCCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

