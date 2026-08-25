#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A089E0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A07220)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_READER_OFFSET UNITYSDK_OFFSET(0x9A08AB0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMACOLLECTION_OFFSET UNITYSDK_OFFSET(0x9A08AC0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x9A08AD0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x9A07830)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0x9A08AE0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9A08AF0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9A08B00)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x9A08B10)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x9A08B20)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9A08B30)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x9A08C00)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x9A08C10)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9A08CF0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9A08D00)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A08D10)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x9A08D20)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATETEXT_OFFSET UNITYSDK_OFFSET(0x9A08D30)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9A09280)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SAVETEXTVALUE_OFFSET UNITYSDK_OFFSET(0x9A09210)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A093F0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A09120)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A09030)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A09440)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A09520)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A09610)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A09450)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x9A09700)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x9A098E0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A09AF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int BaseValidator_TypeDefinitionIndex = 27956;

	class BaseValidator : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaCollection* schemaCollection; // 0x10
		::System::Xml::IValidationEventHandling* eventHandling; // 0x18
		::System::Xml::XmlNameTable* nameTable; // 0x20
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x28
		::System::Xml::PositionInfo* positionInfo; // 0x30
		::System::Xml::XmlResolver* xmlResolver; // 0x38
		::System::Uri* baseUri; // 0x40
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x48
		::System::Xml::XmlValidatingReaderImpl* reader; // 0x50
		::System::Xml::XmlQualifiedName* elementName; // 0x58
		::System::Xml::Schema::ValidationState* context; // 0x60
		::System::Text::StringBuilder* textValue; // 0x68
		::System::String* textString; // 0x70
		::System::Boolean hasSibling; // 0x78
		::System::Boolean checkDatatype; // 0x79

		::System::Void .ctor(::System::Xml::Schema::BaseValidator* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BaseValidator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlValidatingReaderImpl* arg, ::System::Xml::Schema::XmlSchemaCollection* arg, ::System::Xml::IValidationEventHandling* arg)
		{
			((::System::Void(*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::XmlValidatingReaderImpl* get_Reader()
		{
			return (return (::System::Xml::XmlValidatingReaderImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_READER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaCollection* get_SchemaCollection()
		{
			return (return (::System::Xml::Schema::XmlSchemaCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMACOLLECTION_OFFSET))(nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaNames* get_SchemaNames()
		{
			return (return (::System::Xml::Schema::SchemaNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMANAMES_OFFSET))(nullptr);
		}

		::System::Xml::PositionInfo* get_PositionInfo()
		{
			return (return (::System::Xml::PositionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_POSITIONINFO_OFFSET))(nullptr);
		}

		::System::Xml::XmlResolver* get_XmlResolver()
		{
			return (return (::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_XMLRESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_XMLRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_BaseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Void set_BaseUri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_BASEURI_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::ValidationEventHandler* get_EventHandler()
		{
			return (return (::System::Xml::Schema::ValidationEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaInfo* get_SchemaInfo()
		{
			return (return (::System::Xml::Schema::SchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMAINFO_OFFSET))(nullptr);
		}

		::System::Void set_DtdInfo(::System::Xml::IDtdInfo* arg)
		{
			((::System::Void(*)(::System::Xml::IDtdInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_DTDINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void CompleteValidation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_COMPLETEVALIDATION_OFFSET))(nullptr);
		}

		::System::Object* FindId(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_FINDID_OFFSET))(str, nullptr);
		}

		::System::Void ValidateText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATETEXT_OFFSET))(nullptr);
		}

		::System::Void ValidateWhitespace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void SaveTextValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SAVETEXTVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(str, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(str, str, nullptr);
		}

		::System::Void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessEntity(::System::Xml::Schema::SchemaInfo* arg, ::System::String* str, ::System::Object* arg, ::System::Xml::Schema::ValidationEventHandler* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::System::String*, ::System::Object*, ::System::Xml::Schema::ValidationEventHandler*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_OFFSET))(arg, str, arg, arg, str, arg, arg, nullptr);
		}

		::System::Void ProcessEntity(::System::Xml::Schema::SchemaInfo* arg, ::System::String* str, ::System::Xml::IValidationEventHandling* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::System::String*, ::System::Xml::IValidationEventHandling*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_OFFSET))(arg, str, arg, str, arg, arg, nullptr);
		}

		::System::Xml::Schema::BaseValidator* CreateInstance(::System::Xml::ValidationType* arg, ::System::Xml::XmlValidatingReaderImpl* arg, ::System::Xml::Schema::XmlSchemaCollection* arg, ::System::Xml::IValidationEventHandling* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::BaseValidator*(*)(::System::Xml::ValidationType*, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_CREATEINSTANCE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

