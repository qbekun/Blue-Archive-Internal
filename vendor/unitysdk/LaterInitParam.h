#pragma once
#include "unitysdk.h"

#define LATERINITPARAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x996A840)

	inline static constexpr unsigned int LaterInitParam_TypeDefinitionIndex = 27690;

	class LaterInitParam : public Il2CppObject
	{
	public:
		::System::Boolean useAsync; // 0x10
		::System::IO::Stream* inputStream; // 0x18
		::Il2CppArray<::System::Object*>* inputBytes; // 0x20
		::System::Int32 inputByteCount; // 0x28
		::System::Uri* inputbaseUri; // 0x30
		::System::String* inputUriStr; // 0x38
		::System::Xml::XmlResolver* inputUriResolver; // 0x40
		::System::Xml::XmlParserContext* inputContext; // 0x48
		::System::IO::TextReader* inputTextReader; // 0x50
		InitInputType* initType; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LATERINITPARAM_.CTOR_OFFSET))(nullptr);
		}

	};

