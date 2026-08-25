#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9539640)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9538350)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x95396C0)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9539730)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9539830)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x95398B0)
#define NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9539930)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XAttributeWrapper_TypeDefinitionIndex = 32123;

	class XAttributeWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XAttribute* get_Attribute()
		{
			return (return (::System::Xml::Linq::XAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_ATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XATTRIBUTEWRAPPER_GET_PARENTNODE_OFFSET))(nullptr);
		}

	};
}

