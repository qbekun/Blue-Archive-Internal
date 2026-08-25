#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_GET_LANGUAGEPATTERN_OFFSET UNITYSDK_OFFSET(0x9A375E0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A376A0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A37710)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A28B20)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A37BD0)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9A37950)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKBUILTINFACETS_OFFSET UNITYSDK_OFFSET(0x9A37730)
#define SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DB40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StringFacetsChecker_TypeDefinitionIndex = 28068;

	class StringFacetsChecker : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Regex* languagePattern; // 0x0

		::System::Text::RegularExpressions::Regex* get_LanguagePattern()
		{
			return (return (::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_GET_LANGUAGEPATTERN_OFFSET))(nullptr);
		}

		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::String* str, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(str, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::System::String* str, ::System::Xml::Schema::XmlSchemaDatatype* arg, ::System::Boolean arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::String* str, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_MATCHENUMERATION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Exception* CheckBuiltInFacets(::System::String* str, ::System::Xml::Schema::XmlTypeCode* arg, ::System::Boolean arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::Schema::XmlTypeCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_CHECKBUILTINFACETS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STRINGFACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

