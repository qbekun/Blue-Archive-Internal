#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_ASTNODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_ASTNODE_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_ASTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x993C5E0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int AstNode_TypeDefinitionIndex = 28247;

	class AstNode : public Il2CppObject
	{
	public:
		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ASTNODE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ASTNODE_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ASTNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

