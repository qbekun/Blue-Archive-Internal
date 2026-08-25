#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A16C30)
#define SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x9A16C80)
#define SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x9A16C90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdSimpleValue_TypeDefinitionIndex = 27991;

	class XsdSimpleValue : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaSimpleType* xmlType; // 0x10
		::System::Object* typedValue; // 0x18

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaSimpleType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_XmlType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_XMLTYPE_OFFSET))(nullptr);
		}

		::System::Object* get_TypedValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDSIMPLEVALUE_GET_TYPEDVALUE_OFFSET))(nullptr);
		}

	};
}

