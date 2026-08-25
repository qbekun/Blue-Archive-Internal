#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_FILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x99400B0)
#define MS_INTERNAL_XML_XPATH_FILTER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9940100)
#define MS_INTERNAL_XML_XPATH_FILTER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x9940110)
#define MS_INTERNAL_XML_XPATH_FILTER_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x9940120)
#define MS_INTERNAL_XML_XPATH_FILTER_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x9940130)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Filter_TypeDefinitionIndex = 28268;

	class Filter : public WorldUpType
	{
	public:
		::MS::Internal::Xml::XPath::AstNode* _input; // 0x10
		::MS::Internal::Xml::XPath::AstNode* _condition; // 0x18

		::System::Void .ctor(::MS::Internal::Xml::XPath::AstNode* arg, ::MS::Internal::Xml::XPath::AstNode* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* get_Input()
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_GET_INPUT_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* get_Condition()
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_FILTER_GET_CONDITION_OFFSET))(nullptr);
		}

	};
}

