#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_.CTOR_OFFSET UNITYSDK_OFFSET(0x96539A0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x96548C0)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9654980)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9654990)
#define SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_REWRITE_OFFSET UNITYSDK_OFFSET(0x96549A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int DynamicExpression4_TypeDefinitionIndex = 33042;

	class DynamicExpression4 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x20
		::System::Linq::Expressions::Expression* _arg1; // 0x28
		::System::Linq::Expressions::Expression* _arg2; // 0x30
		::System::Linq::Expressions::Expression* _arg3; // 0x38

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* System.Linq.Expressions.IArgumentProvider.GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Linq.Expressions.IArgumentProvider.get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_SYSTEM.LINQ.EXPRESSIONS.IARGUMENTPROVIDER.GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* Rewrite(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_DYNAMICEXPRESSION4_REWRITE_OFFSET))(arg, nullptr);
		}

	};
}

