#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XPATH_XPATHEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CC460)
#define SYSTEM_XML_XPATH_XPATHEXPRESSION_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XPATH_XPATHEXPRESSION_COMPILE_OFFSET UNITYSDK_OFFSET(0x99CC470)
#define SYSTEM_XML_XPATH_XPATHEXPRESSION_COMPILE_OFFSET UNITYSDK_OFFSET(0x99CC480)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathExpression_TypeDefinitionIndex = 27847;

	class XPathExpression : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXPRESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetContext(::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXPRESSION_SETCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathExpression* Compile(::System::String* str)
		{
			return (return (::System::Xml::XPath::XPathExpression*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXPRESSION_COMPILE_OFFSET))(str, nullptr);
		}

		::System::Xml::XPath::XPathExpression* Compile(::System::String* str, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Xml::XPath::XPathExpression*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHEXPRESSION_COMPILE_OFFSET))(str, arg, nullptr);
		}

	};
}

