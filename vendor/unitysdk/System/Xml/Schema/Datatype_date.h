#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DATE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27D80)
#define SYSTEM_XML_SCHEMA_DATATYPE_DATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DFA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_date_TypeDefinitionIndex = 28017;

	class Datatype_date : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATE_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

