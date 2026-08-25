#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x999A120)
#define SYSTEM_XML_XMLENTITY_CLONENODE_OFFSET UNITYSDK_OFFSET(0x999A290)
#define SYSTEM_XML_XMLENTITY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x999A300)
#define SYSTEM_XML_XMLENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x999A310)
#define SYSTEM_XML_XMLENTITY_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x999A320)
#define SYSTEM_XML_XMLENTITY_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x999A330)
#define SYSTEM_XML_XMLENTITY_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x999A340)
#define SYSTEM_XML_XMLENTITY_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x999A3B0)
#define SYSTEM_XML_XMLENTITY_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x999A3C0)
#define SYSTEM_XML_XMLENTITY_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x999A540)
#define SYSTEM_XML_XMLENTITY_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x999A550)
#define SYSTEM_XML_XMLENTITY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x999A570)
#define SYSTEM_XML_XMLENTITY_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x999A580)
#define SYSTEM_XML_XMLENTITY_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x999A590)
#define SYSTEM_XML_XMLENTITY_WRITETO_OFFSET UNITYSDK_OFFSET(0x999A600)
#define SYSTEM_XML_XMLENTITY_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x999A610)
#define SYSTEM_XML_XMLENTITY_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x999A620)
#define SYSTEM_XML_XMLENTITY_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x999A630)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEntity_TypeDefinitionIndex = 27763;

	class XmlEntity : public Il2CppObject
	{
	public:
		::System::String* publicId; // 0x18
		::System::String* systemId; // 0x20
		::System::String* notationName; // 0x28
		::System::String* name; // 0x30
		::System::String* unparsedReplacementStr; // 0x38
		::System::String* baseURI; // 0x40
		::System::Xml::XmlLinkedNode* lastChild; // 0x48
		::System::Boolean childrenFoliating; // 0x50

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_.CTOR_OFFSET))(str, str, str, str, str, arg, nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_InnerText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_INNERTEXT_OFFSET))(nullptr);
		}

		::System::Void set_InnerText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_INNERTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_ISCONTAINER_OFFSET))(nullptr);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return (return (::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_LASTNODE_OFFSET))(nullptr);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlLinkedNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_LASTNODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_ISVALIDCHILDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_SystemId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_SYSTEMID_OFFSET))(nullptr);
		}

		::System::Void set_InnerXml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SET_INNERXML_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Void SetBaseURI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITY_SETBASEURI_OFFSET))(str, nullptr);
		}

	};
}

