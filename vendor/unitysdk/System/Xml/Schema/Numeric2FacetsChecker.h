#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36370)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A363E0)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36830)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A36850)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A36760)
#define SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DB50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Numeric2FacetsChecker_TypeDefinitionIndex = 28065;

	class Numeric2FacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Double arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Double, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Single arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Single, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Double arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlValueConverter* arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC2FACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

