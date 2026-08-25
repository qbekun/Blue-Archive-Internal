#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D8770)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D8A20)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x98D87F0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x98D8C60)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x98D8FA0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATECHILDELEMENT_OFFSET UNITYSDK_OFFSET(0x98D9350)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET UNITYSDK_OFFSET(0x98D8D20)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSINLINESCHEMA_OFFSET UNITYSDK_OFFSET(0x98D8D30)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x98D94B0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x98D9160)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98D95C0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x98D99E0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x98D9F90)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET UNITYSDK_OFFSET(0x98DAD20)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x98DAA30)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x98DB460)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x98DB480)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x98DB4C0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x98DB780)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x98DA390)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x98D48F0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_ADDID_OFFSET UNITYSDK_OFFSET(0x98DB6E0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x98DBAA0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x98D8AC0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x98DA980)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x98DB840)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98DAC50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrValidator_TypeDefinitionIndex = 28118;

	class XdrValidator : public ::UnityEngine::Bindings::NotNullAttribute
	{
	public:
		::System::Xml::HWStack* validationStack; // 0x80
		::System::Collections::Hashtable* attPresence; // 0x88
		::System::Xml::XmlQualifiedName* name; // 0x90
		::System::Xml::XmlNamespaceManager* nsManager; // 0x98
		::System::Boolean isProcessContents; // 0xA0
		::System::Collections::Hashtable* IDs; // 0xA8
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0xB0
		::System::Xml::Schema::Parser* inlineSchemaParser; // 0xB8

		::System::Void .ctor(::System::Xml::Schema::BaseValidator* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BaseValidator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlValidatingReaderImpl* arg, ::System::Xml::Schema::XmlSchemaCollection* arg, ::System::Xml::IValidationEventHandling* arg)
		{
			((::System::Void(*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_INIT_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void ValidateElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateChildElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATECHILDELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInlineSchemaStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET))(nullptr);
		}

		::System::Void ProcessInlineSchema()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSINLINESCHEMA_OFFSET))(nullptr);
		}

		::System::Void ProcessElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl()
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET))(nullptr);
		}

		::System::Void ValidateStartElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATESTARTELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateEndStartElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET))(nullptr);
		}

		::System::Void LoadSchemaFromLocation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET))(str, nullptr);
		}

		::System::Void LoadSchema(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMA_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasSchema()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_HASSCHEMA_OFFSET))(nullptr);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlTokenizedType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void CompleteValidation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_COMPLETEVALIDATION_OFFSET))(nullptr);
		}

		::System::Void CheckValue(::System::String* str, ::System::Xml::Schema::SchemaAttDef* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::SchemaAttDef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckDefaultValue(::System::String* str, ::System::Xml::Schema::SchemaAttDef* arg, ::System::Xml::Schema::SchemaInfo* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::Xml::XmlNameTable* arg, ::System::Object* arg, ::System::Xml::Schema::ValidationEventHandler* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlNameTable*, ::System::Object*, ::System::Xml::Schema::ValidationEventHandler*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKDEFAULTVALUE_OFFSET))(str, arg, arg, arg, arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddID(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_ADDID_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FindId(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_FINDID_OFFSET))(str, nullptr);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Pop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_POP_OFFSET))(nullptr);
		}

		::System::Void CheckForwardRefs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKFORWARDREFS_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* QualifiedName(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_QUALIFIEDNAME_OFFSET))(str, str, nullptr);
		}

	};
}

