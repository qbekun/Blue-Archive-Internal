#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98E0710)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98E0720)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E0730)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E0740)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E0750)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E0760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTEUSES_OFFSET UNITYSDK_OFFSET(0x98E0770)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTEWILDCARD_OFFSET UNITYSDK_OFFSET(0x98E07E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_ATTRIBUTEWILDCARD_OFFSET UNITYSDK_OFFSET(0x98E07F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_REDEFINEDATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x98E0800)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98E0810)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_REDEFINED_OFFSET UNITYSDK_OFFSET(0x98E0820)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_SELFREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0x98E0830)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_SELFREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0x98E0840)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E0850)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E0860)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E0870)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_CLONE_OFFSET UNITYSDK_OFFSET(0x98E0880)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E0D60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAttributeGroup_TypeDefinitionIndex = 28130;

	class XmlSchemaAttributeGroup : public Il2CppObject
	{
	public:
		::System::String* name; // 0x50
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x58
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x60
		::System::Xml::XmlQualifiedName* qname; // 0x68
		::System::Xml::Schema::XmlSchemaAttributeGroup* redefined; // 0x70
		::System::Xml::Schema::XmlSchemaObjectTable* attributeUses; // 0x78
		::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard; // 0x80
		::System::Int32 selfReferenceCount; // 0x88

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_ANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTEUSES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_ATTRIBUTEWILDCARD_OFFSET))(nullptr);
		}

		::System::Void set_AttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_ATTRIBUTEWILDCARD_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttributeGroup* get_RedefinedAttributeGroup()
		{
			return (return (::System::Xml::Schema::XmlSchemaAttributeGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_REDEFINEDATTRIBUTEGROUP_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttributeGroup* get_Redefined()
		{
			return (return (::System::Xml::Schema::XmlSchemaAttributeGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_REDEFINED_OFFSET))(nullptr);
		}

		::System::Void set_Redefined(::System::Xml::Schema::XmlSchemaAttributeGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_REDEFINED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SelfReferenceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_SELFREFERENCECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SelfReferenceCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_SELFREFERENCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_SETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTEGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

