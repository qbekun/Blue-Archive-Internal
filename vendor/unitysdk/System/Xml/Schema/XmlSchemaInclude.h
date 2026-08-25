#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E68F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x98E6910)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInclude_TypeDefinitionIndex = 28176;

	class XmlSchemaInclude : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINCLUDE_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

	};
}

