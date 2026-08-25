#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH_GET_XPATH_OFFSET UNITYSDK_OFFSET(0x98E6720)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH_SET_XPATH_OFFSET UNITYSDK_OFFSET(0x98E6730)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6740)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaXPath_TypeDefinitionIndex = 28171;

	class XmlSchemaXPath : public Il2CppObject
	{
	public:
		::System::String* xpath; // 0x50

		::System::String* get_XPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH_GET_XPATH_OFFSET))(nullptr);
		}

		::System::Void set_XPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH_SET_XPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAXPATH_.CTOR_OFFSET))(nullptr);
		}

	};
}

