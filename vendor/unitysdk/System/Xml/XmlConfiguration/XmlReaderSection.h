#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_PROHIBITDEFAULTURLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9A04DD0)
#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_CREATEDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x9A04DE0)
#define SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_COLLAPSEWHITESPACEINTOEMPTYSTRING_OFFSET UNITYSDK_OFFSET(0x9A04E30)

namespace System::Xml::XmlConfiguration
{
	inline static constexpr unsigned int XmlReaderSection_TypeDefinitionIndex = 27943;

	class XmlReaderSection : public Il2CppObject
	{
	public:
		::System::Boolean get_ProhibitDefaultUrlResolver()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_PROHIBITDEFAULTURLRESOLVER_OFFSET))(nullptr);
		}

		::System::Xml::XmlResolver* CreateDefaultResolver()
		{
			return (return (::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_CREATEDEFAULTRESOLVER_OFFSET))(nullptr);
		}

		::System::Boolean get_CollapseWhiteSpaceIntoEmptyString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCONFIGURATION_XMLREADERSECTION_GET_COLLAPSEWHITESPACEINTOEMPTYSTRING_OFFSET))(nullptr);
		}

	};
}

