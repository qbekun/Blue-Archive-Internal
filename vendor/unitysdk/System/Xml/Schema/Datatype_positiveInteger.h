#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A2C670)
#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A2C6C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F8E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A2C6D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_positiveInteger_TypeDefinitionIndex = 28051;

	class Datatype_positiveInteger : public Il2CppObject
	{
	public:
		::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker; // 0x0

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_POSITIVEINTEGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

