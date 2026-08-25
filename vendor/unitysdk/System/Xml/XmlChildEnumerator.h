#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCHILDENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99914E0)
#define SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9991540)
#define SYSTEM_XML_XMLCHILDENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99915C0)
#define SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9991640)
#define SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9991690)
#define SYSTEM_XML_XMLCHILDENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99916A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlChildEnumerator_TypeDefinitionIndex = 27755;

	class XmlChildEnumerator : public Il2CppObject
	{
	public:
		::System::Xml::XmlNode* container; // 0x10
		::System::Xml::XmlNode* child; // 0x18
		::System::Boolean isFirst; // 0x20

		::System::Void .ctor(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_Current()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

