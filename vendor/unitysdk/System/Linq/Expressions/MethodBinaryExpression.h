#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9636430)
#define SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x96365C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodBinaryExpression_TypeDefinitionIndex = 32979;

	class MethodBinaryExpression : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _method; // 0x30

		::System::Void .ctor(::System::Linq::Expressions::ExpressionType* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Type* arg, ::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::ExpressionType*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODBINARYEXPRESSION_GETMETHOD_OFFSET))(nullptr);
		}

	};
}

