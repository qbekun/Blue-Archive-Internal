#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2C7E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1E6A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_doubleXdr_TypeDefinitionIndex = 28052;

	class Datatype_doubleXdr : public Il2CppObject
	{
	public:
		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_DOUBLEXDR_.CTOR_OFFSET))(nullptr);
		}

	};
}

