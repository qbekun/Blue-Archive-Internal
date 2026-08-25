#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_GET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E0E10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E0E20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E0ED0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAttributeGroupRef_TypeDefinitionIndex = 28131;

	class XmlSchemaAttributeGroupRef : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* refName; // 0x50

		::System::Xml::XmlQualifiedName* get_RefName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_GET_REFNAME_OFFSET))(nullptr);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_SET_REFNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUPREF_.CTOR_OFFSET))(nullptr);
		}

	};
}

