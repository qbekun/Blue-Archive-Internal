#pragma once
#include "../../../unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaValidationFlags_TypeDefinitionIndex = 28208;

	class XmlSchemaValidationFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::Schema::XmlSchemaValidationFlags* None; // 0x0
		::System::Xml::Schema::XmlSchemaValidationFlags* ProcessInlineSchema; // 0x0
		::System::Xml::Schema::XmlSchemaValidationFlags* ProcessSchemaLocation; // 0x0
		::System::Xml::Schema::XmlSchemaValidationFlags* ReportValidationWarnings; // 0x0
		::System::Xml::Schema::XmlSchemaValidationFlags* ProcessIdentityConstraints; // 0x0
		::System::Xml::Schema::XmlSchemaValidationFlags* AllowXmlAttributes; // 0x0

	};
}

