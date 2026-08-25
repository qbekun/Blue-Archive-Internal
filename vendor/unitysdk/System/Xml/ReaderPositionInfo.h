#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_READERPOSITIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99AC260)
#define SYSTEM_XML_READERPOSITIONINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x99AC2A0)
#define SYSTEM_XML_READERPOSITIONINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x99AC340)
#define SYSTEM_XML_READERPOSITIONINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x99AC3E0)

namespace System::Xml
{
	inline static constexpr unsigned int ReaderPositionInfo_TypeDefinitionIndex = 27792;

	class ReaderPositionInfo : public Il2CppObject
	{
	public:
		::System::Xml::IXmlLineInfo* lineInfo; // 0x10

		::System::Void .ctor(::System::Xml::IXmlLineInfo* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlLineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_READERPOSITIONINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

	};
}

