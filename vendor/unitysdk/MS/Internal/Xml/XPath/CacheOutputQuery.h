#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class CacheOutputQuery; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993E480)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x993E520)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_RESET_OFFSET UNITYSDK_OFFSET(0x993E5E0)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x993E5F0)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x993E620)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x993E6B0)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x993E720)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x993E780)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x993E790)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x993E7A0)
#define MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x993E7E0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int CacheOutputQuery_TypeDefinitionIndex = 28256;

	class CacheOutputQuery : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* input; // 0x18
		Il2CppObject* outputBuffer; // 0x20

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::CacheOutputQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::CacheOutputQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_RESET_OFFSET))(nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNavigator* get_Current()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CACHEOUTPUTQUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

