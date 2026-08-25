#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DAY_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27DC0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1E420)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_day_TypeDefinitionIndex = 28021;

	class Datatype_day : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DAY_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DAY_.CTOR_OFFSET))(nullptr);
		}

	};
}

