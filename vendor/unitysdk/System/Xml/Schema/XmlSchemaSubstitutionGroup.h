#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x98F3D60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_GET_EXAMPLAR_OFFSET UNITYSDK_OFFSET(0x98F3D70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_SET_EXAMPLAR_OFFSET UNITYSDK_OFFSET(0x98F3D80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3D90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSubstitutionGroup_TypeDefinitionIndex = 28202;

	class XmlSchemaSubstitutionGroup : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* membersList; // 0x38
		::System::Xml::XmlQualifiedName* examplar; // 0x40

		::System::Collections::ArrayList* get_Members()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_GET_MEMBERS_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_Examplar()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_GET_EXAMPLAR_OFFSET))(nullptr);
		}

		::System::Void set_Examplar(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_SET_EXAMPLAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASUBSTITUTIONGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

