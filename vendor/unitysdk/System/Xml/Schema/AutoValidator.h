#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A07190)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9A07310)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9A07320)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A07810)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x9A07820)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_DETECTVALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9A07410)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AutoValidator_TypeDefinitionIndex = 27954;

	class AutoValidator : public ::UnityEngine::Bindings::NotNullAttribute
	{
	public:
		::System::Void .ctor(::System::Xml::XmlValidatingReaderImpl* arg, ::System::Xml::Schema::XmlSchemaCollection* arg, ::System::Xml::IValidationEventHandling* arg)
		{
			((::System::Void(*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void CompleteValidation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_COMPLETEVALIDATION_OFFSET))(nullptr);
		}

		::System::Object* FindId(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_FINDID_OFFSET))(str, nullptr);
		}

		::System::Xml::ValidationType* DetectValidationType()
		{
			return (return (::System::Xml::ValidationType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_DETECTVALIDATIONTYPE_OFFSET))(nullptr);
		}

	};
}

