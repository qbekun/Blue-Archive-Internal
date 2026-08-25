#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95355D0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x9536180)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9536190)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x95361C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x95361F0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_HASCHILDNODES_OFFSET UNITYSDK_OFFSET(0x9536840)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_WRAPNODE_OFFSET UNITYSDK_OFFSET(0x95366B0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9536870)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9536DB0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9536E60)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9536F10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9535D70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x9536F40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x9537000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlNodeWrapper_TypeDefinitionIndex = 32109;

	class XmlNodeWrapper : public Il2CppObject
	{
	public:
		::System::Xml::XmlNode* _node; // 0x10
		Il2CppObject* _childNodes; // 0x18
		Il2CppObject* _attributes; // 0x20

		::System::Void .ctor(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_WrappedNode()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_WRAPPEDNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChildNodes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_CHILDNODES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasChildNodes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_HASCHILDNODES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::XmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_WRAPNODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Attributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_HASATTRIBUTES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_APPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODEWRAPPER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

	};
}

