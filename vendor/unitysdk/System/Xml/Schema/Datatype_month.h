#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_MONTH_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27DD0)
#define SYSTEM_XML_SCHEMA_DATATYPE_MONTH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F2C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_month_TypeDefinitionIndex = 28022;

	class Datatype_month : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTH_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTH_.CTOR_OFFSET))(nullptr);
		}

	};
}

