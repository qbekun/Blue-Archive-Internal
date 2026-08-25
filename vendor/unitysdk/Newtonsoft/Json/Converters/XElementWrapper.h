#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ELEMENT_OFFSET UNITYSDK_OFFSET(0x9539A20)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95381B0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x9539AA0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9539BB0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_HASIMPLICITNAMESPACEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x953A220)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x953A800)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x953A840)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x953A8C0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x953A9C0)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x953AA40)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x953A760)
#define NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x953AAC0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XElementWrapper_TypeDefinitionIndex = 32124;

	class XElementWrapper : public Il2CppObject
	{
	public:
		Il2CppObject* _attributes; // 0x20

		::System::Xml::Linq::XElement* get_Element()
		{
			return (return (::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ELEMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XElement* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XElement*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Attributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean HasImplicitNamespaceAttribute(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_HASIMPLICITNAMESPACEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_APPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XELEMENTWRAPPER_GET_ISEMPTY_OFFSET))(nullptr);
		}

	};
}

