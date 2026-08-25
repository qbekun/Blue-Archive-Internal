#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A26CF0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A35800)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A35880)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A360D0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A36150)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A361D0)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A36250)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A35F80)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKTOTALANDFRACTIONDIGITS_OFFSET UNITYSDK_OFFSET(0x9A2D970)
#define SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A362E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Numeric10FacetsChecker_TypeDefinitionIndex = 28064;

	class Numeric10FacetsChecker : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* signs; // 0x0
		::System::Decimal* maxValue; // 0x10
		::System::Decimal* minValue; // 0x20

		::System::Void .ctor(::System::Decimal* arg, ::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Decimal* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Decimal*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Int64 arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Int64, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Int32 arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Int32, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Int16 arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Int16, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Decimal* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlValueConverter* arg)
		{
			return (return (::System::Boolean(*)(::System::Decimal*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlValueConverter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Exception* CheckTotalAndFractionDigits(::System::Decimal* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Exception*(*)(::System::Decimal*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_CHECKTOTALANDFRACTIONDIGITS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NUMERIC10FACETSCHECKER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

