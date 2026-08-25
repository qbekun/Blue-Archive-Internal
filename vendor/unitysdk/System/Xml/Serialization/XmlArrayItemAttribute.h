#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99DA170)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x99DA1D0)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x99DA230)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99DA240)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99DA250)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLESPECIFIED_OFFSET UNITYSDK_OFFSET(0x99DA260)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99DA270)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NESTINGLEVEL_OFFSET UNITYSDK_OFFSET(0x99DA280)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DA290)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttribute_TypeDefinitionIndex = 27880;

	class XmlArrayItemAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* dataType; // 0x10
		::System::String* elementName; // 0x18
		::System::Xml::Schema::XmlSchemaForm* form; // 0x20
		::System::String* ns; // 0x28
		::System::Boolean isNullable; // 0x30
		::System::Boolean isNullableSpecified; // 0x31
		::System::Int32 nestingLevel; // 0x34
		::System::Type* type; // 0x38

		::System::String* get_DataType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* get_Form()
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_FORM_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullableSpecified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_ISNULLABLESPECIFIED_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_NestingLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_GET_NESTINGLEVEL_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

