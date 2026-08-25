#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUPV1COMPAT_GET_CHOICE_OFFSET UNITYSDK_OFFSET(0x98F3E40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUPV1COMPAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3E50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSubstitutionGroupV1Compat_TypeDefinitionIndex = 28203;

	class XmlSchemaSubstitutionGroupV1Compat : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaChoice* choice; // 0x48

		::System::Xml::Schema::XmlSchemaChoice* get_Choice()
		{
			return (return (::System::Xml::Schema::XmlSchemaChoice*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUPV1COMPAT_GET_CHOICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUPV1COMPAT_.CTOR_OFFSET))(nullptr);
		}

	};
}

