#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x999F510)
#define SYSTEM_XML_XMLNOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99AAB10)
#define SYSTEM_XML_XMLNOTATION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99AAB20)
#define SYSTEM_XML_XMLNOTATION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99AAB30)
#define SYSTEM_XML_XMLNOTATION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99AAB40)
#define SYSTEM_XML_XMLNOTATION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x99AABB0)
#define SYSTEM_XML_XMLNOTATION_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x99AABC0)
#define SYSTEM_XML_XMLNOTATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x99AAC30)
#define SYSTEM_XML_XMLNOTATION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x99AAC40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNotation_TypeDefinitionIndex = 27781;

	class XmlNotation : public Il2CppObject
	{
	public:
		::System::String* publicId; // 0x18
		::System::String* systemId; // 0x20
		::System::String* name; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void set_InnerXml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_SET_INNERXML_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNOTATION_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

	};
}

