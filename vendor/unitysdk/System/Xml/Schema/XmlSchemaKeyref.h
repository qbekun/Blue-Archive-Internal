#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_GET_REFER_OFFSET UNITYSDK_OFFSET(0x98E6770)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_SET_REFER_OFFSET UNITYSDK_OFFSET(0x98E6780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6830)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaKeyref_TypeDefinitionIndex = 28174;

	class XmlSchemaKeyref : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* refer; // 0x78

		::System::Xml::XmlQualifiedName* get_Refer()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_GET_REFER_OFFSET))(nullptr);
		}

		::System::Void set_Refer(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_SET_REFER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAKEYREF_.CTOR_OFFSET))(nullptr);
		}

	};
}

