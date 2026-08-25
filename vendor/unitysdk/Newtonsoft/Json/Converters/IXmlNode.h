#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IXmlNode_TypeDefinitionIndex = 32114;

	class IXmlNode : public Il2CppObject
	{
	public:
		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChildNodes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_CHILDNODES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Attributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_APPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::Object* get_WrappedNode()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLNODE_GET_WRAPPEDNODE_OFFSET))(nullptr);
		}

	};
}

