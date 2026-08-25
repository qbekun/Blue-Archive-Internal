#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A2CD80)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2CD90)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A2D050)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A2D0A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F9E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A2D0F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_QNameXdr_TypeDefinitionIndex = 28054;

	class Datatype_QNameXdr : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_QNAMEXDR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

