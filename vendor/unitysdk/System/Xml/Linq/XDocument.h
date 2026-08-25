#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XDOCUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98585B0)
#define SYSTEM_XML_LINQ_XDOCUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98585C0)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x9858650)
#define SYSTEM_XML_LINQ_XDOCUMENT_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x9858660)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9858670)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x9858680)
#define SYSTEM_XML_LINQ_XDOCUMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x98586C0)
#define SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9858800)
#define SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9858860)
#define SYSTEM_XML_LINQ_XDOCUMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x98588C0)
#define SYSTEM_XML_LINQ_XDOCUMENT_GETFIRSTNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_LINQ_XDOCUMENT_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9858920)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x9858990)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATEDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9858B30)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x9858C40)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDocument_TypeDefinitionIndex = 37294;

	class XDocument : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XDeclaration* _declaration; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XDocument* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XDeclaration* get_Declaration()
		{
			return (return (::System::Xml::Linq::XDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_DECLARATION_OFFSET))(nullptr);
		}

		::System::Void set_Declaration(::System::Xml::Linq::XDeclaration* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XDeclaration*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_SET_DECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XElement* get_Root()
		{
			return (return (::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_ROOT_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_CLONENODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstNode()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GETFIRSTNODE_OFFSET))(nullptr);
		}

		::System::Boolean IsWhitespace(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ISWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* arg, ::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATENODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateDocument(::System::Xml::Linq::XNode* arg, ::System::Xml::XmlNodeType* arg, ::System::Xml::XmlNodeType* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::System::Xml::XmlNodeType*, ::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATEDOCUMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATESTRING_OFFSET))(str, nullptr);
		}

	};
}

