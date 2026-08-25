#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9537080)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_WRAPPEDNODE_OFFSET UNITYSDK_OFFSET(0x9539490)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x95394A0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x95394C0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x95394D0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9539520)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9539570)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9539580)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9539590)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x95395E0)
#define NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x9539630)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XObjectWrapper_TypeDefinitionIndex = 32122;

	class XObjectWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XObject* _xmlObject; // 0x10

		::System::Void .ctor(::System::Xml::Linq::XObject* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_WrappedNode()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_WRAPPEDNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChildNodes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_CHILDNODES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Attributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_APPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XOBJECTWRAPPER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

	};
}

