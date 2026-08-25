#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_UNIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x98755E0)
#define SYSTEM_XML_SCHEMA_UNIONFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x98756C0)
#define SYSTEM_XML_SCHEMA_UNIONFACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9875780)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int UnionFacetsChecker_TypeDefinitionIndex = 28073;

	class UnionFacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UNIONFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UNIONFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UNIONFACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

