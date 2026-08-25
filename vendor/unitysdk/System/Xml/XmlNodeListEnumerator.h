#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNODELISTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x998E100)
#define SYSTEM_XML_XMLNODELISTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x998E1B0)
#define SYSTEM_XML_XMLNODELISTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x998E1C0)
#define SYSTEM_XML_XMLNODELISTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x998E220)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeListEnumerator_TypeDefinitionIndex = 27750;

	class XmlNodeListEnumerator : public Il2CppObject
	{
	public:
		::System::Xml::XPathNodeList* list; // 0x10
		::System::Int32 index; // 0x18
		::System::Boolean valid; // 0x1C

		::System::Void .ctor(::System::Xml::XPathNodeList* arg)
		{
			((::System::Void(*)(::System::Xml::XPathNodeList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELISTENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELISTENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELISTENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELISTENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

