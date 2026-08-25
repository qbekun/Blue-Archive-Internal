#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29500)
#define SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A29510)
#define SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1E860)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_ENTITY_TypeDefinitionIndex = 28037;

	class Datatype_ENTITY : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENTITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

