#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class NamespaceQuery; }

#define MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9947110)
#define MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9947130)
#define MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x9947160)
#define MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x99471B0)
#define MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_MATCHES_OFFSET UNITYSDK_OFFSET(0x99472A0)
#define MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9947320)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int NamespaceQuery_TypeDefinitionIndex = 28284;

	class NamespaceQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Boolean _onNamespace; // 0x58

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::NamespaceQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::NamespaceQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Boolean matches(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NAMESPACEQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

