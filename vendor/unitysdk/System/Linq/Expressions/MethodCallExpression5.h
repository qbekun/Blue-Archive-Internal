#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_.CTOR_OFFSET UNITYSDK_OFFSET(0x9664920)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9664A00)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9664AD0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9664AE0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_REWRITE_OFFSET UNITYSDK_OFFSET(0x9664AF0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpression5_TypeDefinitionIndex = 33095;

	class MethodCallExpression5 : public Il2CppObject
	{
	public:
		::System::Object* _arg0; // 0x18
		::System::Linq::Expressions::Expression* _arg1; // 0x20
		::System::Linq::Expressions::Expression* _arg2; // 0x28
		::System::Linq::Expressions::Expression* _arg3; // 0x30
		::System::Linq::Expressions::Expression* _arg4; // 0x38

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSION5_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

