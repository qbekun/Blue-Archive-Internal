#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_IHASXMLNODE_GETNODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml
{
	inline static constexpr unsigned int IHasXmlNode_TypeDefinitionIndex = 27789;

	class IHasXmlNode : public Il2CppObject
	{
	public:
		::System::Xml::XmlNode* GetNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_IHASXMLNODE_GETNODE_OFFSET))(nullptr);
		}

	};
}

