#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x98E4A10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x98E4A20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_MARKUP_OFFSET UNITYSDK_OFFSET(0x98E4B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E4B40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98E4B50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDocumentation_TypeDefinitionIndex = 28147;

	class XmlSchemaDocumentation : public Il2CppObject
	{
	public:
		::System::String* source; // 0x38
		::System::String* language; // 0x40
		::Il2CppArray<::System::Object*>* markup; // 0x48
		::System::Xml::Schema::XmlSchemaSimpleType* languageType; // 0x0

		::System::Void set_Source(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_SOURCE_OFFSET))(str, nullptr);
		}

		::System::Void set_Language(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_LANGUAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_Markup(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_SET_MARKUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMADOCUMENTATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

