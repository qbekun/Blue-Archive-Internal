#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x99DCF30)
#define SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_ADDKEYHASH_OFFSET UNITYSDK_OFFSET(0x99DCA90)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlChoiceIdentifierAttribute_TypeDefinitionIndex = 27885;

	class XmlChoiceIdentifierAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* memberName; // 0x10

		::System::String* get_MemberName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_GET_MEMBERNAME_OFFSET))(nullptr);
		}

		::System::Void AddKeyHash(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCHOICEIDENTIFIERATTRIBUTE_ADDKEYHASH_OFFSET))(arg, nullptr);
		}

	};
}

