#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9874EC0)
#define SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_CHECKVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9874F40)
#define SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x9875230)
#define SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_MATCHENUMERATION_OFFSET UNITYSDK_OFFSET(0x98750F0)
#define SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x98752A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int BinaryFacetsChecker_TypeDefinitionIndex = 28071;

	class BinaryFacetsChecker : public Il2CppObject
	{
	public:
		::System::Exception* CheckValueFacets(::System::Object* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* CheckValueFacets(::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Exception*(*)(::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_CHECKVALUEFACETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::System::Object* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchEnumeration(::Il2CppArray<::System::Object*>* arg, ::System::Collections::ArrayList* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_MATCHENUMERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BINARYFACETSCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

