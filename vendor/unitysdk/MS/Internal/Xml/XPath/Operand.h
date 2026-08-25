#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_OPERAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948500)
#define MS_INTERNAL_XML_XPATH_OPERAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948540)
#define MS_INTERNAL_XML_XPATH_OPERAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99485C0)
#define MS_INTERNAL_XML_XPATH_OPERAND_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x99485D0)
#define MS_INTERNAL_XML_XPATH_OPERAND_GET_OPERANDVALUE_OFFSET UNITYSDK_OFFSET(0x99485E0)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Operand_TypeDefinitionIndex = 28288;

	class Operand : public WorldUpType
	{
	public:
		::System::Xml::XPath::XPathResultType* _type; // 0x10
		::System::Object* _val; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_.CTOR_OFFSET))(arg, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Object* get_OperandValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERAND_GET_OPERANDVALUE_OFFSET))(nullptr);
		}

	};
}

