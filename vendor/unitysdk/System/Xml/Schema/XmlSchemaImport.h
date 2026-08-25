#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E68A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x98E68C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x98E68D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x98E68E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaImport_TypeDefinitionIndex = 28175;

	class XmlSchemaImport : public Il2CppObject
	{
	public:
		::System::String* ns; // 0x68
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIMPORT_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

	};
}

