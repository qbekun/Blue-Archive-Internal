#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29360)
#define SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A29370)
#define SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F6B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_NMTOKEN_TypeDefinitionIndex = 28032;

	class Datatype_NMTOKEN : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NMTOKEN_.CTOR_OFFSET))(nullptr);
		}

	};
}

