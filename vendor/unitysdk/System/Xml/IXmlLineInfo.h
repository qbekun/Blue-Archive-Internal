#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IXMLLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IXmlLineInfo_TypeDefinitionIndex = 27790;

	class IXmlLineInfo : public Il2CppObject
	{
	public:
		::System::Boolean HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IXMLLINEINFO_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

	};
}

