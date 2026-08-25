#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class GroupQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_GROUPQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9942680)
#define MS_INTERNAL_XML_XPATH_GROUPQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9942690)
#define MS_INTERNAL_XML_XPATH_GROUPQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x99426A0)
#define MS_INTERNAL_XML_XPATH_GROUPQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99426F0)
#define MS_INTERNAL_XML_XPATH_GROUPQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9942720)
#define MS_INTERNAL_XML_XPATH_GROUPQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x9942780)
#define MS_INTERNAL_XML_XPATH_GROUPQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x99427B0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int GroupQuery_TypeDefinitionIndex = 28277;

	class GroupQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::GroupQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::GroupQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUPQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

