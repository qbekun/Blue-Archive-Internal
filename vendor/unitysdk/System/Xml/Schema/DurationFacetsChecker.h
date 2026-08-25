#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36980)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36A90)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A36EF0)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A36DF0)
#define SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DB70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DurationFacetsChecker_TypeDefinitionIndex = 28066;

	class DurationFacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::TimeSpan* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::TimeSpan*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::TimeSpan* arg, ::System::Collections::ArrayList* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DURATIONFACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

