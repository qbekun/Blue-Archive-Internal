#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCHILDNODES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9991720)
#define SYSTEM_XML_XMLCHILDNODES_ITEM_OFFSET UNITYSDK_OFFSET(0x9991750)
#define SYSTEM_XML_XMLCHILDNODES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99917B0)
#define SYSTEM_XML_XMLCHILDNODES_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9991810)

namespace System::Xml
{
	inline static constexpr unsigned int XmlChildNodes_TypeDefinitionIndex = 27756;

	class XmlChildNodes : public Il2CppObject
	{
	public:
		::System::Xml::XmlNode* container; // 0x10

		::System::Void .ctor(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* Item(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHILDNODES_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

