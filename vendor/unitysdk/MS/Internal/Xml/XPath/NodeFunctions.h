#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }

#define MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9947380)
#define MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x99473C0)
#define MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_EVALUATEARG_OFFSET UNITYSDK_OFFSET(0x9947440)
#define MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99474B0)
#define MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x99477E0)
#define MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x9947870)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int NodeFunctions_TypeDefinitionIndex = 28285;

	class NodeFunctions : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _arg; // 0x18
		FunctionType* _funcType; // 0x20
		::System::Xml::Xsl::XsltContext* _xsltContext; // 0x28

		::System::Void .ctor(FunctionType* arg, ::MS::Internal::Xml::XPath::Query* arg)
		{
			((::System::Void(*)(FunctionType*, ::MS::Internal::Xml::XPath::Query*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNavigator* EvaluateArg(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Xml::XPath::XPathNavigator*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_EVALUATEARG_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_NODEFUNCTIONS_CLONE_OFFSET))(nullptr);
		}

	};
}

