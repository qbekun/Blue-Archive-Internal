#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_GET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E64D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E3B80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E64E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SETPARTICLE_OFFSET UNITYSDK_OFFSET(0x98E64F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_GET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98E6500)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98E6510)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6530)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaGroupRef_TypeDefinitionIndex = 28169;

	class XmlSchemaGroupRef : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* refName; // 0x78
		::System::Xml::Schema::XmlSchemaGroupBase* particle; // 0x80
		::System::Xml::Schema::XmlSchemaGroup* refined; // 0x88

		::System::Xml::XmlQualifiedName* get_RefName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_GET_REFNAME_OFFSET))(nullptr);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SET_REFNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaGroupBase* get_Particle()
		{
			return (return (::System::Xml::Schema::XmlSchemaGroupBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_GET_PARTICLE_OFFSET))(nullptr);
		}

		::System::Void SetParticle(::System::Xml::Schema::XmlSchemaGroupBase* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SETPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaGroup* get_Redefined()
		{
			return (return (::System::Xml::Schema::XmlSchemaGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_GET_REDEFINED_OFFSET))(nullptr);
		}

		::System::Void set_Redefined(::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_SET_REDEFINED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPREF_.CTOR_OFFSET))(nullptr);
		}

	};
}

