#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99DA660)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x99DA690)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99DA6F0)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x99DA750)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x99DA760)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x99DA770)
#define SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DA780)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlAttributeAttribute_TypeDefinitionIndex = 27882;

	class XmlAttributeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* attributeName; // 0x10
		::System::String* dataType; // 0x18
		::System::Type* type; // 0x20
		::System::Xml::Schema::XmlSchemaForm* form; // 0x28
		::System::String* ns; // 0x30

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_AttributeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_ATTRIBUTENAME_OFFSET))(nullptr);
		}

		::System::String* get_DataType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Void set_DataType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_SET_DATATYPE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* get_Form()
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_FORM_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLATTRIBUTEATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

