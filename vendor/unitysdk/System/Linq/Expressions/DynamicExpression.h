#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9652D20)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x9652DA0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x9652DB0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9652EA0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9653140)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x96533E0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9653600)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x9653850)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9653AE0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9653B40)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x9653B50)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x9653B60)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9652E80)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9653B70)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x9653BA0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REWRITE_OFFSET UNITYSDK_OFFSET(0x9653C00)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9653C30)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9653C60)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpression_TypeDefinitionIndex = 33033;

	class DynamicExpression : public Il2CppObject
	{
	public:
		::System::Runtime::CompilerServices::CallSiteBinder* _Binder_k__BackingField; // 0x10
		::System::Type* _DelegateType_k__BackingField; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanReduce()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_CANREDUCE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REDUCE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Make(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Make(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Make(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Make(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Make(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_MAKE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ExpressionType* get_NodeType()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Runtime::CompilerServices::CallSiteBinder* get_Binder()
		{
			return (return (::System::Runtime::CompilerServices::CallSiteBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_BINDER_OFFSET))(nullptr);
		}

		::System::Type* get_DelegateType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_DELEGATETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Arguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::ExpressionVisitor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_ACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_REWRITE_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* System.Linq.Expressions.IArgumentProvider.GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Linq.Expressions.IArgumentProvider.get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

	};
}

