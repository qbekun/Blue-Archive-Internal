#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A27DB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F3E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_monthDay_TypeDefinitionIndex = 28020;

	class Datatype_monthDay : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_MONTHDAY_.CTOR_OFFSET))(nullptr);
		}

	};
}

