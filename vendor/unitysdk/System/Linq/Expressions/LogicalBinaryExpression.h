#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9636160)
#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96361E0)
#define SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9636240)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LogicalBinaryExpression_TypeDefinitionIndex = 32974;

	class LogicalBinaryExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ExpressionType* _NodeType_k__BackingField; // 0x20

		::System::Void .ctor(::System::Linq::Expressions::ExpressionType* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::ExpressionType*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LOGICALBINARYEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

	};
}

