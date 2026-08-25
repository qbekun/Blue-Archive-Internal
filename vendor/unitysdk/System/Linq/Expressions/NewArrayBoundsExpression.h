#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9665A40)
#define SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9665B20)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewArrayBoundsExpression_TypeDefinitionIndex = 33102;

	class NewArrayBoundsExpression : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWARRAYBOUNDSEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

	};
}

