#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2CAB0)
#define SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1ED80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_floatXdr_TypeDefinitionIndex = 28053;

	class Datatype_floatXdr : public Il2CppObject
	{
	public:
		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FLOATXDR_.CTOR_OFFSET))(nullptr);
		}

	};
}

