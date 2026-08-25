#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DE680)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DE6C0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99DE710)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x99DE770)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x99DE7D0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99DE7E0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x99DE7F0)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x99DE800)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99DE810)
#define SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DE820)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlElementAttribute_TypeDefinitionIndex = 27887;

	class XmlElementAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* dataType; // 0x10
		::System::String* elementName; // 0x18
		::System::Xml::Schema::XmlSchemaForm* form; // 0x20
		::System::String* ns; // 0x28
		::System::Boolean isNullable; // 0x30
		::System::Type* type; // 0x38
		::System::Int32 order; // 0x40

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_DataType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::String* get_ElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* get_Form()
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_FORM_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLELEMENTATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

