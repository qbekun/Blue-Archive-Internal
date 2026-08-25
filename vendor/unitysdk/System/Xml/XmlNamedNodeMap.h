#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNAMEDNODEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9997E40)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x99A1510)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x99A1790)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99A19C0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x99A1AC0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET UNITYSDK_OFFSET(0x99A15B0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET UNITYSDK_OFFSET(0x99A1840)
#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET UNITYSDK_OFFSET(0x99A1BD0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET UNITYSDK_OFFSET(0x99A1EA0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x99A1F40)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET UNITYSDK_OFFSET(0x99A1970)
#define SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x99A21A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_TypeDefinitionIndex = 27773;

	class XmlNamedNodeMap : public Il2CppObject
	{
	public:
		::System::Xml::XmlNode* parent; // 0x10
		SmallXmlNodeList* nodes; // 0x18

		::System::Void .ctor(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* GetNamedItem(::System::String* str)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 FindNodeOffset(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET))(str, nullptr);
		}

		::System::Int32 FindNodeOffset(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* AddNodeForLoad(::System::Xml::XmlNode* arg, ::System::Xml::XmlDocument* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* RemoveNodeAt(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* ReplaceNodeAt(::System::Int32 arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* InsertNodeAt(::System::Int32 arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET))(arg, arg, nullptr);
		}

	};
}

