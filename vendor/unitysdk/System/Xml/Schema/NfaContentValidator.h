#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A14320)
#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A14410)
#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9A14540)
#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A14720)
#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x9A14770)
#define SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x9A14970)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NfaContentValidator_TypeDefinitionIndex = 27986;

	class NfaContentValidator : public Il2CppObject
	{
	public:
		::System::Xml::Schema::BitSet* firstpos; // 0x18
		::Il2CppArray<::System::Object*>* followpos; // 0x20
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x28
		::System::Xml::Schema::Positions* positions; // 0x30
		::System::Int32 endMarkerPos; // 0x38

		::System::Void .ctor(::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg, ::System::Int32 arg, ::System::Xml::Schema::XmlSchemaContentType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::System::Int32, ::System::Xml::Schema::XmlSchemaContentType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_INITVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::ValidationState* arg, int32_t&* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg, ::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NFACONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

