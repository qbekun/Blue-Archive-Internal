#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_FIXED_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2D6A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_FIXED_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2DD00)
#define SYSTEM_XML_SCHEMA_DATATYPE_FIXED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1EBC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_fixed_TypeDefinitionIndex = 28057;

	class Datatype_fixed : public Il2CppObject
	{
	public:
		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FIXED_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FIXED_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_FIXED_.CTOR_OFFSET))(nullptr);
		}

	};
}

