#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }
namespace MS::Internal::Xml::XPath { class QueryProps; }

#define MS_INTERNAL_XML_XPATH_QUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9949260)
#define MS_INTERNAL_XML_XPATH_QUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99492A0)
#define MS_INTERNAL_XML_XPATH_QUERY_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9949300)
#define MS_INTERNAL_XML_XPATH_QUERY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9949320)
#define MS_INTERNAL_XML_XPATH_QUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x99493F0)
#define MS_INTERNAL_XML_XPATH_QUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_QUERY_ADVANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_QUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_QUERY_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9949400)
#define MS_INTERNAL_XML_XPATH_QUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x9949410)
#define MS_INTERNAL_XML_XPATH_QUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x99494A0)
#define MS_INTERNAL_XML_XPATH_QUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x99494C0)
#define MS_INTERNAL_XML_XPATH_QUERY_INSERT_OFFSET UNITYSDK_OFFSET(0x99494E0)
#define MS_INTERNAL_XML_XPATH_QUERY_GETMEDIAN_OFFSET UNITYSDK_OFFSET(0x99497D0)
#define MS_INTERNAL_XML_XPATH_QUERY_COMPARENODES_OFFSET UNITYSDK_OFFSET(0x99496B0)
#define MS_INTERNAL_XML_XPATH_QUERY_GETXPATHTYPE_OFFSET UNITYSDK_OFFSET(0x99497E0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Query_TypeDefinitionIndex = 28296;

	class Query : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Advance()
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_ADVANCE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::QueryProps* get_Properties()
		{
			return (return (::MS::Internal::Xml::XPath::QueryProps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::Query* Clone(::MS::Internal::Xml::XPath::Query* arg)
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* Clone(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Insert(Il2CppObject* arg, ::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetMedian(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_GETMEDIAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNodeOrder* CompareNodes(::System::Xml::XPath::XPathNavigator* arg, ::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Xml::XmlNodeOrder*(*)(::System::Xml::XPath::XPathNavigator*, ::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_COMPARENODES_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* GetXPathType(::System::Object* arg)
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_QUERY_GETXPATHTYPE_OFFSET))(arg, nullptr);
		}

	};
}

