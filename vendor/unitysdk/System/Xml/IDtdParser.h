#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IDtdParser_TypeDefinitionIndex = 27642;

	class IDtdParser : public Il2CppObject
	{
	public:
		::System::Xml::IDtdInfo* ParseInternalDtd(::System::Xml::IDtdParserAdapter* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::IDtdInfo*(*)(::System::Xml::IDtdParserAdapter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSER_PARSEINTERNALDTD_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::IDtdInfo* ParseFreeFloatingDtd(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::IDtdParserAdapter* arg)
		{
			return (return (::System::Xml::IDtdInfo*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdParserAdapter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IDTDPARSER_PARSEFREEFLOATINGDTD_OFFSET))(str, str, str, str, str, arg, nullptr);
		}

	};
}

