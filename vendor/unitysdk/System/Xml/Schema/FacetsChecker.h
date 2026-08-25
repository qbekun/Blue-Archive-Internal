#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKLEXICALFACETS_OFFSET UNITYSDK_OFFSET(0x9A30C10)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30E90)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30EA0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30EB0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30EC0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30ED0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30EE0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30EF0)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30F00)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30F10)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30F20)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30F30)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30F40)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKWHITESPACEFACETS_OFFSET UNITYSDK_OFFSET(0x9A30C50)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKPATTERNFACETS_OFFSET UNITYSDK_OFFSET(0x9A30D40)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A30F50)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_CONSTRUCTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x9A30F60)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_POWER_OFFSET UNITYSDK_OFFSET(0x9A34270)
#define SYSTEM_XML_SCHEMA_FACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A343B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int FacetsChecker_TypeDefinitionIndex = 28063;

	class FacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckLexicalFacets(::System::String&* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::String&*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKLEXICALFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Decimal* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Decimal*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Int64 arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Int64, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Int32 arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Int32, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Int16 arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Int16, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::DateTime* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::DateTime*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Double arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Double, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Single arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Single, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::String* str, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(str, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::TimeSpan* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::TimeSpan*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckWhitespaceFacets(::System::String&* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			((::System::Void(*)(::System::String&*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKWHITESPACEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckPatternFacets(::System::Xml::Schema::RestrictionFacets* arg, ::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::Xml::Schema::RestrictionFacets*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CHECKPATTERNFACETS_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::RestrictionFacets* ConstructRestriction(::System::Xml::Schema::DatatypeImplementation* arg, ::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::XmlNameTable* arg)
		{
			return (return (::System::Xml::Schema::RestrictionFacets*(*)(::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_CONSTRUCTRESTRICTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Decimal* Power(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Decimal*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_POWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

