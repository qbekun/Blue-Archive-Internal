#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTH_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27D90)
#define SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20430)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_yearMonth_TypeDefinitionIndex = 28018;

	class Datatype_yearMonth : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTH_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_YEARMONTH_.CTOR_OFFSET))(nullptr);
		}

	};
}

