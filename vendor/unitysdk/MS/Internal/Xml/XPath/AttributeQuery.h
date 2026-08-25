#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class AttributeQuery; }

#define MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C5F0)
#define MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C6F0)
#define MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993C7C0)
#define MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993C860)
#define MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993C950)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int AttributeQuery_TypeDefinitionIndex = 28248;

	class AttributeQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Boolean _onAttribute; // 0x58

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::AttributeQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::AttributeQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ATTRIBUTEQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

