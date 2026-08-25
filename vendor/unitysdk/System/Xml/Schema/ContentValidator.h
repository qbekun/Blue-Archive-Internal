#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A10250)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A10270)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9A102B0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9A102C0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET UNITYSDK_OFFSET(0x9A102E0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9A102F0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x9A10300)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A10310)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9A10320)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A10350)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x9A10360)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x9A10370)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_OFFSET UNITYSDK_OFFSET(0x9A10380)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_OFFSET UNITYSDK_OFFSET(0x9A103E0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A10650)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ContentValidator_TypeDefinitionIndex = 27983;

	class ContentValidator : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaContentType* contentType; // 0x10
		::System::Boolean isOpen; // 0x14
		::System::Boolean isEmptiable; // 0x15
		::System::Xml::Schema::ContentValidator* Empty; // 0x0
		::System::Xml::Schema::ContentValidator* TextOnly; // 0x8
		::System::Xml::Schema::ContentValidator* Mixed; // 0x10
		::System::Xml::Schema::ContentValidator* Any; // 0x18

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaContentType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaContentType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentType* get_ContentType()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmptiable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_INITVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::ValidationState* arg, int32_t&* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg, ::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* arg, ::System::Xml::Schema::XmlSchemaSet* arg, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* arg, ::System::Xml::Schema::XmlSchemaSet* arg, ::System::Collections::ArrayList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Collections::ArrayList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

