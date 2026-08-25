#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x991FA30)
#define SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x991FCB0)
#define SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x991FD10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlUnionConverter_TypeDefinitionIndex = 28227;

	class XmlUnionConverter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* converters; // 0x28
		::System::Boolean hasAtomicMember; // 0x30
		::System::Boolean hasListMember; // 0x31

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Object* ChangeType(::System::Object* arg, ::System::Type* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CHANGETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

