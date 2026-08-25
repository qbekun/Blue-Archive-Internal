#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98E6370)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98E6380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E6390)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E63A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E63B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_CANONICALPARTICLE_OFFSET UNITYSDK_OFFSET(0x98E63C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_CANONICALPARTICLE_OFFSET UNITYSDK_OFFSET(0x98E63D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98E63E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98E63F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_SELFREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0x98E6400)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_SELFREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0x98E6410)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6420)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6430)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E6440)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x98E6450)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x98DEE00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6460)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaGroup_TypeDefinitionIndex = 28167;

	class XmlSchemaGroup : public Il2CppObject
	{
	public:
		::System::String* name; // 0x50
		::System::Xml::Schema::XmlSchemaGroupBase* particle; // 0x58
		::System::Xml::Schema::XmlSchemaParticle* canonicalParticle; // 0x60
		::System::Xml::XmlQualifiedName* qname; // 0x68
		::System::Xml::Schema::XmlSchemaGroup* redefined; // 0x70
		::System::Int32 selfReferenceCount; // 0x78

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaGroupBase* get_Particle()
		{
			return (return (::System::Xml::Schema::XmlSchemaGroupBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_PARTICLE_OFFSET))(nullptr);
		}

		::System::Void set_Particle(::System::Xml::Schema::XmlSchemaGroupBase* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_PARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaParticle* get_CanonicalParticle()
		{
			return (return (::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_CANONICALPARTICLE_OFFSET))(nullptr);
		}

		::System::Void set_CanonicalParticle(::System::Xml::Schema::XmlSchemaParticle* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_CANONICALPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaGroup* get_Redefined()
		{
			return (return (::System::Xml::Schema::XmlSchemaGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_REDEFINED_OFFSET))(nullptr);
		}

		::System::Void set_Redefined(::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_REDEFINED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SelfReferenceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_SELFREFERENCECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SelfReferenceCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_SELFREFERENCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_SETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone(::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

