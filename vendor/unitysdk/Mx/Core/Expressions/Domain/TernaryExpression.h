#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_SET_MIDDLEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x107B8C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_SET_RIGHTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x107B8D0)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_GET_MIDDLEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x107B8E0)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107B8F0)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_SET_LEFTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x107B950)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x107B960)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_GET_RIGHTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x107B990)
#define MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_GET_LEFTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x107B9A0)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int TernaryExpression_TypeDefinitionIndex = 12893;

	class TernaryExpression : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* _LeftExpression_k__BackingField; // 0x10
		::MX::Core::Expressions::Domain::LogicalExpression* _MiddleExpression_k__BackingField; // 0x18
		::MX::Core::Expressions::Domain::LogicalExpression* _RightExpression_k__BackingField; // 0x20

		::System::Void set_MiddleExpression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_SET_MIDDLEEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Void set_RightExpression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_SET_RIGHTEXPRESSION_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* get_MiddleExpression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_GET_MIDDLEEXPRESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::Expressions::Domain::LogicalExpression* arg, ::MX::Core::Expressions::Domain::LogicalExpression* arg2, ::MX::Core::Expressions::Domain::LogicalExpression* arg3)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::MX::Core::Expressions::Domain::LogicalExpression*, ::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_LeftExpression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_SET_LEFTEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* get_RightExpression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_GET_RIGHTEXPRESSION_OFFSET))(nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* get_LeftExpression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_TERNARYEXPRESSION_GET_LEFTEXPRESSION_OFFSET))(nullptr);
		}

	};
}

