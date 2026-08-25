#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6920)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6A10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x98E6A90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x98E6AA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x98E6AB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x98E6AC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x98E6AD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_ISNIL_OFFSET UNITYSDK_OFFSET(0x98E6AE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x98E6AF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x98E6B00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E6B10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E6B20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x98E6B60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x98E6B70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6BC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6BD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x98E6C20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x98E6C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_HASDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x98E6C40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISUNIONTYPE_OFFSET UNITYSDK_OFFSET(0x98E6C80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x98E69A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInfo_TypeDefinitionIndex = 28177;

	class XmlSchemaInfo : public Il2CppObject
	{
	public:
		::System::Boolean isDefault; // 0x10
		::System::Boolean isNil; // 0x11
		::System::Xml::Schema::XmlSchemaElement* schemaElement; // 0x18
		::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute; // 0x20
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x28
		::System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x30
		::System::Xml::Schema::XmlSchemaValidity* validity; // 0x38
		::System::Xml::Schema::XmlSchemaContentType* contentType; // 0x3C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaValidity* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaValidity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaValidity* get_Validity()
		{
			return (return (::System::Xml::Schema::XmlSchemaValidity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_VALIDITY_OFFSET))(nullptr);
		}

		::System::Void set_Validity(::System::Xml::Schema::XmlSchemaValidity* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaValidity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_VALIDITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Void set_IsDefault(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_ISDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Void set_IsNil(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_ISNIL_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MemberType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_MEMBERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_SchemaElement(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_SET_SCHEMAATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentType* get_ContentType()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasDefaultValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_HASDEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnionType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_GET_ISUNIONTYPE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFO_CLEAR_OFFSET))(nullptr);
		}

	};
}

