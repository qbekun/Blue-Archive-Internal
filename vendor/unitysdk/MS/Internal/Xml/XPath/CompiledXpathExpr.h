#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class Query; }

#define MS_INTERNAL_XML_XPATH_COMPILEDXPATHEXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x993EA60)
#define MS_INTERNAL_XML_XPATH_COMPILEDXPATHEXPR_GET_QUERYTREE_OFFSET UNITYSDK_OFFSET(0x993EAB0)
#define MS_INTERNAL_XML_XPATH_COMPILEDXPATHEXPR_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x993EB00)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int CompiledXpathExpr_TypeDefinitionIndex = 28260;

	class CompiledXpathExpr : public Il2CppObject
	{
	public:
		::MS::Internal::Xml::XPath::Query* _query; // 0x10
		::System::String* _expr; // 0x18
		::System::Boolean _needContext; // 0x20

		::System::Void .ctor(::MS::Internal::Xml::XPath::Query* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::Query*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_COMPILEDXPATHEXPR_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::MS::Internal::Xml::XPath::Query* get_QueryTree()
		{
			return (return (::MS::Internal::Xml::XPath::Query*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_COMPILEDXPATHEXPR_GET_QUERYTREE_OFFSET))(nullptr);
		}

		::System::Void SetContext(::System::Xml::IXmlNamespaceResolver* arg)
		{
			((::System::Void(*)(::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_COMPILEDXPATHEXPR_SETCONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

