#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x99D9FB0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x99DA010)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99DA020)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99DA030)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x99DA040)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DA050)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayAttribute_TypeDefinitionIndex = 27879;

	class XmlArrayAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* elementName; // 0x10
		::System::Xml::Schema::XmlSchemaForm* form; // 0x18
		::System::Boolean isNullable; // 0x1C
		::System::String* ns; // 0x20
		::System::Int32 order; // 0x28

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* get_Form()
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_FORM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

