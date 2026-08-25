#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x990FF00)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x990FF60)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x990FFF0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9910090)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9910370)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99103C0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x99106A0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x99109D0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9910D20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlBooleanConverter_TypeDefinitionIndex = 28220;

	class XmlBooleanConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ToBoolean(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET))(str, nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Boolean arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::String* str, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

