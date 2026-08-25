#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class FilterQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_FILTERQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9940140)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9940170)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x99401C0)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x9940230)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9940240)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9940360)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_EVALUATEPREDICATE_OFFSET UNITYSDK_OFFSET(0x99403E0)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9940540)
#define MS_INTERNAL_XML_XPATH_FILTERQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9940570)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int FilterQuery_TypeDefinitionIndex = 28269;

	class FilterQuery : public ::TriInspector::HideLabelAttribute
	{
	public:
		::MS::Internal::Xml::XPath::Query* _cond; // 0x58
		::System::Boolean _noPosition; // 0x60

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::MS::Internal::Xml::XPath::Query* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::MS::Internal::Xml::XPath::Query*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::FilterQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::FilterQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_RESET_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::Query* get_Condition()
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Boolean EvaluatePredicate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_EVALUATEPREDICATE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTERQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

