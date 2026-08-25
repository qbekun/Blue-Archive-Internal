#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9636500)
#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x96365A0)
#define SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96365B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SimpleBinaryExpression_TypeDefinitionIndex = 32978;

	class SimpleBinaryExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ExpressionType* _NodeType_k__BackingField; // 0x20
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::ExpressionType* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::ExpressionType*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SIMPLEBINARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

