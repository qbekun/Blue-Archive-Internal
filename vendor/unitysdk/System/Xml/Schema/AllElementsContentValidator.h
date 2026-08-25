#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A15E10)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x9A15F30)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET UNITYSDK_OFFSET(0x9A16090)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A160A0)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9A16130)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A16260)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x9A162B0)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x9A16750)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AllElementsContentValidator_TypeDefinitionIndex = 27989;

	class AllElementsContentValidator : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* elements; // 0x18
		::Il2CppArray<::System::Object*>* particles; // 0x20
		::System::Xml::Schema::BitSet* isRequired; // 0x28
		::System::Int32 countRequired; // 0x30

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaContentType* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddElement(::System::Xml::XmlQualifiedName* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_ADDELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsEmptiable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET))(nullptr);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_INITVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::ValidationState* arg, int32_t&* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* arg, ::System::Boolean arg, ::System::Xml::Schema::XmlSchemaSet* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

