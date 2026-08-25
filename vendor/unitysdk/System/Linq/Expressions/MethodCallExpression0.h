#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9663B00)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9663B60)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9663BC0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9663BD0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_REWRITE_OFFSET UNITYSDK_OFFSET(0x9663C20)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression0_TypeDefinitionIndex = 33090;

	class MethodCallExpression0 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Reflection::MethodInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION0_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

