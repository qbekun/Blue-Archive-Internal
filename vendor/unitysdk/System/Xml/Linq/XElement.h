#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9857B30)
#define SYSTEM_XML_LINQ_XELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9858F10)
#define SYSTEM_XML_LINQ_XELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9854AB0)
#define SYSTEM_XML_LINQ_XELEMENT_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9859020)
#define SYSTEM_XML_LINQ_XELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9859030)
#define SYSTEM_XML_LINQ_XELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9859040)
#define SYSTEM_XML_LINQ_XELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9859050)
#define SYSTEM_XML_LINQ_XELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9859060)
#define SYSTEM_XML_LINQ_XELEMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x98590F0)
#define SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9859170)
#define SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98591B0)
#define SYSTEM_XML_LINQ_XELEMENT_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x98530D0)
#define SYSTEM_XML_LINQ_XELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x9859370)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x98596C0)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET UNITYSDK_OFFSET(0x98596D0)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET UNITYSDK_OFFSET(0x9859980)
#define SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98599A0)
#define SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9859D20)
#define SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9859AA0)
#define SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x9857BC0)
#define SYSTEM_XML_LINQ_XELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9859E80)
#define SYSTEM_XML_LINQ_XELEMENT_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98591C0)
#define SYSTEM_XML_LINQ_XELEMENT_GETNAMESPACEOFPREFIXINSCOPE_OFFSET UNITYSDK_OFFSET(0x9859260)
#define SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROM_OFFSET UNITYSDK_OFFSET(0x9859900)
#define SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROMIMPL_OFFSET UNITYSDK_OFFSET(0x9859F10)
#define SYSTEM_XML_LINQ_XELEMENT_SETENDELEMENTLINEINFO_OFFSET UNITYSDK_OFFSET(0x9857E80)
#define SYSTEM_XML_LINQ_XELEMENT_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x985A8C0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XElement_TypeDefinitionIndex = 37297;

	class XElement : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XName* name; // 0x30
		::System::Xml::Linq::XAttribute* lastAttr; // 0x38

		::System::Void .ctor(::System::Xml::Linq::XName* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XStreamingElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XStreamingElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_HASATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XName* get_Name()
		{
			return (return (::System::Xml::Linq::XName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Xml::Linq::XAttribute* Attribute(::System::Xml::Linq::XName* arg)
		{
			return (return (::System::Xml::Linq::XAttribute*(*)(::System::Xml::Linq::XName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Attributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* arg)
		{
			return (return (::System::String*(*)(::System::Xml::Linq::XNamespace*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETPREFIXOFNAMESPACE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* System.Xml.Serialization.IXmlSerializable.GetSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.GETSCHEMA_OFFSET))(nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.ReadXml(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.READXML_OFFSET))(arg, nullptr);
		}

		::System::Void System.Xml.Serialization.IXmlSerializable.WriteXml(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM.XML.SERIALIZATION.IXMLSERIALIZABLE.WRITEXML_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void AppendAttribute(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendAttributeSkipNotify(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTESKIPNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_CLONENODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAttributes(::System::Xml::Linq::XName* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::Linq::XName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::String* GetNamespaceOfPrefixInScope(::System::String* str, ::System::Xml::Linq::XElement* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETNAMESPACEOFPREFIXINSCOPE_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReadElementFrom(::System::Xml::XmlReader* arg, ::System::Xml::Linq::LoadOptions* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadElementFromImpl(::System::Xml::XmlReader* arg, ::System::Xml::Linq::LoadOptions* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROMIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetEndElementLineInfo(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SETENDELEMENTLINEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* arg, ::System::Xml::Linq::XNode* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_VALIDATENODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

