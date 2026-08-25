#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_VARIABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x994E1E0)
#define MS_INTERNAL_XML_XPATH_VARIABLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x994E230)
#define MS_INTERNAL_XML_XPATH_VARIABLE_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x994E240)
#define MS_INTERNAL_XML_XPATH_VARIABLE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x994E250)
#define MS_INTERNAL_XML_XPATH_VARIABLE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x994E260)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Variable_TypeDefinitionIndex = 28306;

	class Variable : public WorldUpType
	{
	public:
		::System::String* _localname; // 0x10
		::System::String* _prefix; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_.CTOR_OFFSET))(str, str, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Localname()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_VARIABLE_GET_PREFIX_OFFSET))(nullptr);
		}

	};
}

