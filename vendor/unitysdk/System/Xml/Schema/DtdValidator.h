#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A2E300)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x9A2E3A0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9A2E680)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_MEETSSTANDALONECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9A2E9D0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEPICOMMENT_OFFSET UNITYSDK_OFFSET(0x9A2EA60)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9A2E8B0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATECHILDELEMENT_OFFSET UNITYSDK_OFFSET(0x9A2EE90)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9A2F130)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9A2FBD0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x9A2EFF0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A2FE00)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9A2ECD0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9A30060)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A300A0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x9A2F660)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_ADDID_OFFSET UNITYSDK_OFFSET(0x9A302E0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x9A30380)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_GENENTITY_OFFSET UNITYSDK_OFFSET(0x9A2EB10)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_GETENTITY_OFFSET UNITYSDK_OFFSET(0x9A303B0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x9A2FF10)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x9A2E520)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x9A2FE50)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x9A30450)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x9A30780)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A30B70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DtdValidator_TypeDefinitionIndex = 28060;

	class DtdValidator : public ::UnityEngine::Bindings::NotNullAttribute
	{
	public:
		NamespaceManager* namespaceManager; // 0x0
		::System::Xml::HWStack* validationStack; // 0x80
		::System::Collections::Hashtable* attPresence; // 0x88
		::System::Xml::XmlQualifiedName* name; // 0x90
		::System::Collections::Hashtable* IDs; // 0x98
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0xA0
		::System::Boolean processIdentityConstraints; // 0xA8

		::System::Void .ctor(::System::Xml::XmlValidatingReaderImpl* arg, ::System::Xml::IValidationEventHandling* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::IValidationEventHandling*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_INIT_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean MeetsStandAloneConstraint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_MEETSSTANDALONECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void ValidatePIComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEPICOMMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateChildElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATECHILDELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateStartElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATESTARTELEMENT_OFFSET))(nullptr);
		}

		::System::Void ValidateEndStartElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET))(nullptr);
		}

		::System::Void ProcessElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSELEMENT_OFFSET))(nullptr);
		}

		::System::Void CompleteValidation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_COMPLETEVALIDATION_OFFSET))(nullptr);
		}

		::System::Void ValidateEndElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlTokenizedType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckValue(::System::String* str, ::System::Xml::Schema::SchemaAttDef* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::SchemaAttDef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddID(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_ADDID_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FindId(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_FINDID_OFFSET))(str, nullptr);
		}

		::System::Boolean GenEntity(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_GENENTITY_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaEntity* GetEntity(::System::Xml::XmlQualifiedName* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::SchemaEntity*(*)(::System::Xml::XmlQualifiedName*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_GETENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckForwardRefs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKFORWARDREFS_OFFSET))(nullptr);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Pop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_POP_OFFSET))(nullptr);
		}

		::System::Void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* arg, ::System::Xml::IDtdParserAdapter* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckDefaultValue(::System::Xml::Schema::SchemaAttDef* arg, ::System::Xml::Schema::SchemaInfo* arg, ::System::Xml::IValidationEventHandling* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::IValidationEventHandling*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKDEFAULTVALUE_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

