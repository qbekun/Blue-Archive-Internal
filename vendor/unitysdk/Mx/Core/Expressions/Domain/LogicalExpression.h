#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class BinaryExpression; }
namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_EXTRACTSTRING_OFFSET UNITYSDK_OFFSET(0x10786C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_AND_OFFSET UNITYSDK_OFFSET(0x1078B80)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_AND_OFFSET UNITYSDK_OFFSET(0x1078C10)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_DIVIDEDBY_OFFSET UNITYSDK_OFFSET(0x1078CC0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_DIVIDEDBY_OFFSET UNITYSDK_OFFSET(0x1078D50)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_EQUALSTO_OFFSET UNITYSDK_OFFSET(0x1078E00)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_EQUALSTO_OFFSET UNITYSDK_OFFSET(0x1078E90)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1078F40)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1078FD0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATEROREQUALTHAN_OFFSET UNITYSDK_OFFSET(0x1079080)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATEROREQUALTHAN_OFFSET UNITYSDK_OFFSET(0x1079110)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSERTHAN_OFFSET UNITYSDK_OFFSET(0x10791C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSERTHAN_OFFSET UNITYSDK_OFFSET(0x1079250)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSEROREQUALTHAN_OFFSET UNITYSDK_OFFSET(0x1079300)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSEROREQUALTHAN_OFFSET UNITYSDK_OFFSET(0x1079390)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MINUS_OFFSET UNITYSDK_OFFSET(0x1079440)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MINUS_OFFSET UNITYSDK_OFFSET(0x10794D0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MODULO_OFFSET UNITYSDK_OFFSET(0x1079580)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MODULO_OFFSET UNITYSDK_OFFSET(0x1079610)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_NOTEQUAL_OFFSET UNITYSDK_OFFSET(0x10796C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_NOTEQUAL_OFFSET UNITYSDK_OFFSET(0x1079750)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_OR_OFFSET UNITYSDK_OFFSET(0x1079800)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_OR_OFFSET UNITYSDK_OFFSET(0x1079890)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_PLUS_OFFSET UNITYSDK_OFFSET(0x1079940)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_PLUS_OFFSET UNITYSDK_OFFSET(0x10799D0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MULT_OFFSET UNITYSDK_OFFSET(0x1079A80)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MULT_OFFSET UNITYSDK_OFFSET(0x1079B10)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1079BC0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1079C50)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1079D00)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1079D90)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEXOR_OFFSET UNITYSDK_OFFSET(0x1079E40)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEXOR_OFFSET UNITYSDK_OFFSET(0x1079ED0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1079F80)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x107A010)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x107A0C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x107A150)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x107A200)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x107A2A0)
#define MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1076650)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int LogicalExpression_TypeDefinitionIndex = 12887;

	class LogicalExpression : public Il2CppObject
	{
	public:
		::System::Char BS; // 0x0

		::System::String* extractString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_EXTRACTSTRING_OFFSET))(str, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* And(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_AND_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* And(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_AND_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* DividedBy(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_DIVIDEDBY_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* DividedBy(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_DIVIDEDBY_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* EqualsTo(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_EQUALSTO_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* EqualsTo(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_EQUALSTO_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* GreaterThan(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATERTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* GreaterThan(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATERTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* GreaterOrEqualThan(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATEROREQUALTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* GreaterOrEqualThan(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_GREATEROREQUALTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* LesserThan(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSERTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* LesserThan(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSERTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* LesserOrEqualThan(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSEROREQUALTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* LesserOrEqualThan(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LESSEROREQUALTHAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Minus(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MINUS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Minus(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MINUS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Modulo(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MODULO_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Modulo(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MODULO_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* NotEqual(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_NOTEQUAL_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* NotEqual(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_NOTEQUAL_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Or(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_OR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Or(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_OR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Plus(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_PLUS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Plus(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_PLUS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Mult(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MULT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* Mult(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_MULT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* BitwiseOr(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* BitwiseOr(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* BitwiseAnd(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEAND_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* BitwiseAnd(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEAND_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* BitwiseXOr(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEXOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* BitwiseXOr(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_BITWISEXOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* LeftShift(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LEFTSHIFT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* LeftShift(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_LEFTSHIFT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* RightShift(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_RIGHTSHIFT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpression* RightShift(::System::Object* arg)
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpression*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_RIGHTSHIFT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_LOGICALEXPRESSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

