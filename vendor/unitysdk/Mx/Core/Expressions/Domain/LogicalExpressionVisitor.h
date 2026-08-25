#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class TernaryExpression; }
namespace MX::Core::Expressions::Domain { class BinaryExpression; }
namespace MX::Core::Expressions::Domain { class UnaryExpression; }
namespace MX::Core::Expressions::Domain { class ValueExpression; }
namespace MX::Core::Expressions::Domain { class Function; }
namespace MX::Core::Expressions::Domain { class Identifier; }

#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1076690)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int LogicalExpressionVisitor_TypeDefinitionIndex = 12888;

	class LogicalExpressionVisitor : public Il2CppObject
	{
	public:
		::System::Void Visit(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::TernaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::TernaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::BinaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::BinaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::UnaryExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::UnaryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::ValueExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::ValueExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::Function* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Function*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void Visit(::MX::Core::Expressions::Domain::Identifier* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::Identifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_VISIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSIONVISITOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

