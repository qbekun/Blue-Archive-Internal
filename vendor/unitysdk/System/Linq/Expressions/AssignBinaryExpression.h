#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9636250)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96362D0)
#define SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9636300)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int AssignBinaryExpression_TypeDefinitionIndex = 32975;

	class AssignBinaryExpression : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ASSIGNBINARYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

	};
}

