#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853A00)
#define SYSTEM_XML_LINQ_XCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9853A10)
#define SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x9853C30)
#define SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x9853D90)
#define SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET UNITYSDK_OFFSET(0x9854B40)
#define SYSTEM_XML_LINQ_XCONTAINER_REMOVENODES_OFFSET UNITYSDK_OFFSET(0x9854BF0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98552B0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x98552C0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x98542C0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET UNITYSDK_OFFSET(0x98546F0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x98552D0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x9854770)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9855350)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET UNITYSDK_OFFSET(0x98554B0)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9853B50)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x9855900)
#define SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET UNITYSDK_OFFSET(0x98551E0)
#define SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9852110)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x98559E0)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x98563E0)
#define SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x9857640)
#define SYSTEM_XML_LINQ_XCONTAINER_REMOVENODESSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9855110)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x9857930)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x9857940)
#define SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x9857950)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XContainer_TypeDefinitionIndex = 37292;

	class XContainer : public Il2CppObject
	{
	public:
		::System::Object* content; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XContainer* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XContainer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* get_LastNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Nodes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET))(nullptr);
		}

		::System::Void RemoveNodes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_REMOVENODES_OFFSET))(nullptr);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void AddContentSkipNotify(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void AddNode(::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET))(arg, nullptr);
		}

		::System::Void AddNodeSkipNotify(::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void AddString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET))(str, nullptr);
		}

		::System::Void AddStringSkipNotify(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET))(str, nullptr);
		}

		::System::Void AppendNode(::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendNodeSkipNotify(::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void AppendText(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertTextToNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET))(nullptr);
		}

		::System::String* GetStringValue(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadContentFrom(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET))(arg, nullptr);
		}

		::System::Void ReadContentFrom(::System::Xml::XmlReader* arg, ::System::Xml::Linq::LoadOptions* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveNode(::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveNodesSkipNotify()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_REMOVENODESSKIPNOTIFY_OFFSET))(nullptr);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* arg, ::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

	};
}

