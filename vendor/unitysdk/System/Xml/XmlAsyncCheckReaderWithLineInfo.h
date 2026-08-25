#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x995B4A0)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x995C710)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x995C7B0)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x995C850)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckReaderWithLineInfo_TypeDefinitionIndex = 27668;

	class XmlAsyncCheckReaderWithLineInfo : public Il2CppObject
	{
	public:
		::System::Xml::IXmlLineInfo* readerAsIXmlLineInfo; // 0x20

		::System::Void .ctor(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHLINEINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

	};
}

