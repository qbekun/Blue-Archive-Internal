#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9663C70)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9663CF0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9663D90)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9663DA0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_REWRITE_OFFSET UNITYSDK_OFFSET(0x9663DB0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression1_TypeDefinitionIndex = 33091;

	class MethodCallExpression1 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x18

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION1_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

