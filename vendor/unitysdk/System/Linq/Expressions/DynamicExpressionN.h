#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9653000)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9653C90)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9653D30)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9653DD0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_REWRITE_OFFSET UNITYSDK_OFFSET(0x9653E10)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpressionN_TypeDefinitionIndex = 33034;

	class DynamicExpressionN : public Il2CppObject
	{
	public:
		Il2CppObject* _arguments; // 0x20

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* System.Linq.Expressions.IArgumentProvider.GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Linq.Expressions.IArgumentProvider.get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSIONN_REWRITE_OFFSET))(arg, nullptr);
		}

	};
}

