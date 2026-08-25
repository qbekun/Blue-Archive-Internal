#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_XSL_IXSLTCONTEXTFUNCTION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XSL_IXSLTCONTEXTFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Xml::Xsl
{
	inline static constexpr unsigned int IXsltContextFunction_TypeDefinitionIndex = 27944;

	class IXsltContextFunction : public Il2CppObject
	{
	public:
		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_IXSLTCONTEXTFUNCTION_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Object* Invoke(::System::Xml::Xsl::XsltContext* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Xsl::XsltContext*, ::Il2CppArray<::System::Object*>*, ::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSL_IXSLTCONTEXTFUNCTION_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

