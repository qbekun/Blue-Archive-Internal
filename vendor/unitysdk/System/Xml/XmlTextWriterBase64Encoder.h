#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x983E430)
#define SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x983E4A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriterBase64Encoder_TypeDefinitionIndex = 27609;

	class XmlTextWriterBase64Encoder : public ::TriInspector::GroupNextAttribute
	{
	public:
		::System::Xml::XmlTextEncoder* xmlTextEncoder; // 0x28

		::System::Void .ctor(::System::Xml::XmlTextEncoder* arg)
		{
			((::System::Void(*)(::System::Xml::XmlTextEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

