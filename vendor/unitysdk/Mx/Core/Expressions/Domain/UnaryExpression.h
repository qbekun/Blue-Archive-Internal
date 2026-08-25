#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class UnaryExpressionType; }
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107B9B0)
#define MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x107B9F0)
#define MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x107BA00)
#define MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_SET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x107BA10)
#define MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x107BA20)
#define MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x107BA50)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int UnaryExpression_TypeDefinitionIndex = 12894;

	class UnaryExpression : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* _Expression_k__BackingField; // 0x10
		::MX::Core::Expressions::Domain::UnaryExpressionType* _Type_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Core::Expressions::Domain::UnaryExpressionType* arg, ::MX::Core::Expressions::Domain::LogicalExpression* arg2)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::UnaryExpressionType*, ::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Expressions::Domain::UnaryExpressionType* get_Type()
		{
			return ((::MX::Core::Expressions::Domain::UnaryExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::MX::Core::Expressions::Domain::UnaryExpressionType* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::UnaryExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Expression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_SET_EXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* get_Expression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_UNARYEXPRESSION_GET_EXPRESSION_OFFSET))(nullptr);
		}

	};
}

