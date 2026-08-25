#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_.CTOR_OFFSET UNITYSDK_OFFSET(0x96635D0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9663650)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x96636F0)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9663790)
#define SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_REWRITE_OFFSET UNITYSDK_OFFSET(0x96637D0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MethodCallExpressionN_TypeDefinitionIndex = 33088;

	class MethodCallExpressionN : public Il2CppObject
	{
	public:
		Il2CppObject* _arguments; // 0x18

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrMakeArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_GETORMAKEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_METHODCALLEXPRESSIONN_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

