#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9535BE0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x9535EF0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x9535FD0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9536000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlElementWrapper_TypeDefinitionIndex = 32106;

	class XmlElementWrapper : public Il2CppObject
	{
	public:
		::System::Xml::XmlElement* _element; // 0x28

		::System::Void .ctor(::System::Xml::XmlElement* arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_SETATTRIBUTENODE_OFFSET))(arg, nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GETPREFIXOFNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLELEMENTWRAPPER_GET_ISEMPTY_OFFSET))(nullptr);
		}

	};
}

