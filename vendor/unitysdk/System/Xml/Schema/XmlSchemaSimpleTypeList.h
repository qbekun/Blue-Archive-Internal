#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_ITEMTYPENAME_OFFSET UNITYSDK_OFFSET(0x98F36B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPENAME_OFFSET UNITYSDK_OFFSET(0x98F36C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x98F3770)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x98F3780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_BASEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x98F3790)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_BASEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x98F37A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_CLONE_OFFSET UNITYSDK_OFFSET(0x98F37B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3850)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeList_TypeDefinitionIndex = 28199;

	class XmlSchemaSimpleTypeList : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* itemTypeName; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* itemType; // 0x58
		::System::Xml::Schema::XmlSchemaSimpleType* baseItemType; // 0x60

		::System::Xml::XmlQualifiedName* get_ItemTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_ITEMTYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_ItemTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_ItemType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_ITEMTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ItemType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_BaseItemType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_BASEITEMTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BaseItemType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_BASEITEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

