#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9538DB0)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9538E30)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9538E60)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9538ED0)
#define NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9538FD0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XCommentWrapper_TypeDefinitionIndex = 32119;

	class XCommentWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XComment* get_Text()
		{
			return (return (::System::Xml::Linq::XComment*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XComment* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XComment*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCOMMENTWRAPPER_GET_PARENTNODE_OFFSET))(nullptr);
		}

	};
}

