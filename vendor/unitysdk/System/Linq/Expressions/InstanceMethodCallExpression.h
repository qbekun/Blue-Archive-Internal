#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9663540)
#define SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x96635C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int InstanceMethodCallExpression_TypeDefinitionIndex = 33087;

	class InstanceMethodCallExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _instance; // 0x18

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetInstance()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INSTANCEMETHODCALLEXPRESSION_GETINSTANCE_OFFSET))(nullptr);
		}

	};
}

