#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9874970)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9874A90)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9874DA0)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9874C60)
#define SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9874EA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int QNameFacetsChecker_TypeDefinitionIndex = 28069;

	class QNameFacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Xml::XmlQualifiedName* arg, ::System::Collections::ArrayList* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_QNAMEFACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

