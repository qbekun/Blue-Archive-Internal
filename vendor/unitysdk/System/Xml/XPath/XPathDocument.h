#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x99CB6B0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x99CB6C0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GETCOLLAPSEDTEXTNODE_OFFSET UNITYSDK_OFFSET(0x99CB6D0)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GETROOTNODE_OFFSET UNITYSDK_OFFSET(0x99CB700)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_GETXMLNAMESPACENODE_OFFSET UNITYSDK_OFFSET(0x99CB730)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x99CB760)
#define SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPIDELEMENT_OFFSET UNITYSDK_OFFSET(0x99CB850)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathDocument_TypeDefinitionIndex = 27844;

	class XPathDocument : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* pageText; // 0x10
		::Il2CppArray<::System::Object*>* pageRoot; // 0x18
		::Il2CppArray<::System::Object*>* pageXmlNmsp; // 0x20
		::System::Int32 idxText; // 0x28
		::System::Int32 idxRoot; // 0x2C
		::System::Int32 idxXmlNmsp; // 0x30
		::System::Xml::XmlNameTable* nameTable; // 0x38
		::System::Boolean hasLineInfo; // 0x40
		Il2CppObject* mapNmsp; // 0x48
		Il2CppObject* idValueMap; // 0x50

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GET_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 GetCollapsedTextNode(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GETCOLLAPSEDTEXTNODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRootNode(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GETROOTNODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetXmlNamespaceNode(::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_GETXMLNAMESPACENODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 LookupNamespaces(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPNAMESPACES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 LookupIdElement(::System::String* str, ::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHDOCUMENT_LOOKUPIDELEMENT_OFFSET))(str, arg, nullptr);
		}

	};
}

