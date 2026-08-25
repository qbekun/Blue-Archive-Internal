#pragma once
#include "../../../../unitysdk.h"

namespace MS::Internal::Xml::XPath { class AstNode; }

#define MS_INTERNAL_XML_XPATH_OPERATOR_INVERTOPERATOR_OFFSET UNITYSDK_OFFSET(0x9943150)
#define MS_INTERNAL_XML_XPATH_OPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9948650)
#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99486A0)
#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x99486B0)
#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_OPERATORTYPE_OFFSET UNITYSDK_OFFSET(0x99486D0)
#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_OPERAND1_OFFSET UNITYSDK_OFFSET(0x99486E0)
#define MS_INTERNAL_XML_XPATH_OPERATOR_GET_OPERAND2_OFFSET UNITYSDK_OFFSET(0x99486F0)
#define MS_INTERNAL_XML_XPATH_OPERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9948700)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int Operator_TypeDefinitionIndex = 28291;

	class Operator : public WorldUpType
	{
	public:
		::Il2CppArray<::System::Object*>* s_invertOp; // 0x0
		Op* _opType; // 0x10
		::MS::Internal::Xml::XPath::AstNode* _opnd1; // 0x18
		::MS::Internal::Xml::XPath::AstNode* _opnd2; // 0x20

		Op* InvertOperator(Op* arg)
		{
			return (return (Op*(*)(Op*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_INVERTOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Op* arg, ::MS::Internal::Xml::XPath::AstNode* arg, ::MS::Internal::Xml::XPath::AstNode* arg)
		{
			((::System::Void(*)(Op*, ::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		AstType* get_Type()
		{
			return (return (AstType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathResultType* get_ReturnType()
		{
			return (return (::System::Xml::XPath::XPathResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		Op* get_OperatorType()
		{
			return (return (Op*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_OPERATORTYPE_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* get_Operand1()
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_OPERAND1_OFFSET))(nullptr);
		}

		::MS::Internal::Xml::XPath::AstNode* get_Operand2()
		{
			return (return (::MS::Internal::Xml::XPath::AstNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_GET_OPERAND2_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_OPERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

