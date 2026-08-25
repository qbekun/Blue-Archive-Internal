#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29C80)
#define SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A29C90)
#define SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F0F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_integer_TypeDefinitionIndex = 28039;

	class Datatype_integer : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_INTEGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

