#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace MX::Core::Expressions::Domain { class BinaryExpressionType; }
namespace MX::Core::Expressions::Domain { class LogicalExpressionVisitor; }

#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_GET_RIGHTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1076590)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_GET_LEFTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x10765A0)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_SET_LEFTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x10765B0)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x10765C0)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10765F0)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1076600)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1076660)
#define MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_SET_RIGHTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1076670)

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int BinaryExpression_TypeDefinitionIndex = 12881;

	class BinaryExpression : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* _LeftExpression_k__BackingField; // 0x10
		::MX::Core::Expressions::Domain::LogicalExpression* _RightExpression_k__BackingField; // 0x18
		::MX::Core::Expressions::Domain::BinaryExpressionType* _Type_k__BackingField; // 0x20

		::MX::Core::Expressions::Domain::LogicalExpression* get_RightExpression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_GET_RIGHTEXPRESSION_OFFSET))(nullptr);
		}

		::MX::Core::Expressions::Domain::LogicalExpression* get_LeftExpression()
		{
			return ((::MX::Core::Expressions::Domain::LogicalExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_GET_LEFTEXPRESSION_OFFSET))(nullptr);
		}

		::System::Void set_LeftExpression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_SET_LEFTEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Void Accept(::MX::Core::Expressions::Domain::LogicalExpressionVisitor* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Expressions::Domain::BinaryExpressionType* get_Type()
		{
			return ((::MX::Core::Expressions::Domain::BinaryExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::Expressions::Domain::BinaryExpressionType* arg, ::MX::Core::Expressions::Domain::LogicalExpression* arg2, ::MX::Core::Expressions::Domain::LogicalExpression* arg3)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::BinaryExpressionType*, ::MX::Core::Expressions::Domain::LogicalExpression*, ::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Type(::MX::Core::Expressions::Domain::BinaryExpressionType* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::BinaryExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RightExpression(::MX::Core::Expressions::Domain::LogicalExpression* arg)
		{
			((::System::Void(*)(::MX::Core::Expressions::Domain::LogicalExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_DOMAIN_BINARYEXPRESSION_SET_RIGHTEXPRESSION_OFFSET))(arg, nullptr);
		}

	};
}

