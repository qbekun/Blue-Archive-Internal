#pragma once
#include "../../unitysdk.h"

#define MONO_XML_SMALLXMLPARSEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9122300)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParserException_TypeDefinitionIndex = 23597;

	class SmallXmlParserException : public Il2CppObject
	{
	public:
		::System::Int32 line; // 0x90
		::System::Int32 column; // 0x94

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSEREXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

