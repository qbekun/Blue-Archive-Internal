#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XSL_XSLTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A04E40)
#define SYSTEM_XML_XSL_XSLTCONTEXT_RESOLVEVARIABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XSL_XSLTCONTEXT_RESOLVEFUNCTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XSL_XSLTCONTEXT_GET_WHITESPACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XSL_XSLTCONTEXT_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml::Xsl
{
	inline static constexpr unsigned int XsltContext_TypeDefinitionIndex = 27946;

	class XsltContext : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_XSLTCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Xsl::IXsltContextVariable* ResolveVariable(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Xsl::IXsltContextVariable*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_XSLTCONTEXT_RESOLVEVARIABLE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::Xsl::IXsltContextFunction* ResolveFunction(::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Xml::Xsl::IXsltContextFunction*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_XSLTCONTEXT_RESOLVEFUNCTION_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean get_Whitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_XSLTCONTEXT_GET_WHITESPACE_OFFSET))(nullptr);
		}

		::System::Boolean PreserveWhitespace(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_XSLTCONTEXT_PRESERVEWHITESPACE_OFFSET))(arg, nullptr);
		}

	};
}

