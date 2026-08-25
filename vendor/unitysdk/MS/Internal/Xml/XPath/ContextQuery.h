#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class ContextQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C450)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C4B0)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993EE50)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x993EE60)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993EE70)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993EEC0)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x993EEE0)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x993EF50)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x993EF60)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x993EF70)
#define MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x993EF80)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ContextQuery_TypeDefinitionIndex = 28261;

	class ContextQuery : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathNavigator* contextNode; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::ContextQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::ContextQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CONTEXTQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

