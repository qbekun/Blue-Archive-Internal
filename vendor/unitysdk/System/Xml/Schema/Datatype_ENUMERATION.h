#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A2D1C0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1EB10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_ENUMERATION_TypeDefinitionIndex = 28055;

	class Datatype_ENUMERATION : public Il2CppObject
	{
	public:
		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ENUMERATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

