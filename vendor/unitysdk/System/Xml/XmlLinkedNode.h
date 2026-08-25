#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLLINKEDNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9997C70)
#define SYSTEM_XML_XMLLINKEDNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x999B790)
#define SYSTEM_XML_XMLLINKEDNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x999B810)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLinkedNode_TypeDefinitionIndex = 27767;

	class XmlLinkedNode : public Il2CppObject
	{
	public:
		::System::Xml::XmlLinkedNode* next; // 0x18

		::System::Void .ctor(::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* get_PreviousSibling()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE_GET_PREVIOUSSIBLING_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLINKEDNODE_GET_NEXTSIBLING_OFFSET))(nullptr);
		}

	};
}

