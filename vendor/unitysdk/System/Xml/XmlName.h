#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x99A08A0)
#define SYSTEM_XML_XMLNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A09F0)
#define SYSTEM_XML_XMLNAME_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99A0F00)
#define SYSTEM_XML_XMLNAME_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x99A0F10)
#define SYSTEM_XML_XMLNAME_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x99A0F20)
#define SYSTEM_XML_XMLNAME_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x99A0F30)
#define SYSTEM_XML_XMLNAME_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x99A0F40)
#define SYSTEM_XML_XMLNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99988B0)
#define SYSTEM_XML_XMLNAME_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x99A0F50)
#define SYSTEM_XML_XMLNAME_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x99A0F60)
#define SYSTEM_XML_XMLNAME_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x99A0F70)
#define SYSTEM_XML_XMLNAME_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x99A0F80)
#define SYSTEM_XML_XMLNAME_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x99A0F90)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x99A0FA0)
#define SYSTEM_XML_XMLNAME_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A0FB0)
#define SYSTEM_XML_XMLNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x99A0FC0)
#define SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99A0FD0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlName_TypeDefinitionIndex = 27769;

	class XmlName : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* localName; // 0x18
		::System::String* ns; // 0x20
		::System::String* name; // 0x28
		::System::Int32 hashCode; // 0x30
		::System::Xml::XmlDocument* ownerDoc; // 0x38
		::System::Xml::XmlName* next; // 0x40

		::System::Xml::XmlName* Create(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Xml::XmlDocument* arg, ::System::Xml::XmlName* arg, ::System::Xml::Schema::IXmlSchemaInfo* arg)
		{
			return (return (::System::Xml::XmlName*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_CREATE_OFFSET))(str, str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Xml::XmlDocument* arg, ::System::Xml::XmlName* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_.CTOR_OFFSET))(str, str, str, arg, arg, arg, nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Int32 get_HashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_HASHCODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return (return (::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_OWNERDOCUMENT_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaValidity* get_Validity()
		{
			return (return (::System::Xml::Schema::XmlSchemaValidity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_VALIDITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_SCHEMAELEMENT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GET_SCHEMAATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Xml::Schema::IXmlSchemaInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::IXmlSchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAME_GETHASHCODE_OFFSET))(str, nullptr);
		}

	};
}

