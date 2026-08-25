#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XPATHNODELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x998DCD0)
#define SYSTEM_XML_XPATHNODELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x998DD70)
#define SYSTEM_XML_XPATHNODELIST_GETNODE_OFFSET UNITYSDK_OFFSET(0x998DF10)
#define SYSTEM_XML_XPATHNODELIST_READUNTIL_OFFSET UNITYSDK_OFFSET(0x998DDD0)
#define SYSTEM_XML_XPATHNODELIST_ITEM_OFFSET UNITYSDK_OFFSET(0x998E000)
#define SYSTEM_XML_XPATHNODELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x998E080)
#define SYSTEM_XML_XPATHNODELIST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x998E140)

namespace System::Xml
{
	inline static constexpr unsigned int XPathNodeList_TypeDefinitionIndex = 27749;

	class XPathNodeList : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x10
		::System::Xml::XPath::XPathNodeIterator* nodeIterator; // 0x18
		::System::Boolean done; // 0x20
		::Il2CppArray<::System::Object*>* nullparams; // 0x0

		::System::Void .ctor(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			((::System::Void(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* GetNode(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_GETNODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadUntil(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_READUNTIL_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* Item(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATHNODELIST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

