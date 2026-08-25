#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_GROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9942620)
#define MS_INTERNAL_XML_XPATH_GROUP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9942650)
#define MS_INTERNAL_XML_XPATH_GROUP_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x9942660)
#define MS_INTERNAL_XML_XPATH_GROUP_GET_GROUPNODE_OFFSET UNITYSDK_OFFSET(0x9942670)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 28276;

	class Group : public WorldUpType
	{
	public:
		::MS::Internal::Xml::XPath::AstNode* _groupNode; // 0x10

		::System::Void .ctor(::MS::Internal::Xml::XPath::AstNode* arg)
		{
			((::System::Void(*)(::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP_.CTOR_OFFSET))(arg, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* get_GroupNode()
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_GROUP_GET_GROUPNODE_OFFSET))(nullptr);
		}

	};
}

