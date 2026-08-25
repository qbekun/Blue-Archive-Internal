#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLRAWWRITERBASE64ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x983E390)
#define SYSTEM_XML_XMLRAWWRITERBASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x983E400)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRawWriterBase64Encoder_TypeDefinitionIndex = 27608;

	class XmlRawWriterBase64Encoder : public ::TriInspector::GroupNextAttribute
	{
	public:
		::System::Xml::XmlRawWriter* rawWriter; // 0x28

		::System::Void .ctor(::System::Xml::XmlRawWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlRawWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITERBASE64ENCODER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITERBASE64ENCODER_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

