#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9652A20)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9652A80)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9652AF0)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9652B00)
#define SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9652B10)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ConstantExpression_TypeDefinitionIndex = 33029;

	class ConstantExpression : public Il2CppObject
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CONSTANTEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

	};
}

