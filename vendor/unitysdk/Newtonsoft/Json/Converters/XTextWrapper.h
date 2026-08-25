#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x95387E0)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9538860)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9538890)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9538900)
#define NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9538A00)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XTextWrapper_TypeDefinitionIndex = 32118;

	class XTextWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XText* get_Text()
		{
			return (return (::System::Xml::Linq::XText*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XText* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XText*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XTEXTWRAPPER_GET_PARENTNODE_OFFSET))(nullptr);
		}

	};
}

