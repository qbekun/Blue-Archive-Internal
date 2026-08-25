#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E2000)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaContent_TypeDefinitionIndex = 28141;

	class XmlSchemaContent : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

