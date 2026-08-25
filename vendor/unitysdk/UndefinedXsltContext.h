#pragma once
#include "unitysdk.h"

#define UNDEFINEDXSLTCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x993EC30)
#define UNDEFINEDXSLTCONTEXT_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x993EC60)
#define UNDEFINEDXSLTCONTEXT_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x993ECA0)
#define UNDEFINEDXSLTCONTEXT_RESOLVEVARIABLE_OFFSET UNITYSDK_OFFSET(0x993EDB0)
#define UNDEFINEDXSLTCONTEXT_RESOLVEFUNCTION_OFFSET UNITYSDK_OFFSET(0x993EDF0)
#define UNDEFINEDXSLTCONTEXT_GET_WHITESPACE_OFFSET UNITYSDK_OFFSET(0x993EE30)
#define UNDEFINEDXSLTCONTEXT_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x993EE40)

	inline static constexpr unsigned int UndefinedXsltContext_TypeDefinitionIndex = 28259;

	class UndefinedXsltContext : public Il2CppObject
	{
	public:
		::System::Xml::IXmlNamespaceResolver* _nsResolver; // 0x50

		::System::Void .ctor(::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_DefaultNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_GET_DEFAULTNAMESPACE_OFFSET))(nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Xml::Xsl::IXsltContextVariable* ResolveVariable(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::Xsl::IXsltContextVariable*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_RESOLVEVARIABLE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::Xsl::IXsltContextFunction* ResolveFunction(::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Xml::Xsl::IXsltContextFunction*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_RESOLVEFUNCTION_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean get_Whitespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_GET_WHITESPACE_OFFSET))(nullptr);
		}

		::System::Boolean PreserveWhitespace(::System::Xml::XPath::XPathNavigator* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XPath::XPathNavigator*, ::PVOID))((::PBYTE)hIl2Cpp + UNDEFINEDXSLTCONTEXT_PRESERVEWHITESPACE_OFFSET))(arg, nullptr);
		}

	};

