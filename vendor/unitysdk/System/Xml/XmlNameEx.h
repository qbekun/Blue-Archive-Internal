#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNAMEEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A0AA0)
#define SYSTEM_XML_XMLNAMEEX_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x99A1090)
#define SYSTEM_XML_XMLNAMEEX_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x99A10C0)
#define SYSTEM_XML_XMLNAMEEX_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x99A10D0)
#define SYSTEM_XML_XMLNAMEEX_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x99A10E0)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x99A10F0)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x99A1100)
#define SYSTEM_XML_XMLNAMEEX_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A1170)
#define SYSTEM_XML_XMLNAMEEX_SETVALIDITY_OFFSET UNITYSDK_OFFSET(0x99A1040)
#define SYSTEM_XML_XMLNAMEEX_SETISDEFAULT_OFFSET UNITYSDK_OFFSET(0x99A1050)
#define SYSTEM_XML_XMLNAMEEX_SETISNIL_OFFSET UNITYSDK_OFFSET(0x99A1070)
#define SYSTEM_XML_XMLNAMEEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x99A11E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNameEx_TypeDefinitionIndex = 27770;

	class XmlNameEx : public Il2CppObject
	{
	public:
		::System::Byte flags; // 0x48
		::System::Xml::Schema::XmlSchemaSimpleType* memberType; // 0x50
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x58
		::System::Object* decl; // 0x60

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Xml::XmlDocument* arg, ::System::Xml::XmlName* arg, ::System::Xml::Schema::IXmlSchemaInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_.CTOR_OFFSET))(str, str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaValidity* get_Validity()
		{
			return (return (::System::Xml::Schema::XmlSchemaValidity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_VALIDITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNil()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_ISNIL_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_SCHEMAELEMENT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_GET_SCHEMAATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void SetValidity(::System::Xml::Schema::XmlSchemaValidity* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaValidity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETVALIDITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsDefault(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETISDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsNil(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_SETISNIL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Xml::Schema::IXmlSchemaInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::IXmlSchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEEX_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

