#pragma once
#include "unitysdk.h"

#define NAMESPACERESOLVERPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9977F10)
#define NAMESPACERESOLVERPROXY_SYSTEM.XML.IXMLNAMESPACERESOLVER.GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x997F2E0)
#define NAMESPACERESOLVERPROXY_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x997F330)
#define NAMESPACERESOLVERPROXY_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x997F350)

	inline static constexpr unsigned int NamespaceResolverProxy_TypeDefinitionIndex = 27716;

	class NamespaceResolverProxy : public Il2CppObject
	{
	public:
		::System::Xml::XmlWellFormedWriter* wfWriter; // 0x10

		::System::Void .ctor(::System::Xml::XmlWellFormedWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWellFormedWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACERESOLVERPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(::System::Xml::XmlNamespaceScope* arg)
		{
			return (return (Il2CppObject*(*)(::System::Xml::XmlNamespaceScope*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACERESOLVERPROXY_SYSTEM.XML.IXMLNAMESPACERESOLVER.GETNAMESPACESINSCOPE_OFFSET))(arg, nullptr);
		}

		::System::String* System.Xml.IXmlNamespaceResolver.LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACERESOLVERPROXY_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* System.Xml.IXmlNamespaceResolver.LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMESPACERESOLVERPROXY_SYSTEM.XML.IXMLNAMESPACERESOLVER.LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

	};

