#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29300)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A29310)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20550)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_normalizedStringV1Compat_TypeDefinitionIndex = 28028;

	class Datatype_normalizedStringV1Compat : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValueFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_GET_HASVALUEFACETS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRINGV1COMPAT_.CTOR_OFFSET))(nullptr);
		}

	};
}

