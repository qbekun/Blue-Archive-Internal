#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A2D1D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A2D220)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x9A2D270)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A2D280)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2D310)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A2D520)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1DEF0)
#define SYSTEM_XML_SCHEMA_DATATYPE_CHAR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A2D5D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_char_TypeDefinitionIndex = 28056;

	class Datatype_char : public Il2CppObject
	{
	public:
		::System::Type* atomicValueType; // 0x0
		::System::Type* listValueType; // 0x8

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_TRYPARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_CHAR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

