#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A294C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A294D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1EF40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_ID_TypeDefinitionIndex = 28035;

	class Datatype_ID : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ID_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ID_.CTOR_OFFSET))(nullptr);
		}

	};
}

