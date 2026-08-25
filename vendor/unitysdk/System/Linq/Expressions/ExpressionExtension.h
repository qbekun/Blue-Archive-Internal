#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9653E20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9654D60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9653F40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9654240)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x96545D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9654A00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_GETVALIDMETHODFORDYNAMIC_OFFSET UNITYSDK_OFFSET(0x9655480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_OFFSET UNITYSDK_OFFSET(0x96555C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_OFFSET UNITYSDK_OFFSET(0x9655650)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ExpressionExtension_TypeDefinitionIndex = 33044;

	class ExpressionExtension : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, Il2CppObject* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::DynamicExpression* MakeDynamic(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Linq::Expressions::DynamicExpression*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_MAKEDYNAMIC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetValidMethodForDynamic(::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_GETVALIDMETHODFORDYNAMIC_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateDynamicArgument(::System::Linq::Expressions::Expression* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void ValidateDynamicArgument(::System::Linq::Expressions::Expression* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSIONEXTENSION_VALIDATEDYNAMICARGUMENT_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

