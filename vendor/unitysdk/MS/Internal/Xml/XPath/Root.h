#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_ROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x994B8F0)
#define MS_INTERNAL_XML_XPATH_ROOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x994B900)
#define MS_INTERNAL_XML_XPATH_ROOT_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x994B910)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Root_TypeDefinitionIndex = 28302;

	class Root : public WorldUpType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ROOT_.CTOR_OFFSET))(nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ROOT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_ROOT_GET_RETURNTYPE_OFFSET))(nullptr);
		}

	};
}

