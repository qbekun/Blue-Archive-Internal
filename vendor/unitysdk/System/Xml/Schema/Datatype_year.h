#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_YEAR_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27DA0)
#define SYSTEM_XML_SCHEMA_DATATYPE_YEAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20310)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_year_TypeDefinitionIndex = 28019;

	class Datatype_year : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEAR_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEAR_.CTOR_OFFSET))(nullptr);
		}

	};
}

