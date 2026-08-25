#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9663370)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x96633D0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x96633E0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96633F0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9663420)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x965E2C0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9663430)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9663450)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9663480)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x96634B0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x96634E0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9663510)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression_TypeDefinitionIndex = 33086;

	class MethodCallExpression : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _Method_k__BackingField; // 0x10

		::System::Void .ctor(::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetInstance()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Object()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_OBJECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Arguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_REWRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

	};
}

