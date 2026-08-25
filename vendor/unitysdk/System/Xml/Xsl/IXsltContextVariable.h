#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XSL_IXSLTCONTEXTVARIABLE_GET_VARIABLETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XSL_IXSLTCONTEXTVARIABLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml::Xsl
{
	inline static constexpr unsigned int IXsltContextVariable_TypeDefinitionIndex = 27945;

	class IXsltContextVariable : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathResultType* get_VariableType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_IXSLTCONTEXTVARIABLE_GET_VARIABLETYPE_OFFSET))(nullptr);
		}

		::System::Object* Evaluate(::System::Xml::Xsl::XsltContext* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Xsl::XsltContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_IXSLTCONTEXTVARIABLE_EVALUATE_OFFSET))(arg, nullptr);
		}

	};
}

