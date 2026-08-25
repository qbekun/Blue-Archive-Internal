#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_TIME_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27D70)
#define SYSTEM_XML_SCHEMA_DATATYPE_TIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1FBF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_time_TypeDefinitionIndex = 28016;

	class Datatype_time : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TIME_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TIME_.CTOR_OFFSET))(nullptr);
		}

	};
}

