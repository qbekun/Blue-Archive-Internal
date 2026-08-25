#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class DescendantQuery; }

#define MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F010)
#define MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993F050)
#define MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993F0A0)
#define MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993F100)
#define MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993F2E0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int DescendantQuery_TypeDefinitionIndex = 28263;

	class DescendantQuery : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNodeIterator* _nodeIterator; // 0x60

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::String* str, ::System::Xml::XPath::XPathNodeType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::String*, ::System::Xml::XPath::XPathNodeType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_.CTOR_OFFSET))(arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::DescendantQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::DescendantQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_DESCENDANTQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

