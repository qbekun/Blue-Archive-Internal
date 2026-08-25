#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A29DE0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29E30)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A29E40)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F770)
#define SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A29E50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_nonPositiveInteger_TypeDefinitionIndex = 28040;

	class Datatype_nonPositiveInteger : public Il2CppObject
	{
	public:
		::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker; // 0x0

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValueFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_GET_HASVALUEFACETS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NONPOSITIVEINTEGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

