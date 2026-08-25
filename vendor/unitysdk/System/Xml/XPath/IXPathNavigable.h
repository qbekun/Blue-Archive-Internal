#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_IXPATHNAVIGABLE_CREATENAVIGATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int IXPathNavigable_TypeDefinitionIndex = 27843;

	class IXPathNavigable : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* CreateNavigator()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_IXPATHNAVIGABLE_CREATENAVIGATOR_OFFSET))(nullptr);
		}

	};
}

