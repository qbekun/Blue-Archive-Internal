#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYINITEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96659C0)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYINITEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9665B10)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewArrayInitExpression_TypeDefinitionIndex = 33101;

	class NewArrayInitExpression : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYINITEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYINITEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

	};
}

