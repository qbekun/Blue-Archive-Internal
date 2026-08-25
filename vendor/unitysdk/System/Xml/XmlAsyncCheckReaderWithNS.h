#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_.CTOR_OFFSET UNITYSDK_OFFSET(0x995B540)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_SYSTEM.XML.IXMLNAMESPACERESOLVER.GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x995C510)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x995C5B0)
#define SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x995C660)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckReaderWithNS_TypeDefinitionIndex = 27667;

	class XmlAsyncCheckReaderWithNS : public Il2CppObject
	{
	public:
		::System::Xml::IXmlNamespaceResolver* readerAsIXmlNamespaceResolver; // 0x20

		::System::Void .ctor(::System::Xml::XmlReader* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(::System::Xml::XmlNamespaceScope* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::XmlNamespaceScope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_SYSTEM.XML.IXMLNAMESPACERESOLVER.GETNAMESPACESINSCOPE_OFFSET))(arg, nullptr);
		}

		::System::String* System.Xml.IXmlNamespaceResolver.LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* System.Xml.IXmlNamespaceResolver.LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADERWITHNS_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

	};
}

