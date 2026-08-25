#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class FunctionQuery; }

#define MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9941740)
#define MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x99417A0)
#define MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x99419C0)
#define MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9941F70)
#define MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x9942510)
#define MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x99425C0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int FunctionQuery_TypeDefinitionIndex = 28275;

	class FunctionQuery : public Il2CppObject
	{
	public:
		Il2CppObject* _args; // 0x38
		::System::Xml::Xsl::IXsltContextFunction* _function; // 0x40

		::System::Void .ctor(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::FunctionQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::FunctionQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FUNCTIONQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

