#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_IXMLELEMENT_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLELEMENT_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_IXMLELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IXmlElement_TypeDefinitionIndex = 32113;

	class IXmlElement : public Il2CppObject
	{
	public:
		::System::Void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLELEMENT_SETATTRIBUTENODE_OFFSET))(arg, nullptr);
		}

		::System::String* GetPrefixOfNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLELEMENT_GETPREFIXOFNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_IXMLELEMENT_GET_ISEMPTY_OFFSET))(nullptr);
		}

	};
}

