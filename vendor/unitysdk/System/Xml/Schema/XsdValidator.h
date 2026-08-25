#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99366F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9936B60)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x9936720)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9936D20)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9937490)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET UNITYSDK_OFFSET(0x9936DE0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSINLINESCHEMA_OFFSET UNITYSDK_OFFSET(0x9936DF0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x99370E0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATECHILDELEMENT_OFFSET UNITYSDK_OFFSET(0x99375F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x9937850)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSXSIATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9937BB0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9937290)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_FASTGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x9937AF0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x9938540)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9938A40)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9939240)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET UNITYSDK_OFFSET(0x993B1C0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x9939760)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x99389D0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x993B7B0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x993B7F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x9939930)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDID_OFFSET UNITYSDK_OFFSET(0x993BA10)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x993BAB0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ISXSDROOT_OFFSET UNITYSDK_OFFSET(0x9937800)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x9936B90)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x993AD60)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x99374A0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x99389F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9939DF0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x993BAE0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x993BF90)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ATTRIBUTEIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x993AEB0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_UNWRAPUNION_OFFSET UNITYSDK_OFFSET(0x993AE40)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ENDELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9939E00)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x993C350)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdValidator_TypeDefinitionIndex = 28244;

	class XsdValidator : public ::UnityEngine::Bindings::NotNullAttribute
	{
	public:
		::System::Int32 startIDConstraint; // 0x80
		::System::Xml::HWStack* validationStack; // 0x88
		::System::Collections::Hashtable* attPresence; // 0x90
		::System::Xml::XmlNamespaceManager* nsManager; // 0x98
		::System::Boolean bManageNamespaces; // 0xA0
		::System::Collections::Hashtable* IDs; // 0xA8
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0xB0
		::System::Xml::Schema::Parser* inlineSchemaParser; // 0xB8
		::System::Xml::Schema::XmlSchemaContentProcessing* processContents; // 0xC0
		::System::Xml::Schema::XmlSchemaDatatype* dtCDATA; // 0x0
		::System::Xml::Schema::XmlSchemaDatatype* dtQName; // 0x8
		::System::Xml::Schema::XmlSchemaDatatype* dtStringArray; // 0x10
		::System::String* NsXmlNs; // 0xC8
		::System::String* NsXs; // 0xD0
		::System::String* NsXsi; // 0xD8
		::System::String* XsiType; // 0xE0
		::System::String* XsiNil; // 0xE8
		::System::String* XsiSchemaLocation; // 0xF0
		::System::String* XsiNoNamespaceSchemaLocation; // 0xF8
		::System::String* XsdSchema; // 0x100

		::System::Void .ctor(::System::Xml::Schema::BaseValidator* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BaseValidator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlValidatingReaderImpl* arg, ::System::Xml::Schema::XmlSchemaCollection* arg, ::System::Xml::IValidationEventHandling* arg)
		{
			((::System::Void(*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_INIT_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void CompleteValidation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_COMPLETEVALIDATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInlineSchemaStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET))(nullptr);
		}

		::System::Void ProcessInlineSchema()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSINLINESCHEMA_OFFSET))(nullptr);
		}

		::System::Void ValidateElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEELEMENT_OFFSET))(nullptr);
		}

		::System::Object* ValidateChildElement()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATECHILDELEMENT_OFFSET))(nullptr);
		}

		::System::Void ProcessElement(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessXsiAttributes(::System::Xml::XmlQualifiedName&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSXSIATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(::System::Object* arg)
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_FASTGETELEMENTDECL_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl(::System::Xml::Schema::SchemaElementDecl* arg, ::System::Xml::XmlQualifiedName* arg, ::System::String* str)
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ValidateStartElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateEndStartElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET))(nullptr);
		}

		::System::Void LoadSchemaFromLocation(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET))(str, str, nullptr);
		}

		::System::Void LoadSchema(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMA_OFFSET))(str, str, nullptr);
		}

		::System::Boolean get_HasSchema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASSCHEMA_OFFSET))(nullptr);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlTokenizedType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckValue(::System::String* str, ::System::Xml::Schema::SchemaAttDef* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::SchemaAttDef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddID(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDID_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FindId(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_FINDID_OFFSET))(str, nullptr);
		}

		::System::Boolean IsXSDRoot(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ISXSDROOT_OFFSET))(str, str, nullptr);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Pop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_POP_OFFSET))(nullptr);
		}

		::System::Void CheckForwardRefs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKFORWARDREFS_OFFSET))(nullptr);
		}

		::System::Void ValidateStartElementIdentityConstraints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENTIDENTITYCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasIdentityConstraints()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASIDENTITYCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void AddIdentityConstraints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDIDENTITYCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void ElementIdentityConstraints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ELEMENTIDENTITYCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void AttributeIdentityConstraints(::System::String* str, ::System::String* str, ::System::Object* arg, ::System::String* str, ::System::Xml::Schema::SchemaAttDef* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Object*, ::System::String*, ::System::Xml::Schema::SchemaAttDef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ATTRIBUTEIDENTITYCONSTRAINTS_OFFSET))(str, str, arg, str, arg, nullptr);
		}

		::System::Object* UnWrapUnion(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_UNWRAPUNION_OFFSET))(arg, nullptr);
		}

		::System::Void EndElementIdentityConstraints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ENDELEMENTIDENTITYCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

