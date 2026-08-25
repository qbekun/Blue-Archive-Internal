#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A13810)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A13D90)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9A13DF0)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A13F20)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x9A13F40)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x9A14120)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DfaContentValidator_TypeDefinitionIndex = 27985;

	class DfaContentValidator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* transitionTable; // 0x18
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::XmlSchemaContentType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::XmlSchemaContentType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_INITVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::ValidationState* arg, int32_t&* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg, ::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

