#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36F60)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36FD0)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A37570)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A373C0)
#define SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DB60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DateTimeFacetsChecker_TypeDefinitionIndex = 28067;

	class DateTimeFacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::DateTime* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::DateTime*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::DateTime* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATETIMEFACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

