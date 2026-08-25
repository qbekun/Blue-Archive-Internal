#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_.CTOR_OFFSET UNITYSDK_OFFSET(0x96532A0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9653E40)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9653EE0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9653EF0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_REWRITE_OFFSET UNITYSDK_OFFSET(0x9653F00)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpression1_TypeDefinitionIndex = 33036;

	class DynamicExpression1 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x20

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* System.Linq.Expressions.IArgumentProvider.GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Linq.Expressions.IArgumentProvider.get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION1_REWRITE_OFFSET))(arg, nullptr);
		}

	};
}

