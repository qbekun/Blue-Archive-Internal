#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A00700)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x9A007A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_ATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x9A007B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x9A007C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x9A007D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_FORM_OFFSET UNITYSDK_OFFSET(0x9A007E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A007F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A00800)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAttribute_TypeDefinitionIndex = 27929;

	class XmlTypeMapMemberAttribute : public Il2CppObject
	{
	public:
		::System::String* _attributeName; // 0x58
		::System::String* _namespace; // 0x60
		::System::Xml::Schema::XmlSchemaForm* _form; // 0x68
		::System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AttributeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_ATTRIBUTENAME_OFFSET))(nullptr);
		}

		::System::Void set_AttributeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_ATTRIBUTENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Void set_Form(::System::Xml::Schema::XmlSchemaForm* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaForm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_FORM_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlTypeMapping* get_MappedType()
		{
			return (return (::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_GET_MAPPEDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MappedType(::System::Xml::Serialization::XmlTypeMapping* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlTypeMapping*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE_SET_MAPPEDTYPE_OFFSET))(arg, nullptr);
		}

	};
}

