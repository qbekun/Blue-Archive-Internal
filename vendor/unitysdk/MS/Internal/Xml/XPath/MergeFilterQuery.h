#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class MergeFilterQuery; }

#define MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9946EB0)
#define MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9946EE0)
#define MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9946F20)
#define MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9946F80)
#define MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9947090)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int MergeFilterQuery_TypeDefinitionIndex = 28283;

	class MergeFilterQuery : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _child; // 0x28

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::MergeFilterQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::MergeFilterQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_MERGEFILTERQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

