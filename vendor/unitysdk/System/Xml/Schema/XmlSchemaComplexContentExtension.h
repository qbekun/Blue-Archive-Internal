#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98E1E30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98E1E40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E1EF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E1F00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E1F10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E1F20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E1F30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E1F40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E1F50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaComplexContentExtension_TypeDefinitionIndex = 28138;

	class XmlSchemaComplexContentExtension : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaParticle* particle; // 0x50
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x58
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x60
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x68

		::System::Xml::XmlQualifiedName* get_BaseTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_BASETYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SET_BASETYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaParticle* get_Particle()
		{
			return (return (::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_PARTICLE_OFFSET))(nullptr);
		}

		::System::Void set_Particle(::System::Xml::Schema::XmlSchemaParticle* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SET_PARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_GET_ANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SET_ANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_SETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENTEXTENSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

