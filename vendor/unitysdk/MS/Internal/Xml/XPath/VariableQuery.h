#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class VariableQuery; }

#define MS_INTERNAL_XML_XPATH_VARIABLEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994AE60)
#define MS_INTERNAL_XML_XPATH_VARIABLEQUERY_.CTOR_OFFSET UNITYSDK_OFFSET(0x994E270)
#define MS_INTERNAL_XML_XPATH_VARIABLEQUERY_SETXSLTCONTEXT_OFFSET UNITYSDK_OFFSET(0x994E2B0)
#define MS_INTERNAL_XML_XPATH_VARIABLEQUERY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x994E370)
#define MS_INTERNAL_XML_XPATH_VARIABLEQUERY_GET_STATICTYPE_OFFSET UNITYSDK_OFFSET(0x994E460)
#define MS_INTERNAL_XML_XPATH_VARIABLEQUERY_CLONE_OFFSET UNITYSDK_OFFSET(0x994E580)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int VariableQuery_TypeDefinitionIndex = 28307;

	class VariableQuery : public Il2CppObject
	{
	public:
		::System::Xml::Xsl::IXsltContextVariable* _variable; // 0x38

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLEQUERY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::MS::Internal::Xml::XPath::VariableQuery* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::VariableQuery*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLEQUERY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetXsltContext(::System::Xml::Xsl::XsltContext* arg)
		{
			((::System::Void(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLEQUERY_SETXSLTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Object* Evaluate(::System::Xml::XPath::XPathNodeIterator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XPath::XPathNodeIterator*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLEQUERY_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_StaticType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLEQUERY_GET_STATICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeIterator* Clone()
		{
			return (return (::System::Xml::XPath::XPathNodeIterator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLEQUERY_CLONE_OFFSET))(nullptr);
		}

	};
}

